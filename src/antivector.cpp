#include "antivector.hpp"

namespace gca
{
	GCA_antivector::GCA_antivector()
  : Base()
{
	setBases();

}

GCA_antivector::GCA_antivector(const GCA_antivector& other)
  : Base(other)
{
	setBases();

}

GCA_antivector::GCA_antivector(double x, double y, double z, double w)
  : Base()
{
  *this << x, y, z, w;
  	setBases();

}

GCA_antivector::~GCA_antivector()
{
}

GCA_antivector&GCA_antivector::operator =(const GCA_antivector& other)
{
  *this = other;
  Bases = other.Bases;

  return *this;
}

void GCA_antivector::setBases(){
	for (int i=0; i<4; ++i){
		Bases.push_back(i);
  }
}

std::ostream& operator <<(std::ostream& stream, const GCA_antivector& antivector)
{
  stream << "Antivector[";
  for (unsigned int i = 0; i < antivector.rows(); ++i)
  {
    stream << antivector(i) << antivector.Bases[i];
    i != (antivector.rows() - 1) ? stream << ", " : stream << "]";
  }
  return stream;
}
}
