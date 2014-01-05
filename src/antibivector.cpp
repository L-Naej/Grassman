#include "antibivector.hpp"

namespace gca
{

GCA_antibivector::GCA_antibivector()
  : Base()
{
  setBases();
}

GCA_antibivector::GCA_antibivector(const GCA_antibivector& other)
  : Base(other)
{
  setBases();
}

GCA_antibivector::GCA_antibivector(double a, double b, double c, double d, double e, double f)
{
  *this << a, b, c, d, e, f;
  setBases();
}


GCA_antibivector::~GCA_antibivector()
{
}

GCA_antibivector& GCA_antibivector::operator =(const GCA_antibivector& other)
{
  *this = other;
  Bases = other.Bases;
  return *this;
}

void GCA_antibivector::setBases()
{
  for (unsigned int i=1; i<=3; ++i)
  {
    for (unsigned int j=i+1; j<=4; ++j)
    {
        Bases.push_back(i*10+j);
     }
  }
}

//Bases e12 , e13 , e14 , e23 , e24 , e34
std::ostream& operator <<(std::ostream& stream, const GCA_antibivector& antibivector)
{
  stream << "Antibivector[";
  for (unsigned int i = 0; i < antibivector.rows(); ++i)
  {
    stream << antibivector(i) << "e" << antibivector.Bases[i];
    i != (antibivector.rows() - 1) ? stream << ", " : stream << "]";
  }
  return stream;
}

} //namespace gca
