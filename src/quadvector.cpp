#include "quadvector.hpp"

namespace gca
{
GCA_quadvector::GCA_quadvector()
  : Base()
{
	setBases();

}

GCA_quadvector::GCA_quadvector(const GCA_quadvector& other)
  : Base(other)
{
	setBases();

}

GCA_quadvector::GCA_quadvector(double value)
    : Base(), value(value)
{
  	setBases();
}

GCA_quadvector::~GCA_quadvector()
{
}

void GCA_quadvector::setBases(){
  Bases.push_back(1234);
}

GCA_quadvector&GCA_quadvector::operator =(const GCA_quadvector& other)
{
  *this = other;
  Bases = other.Bases;
  return *this;
}

//Bases (e1234)
std::ostream& operator <<(std::ostream& stream, const GCA_quadvector& quadvector)
{
  stream << "Quadvector[";
  for (unsigned int i = 0; i < quadvector.rows(); ++i)
  {
    stream << quadvector(i) << "e" << quadvector.Bases[i];
    i != (quadvector.rows() - 1) ? stream << ", " : stream << "]";
  }
  return stream;
}

} //namespace gca
