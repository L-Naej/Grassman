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
  stream << "Quadvector[" << quadvector(0) << "e1234]";
  return stream;
}

} //namespace gca
