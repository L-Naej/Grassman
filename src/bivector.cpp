#include "bivector.hpp"

namespace gca
{

GCA_bivector::GCA_bivector()
  : Base()
{
  setBases();
}

GCA_bivector::GCA_bivector(const GCA_bivector& other)
  : Base(other)
{
  setBases();
}

GCA_bivector::GCA_bivector(double a, double b, double c, double d, double e, double f)
{
  *this << a, b, c, d, e, f;
  setBases();
}


GCA_bivector::~GCA_bivector()
{
}

void GCA_bivector::setBases(){
  for (int i=1; i<=3; ++i){
    for (int j=i+1; j<=4; ++j){
        Bases.push_back(i*10+j);
      }
  }
}

GCA_bivector&GCA_bivector::operator =(const GCA_bivector& other)
{
  *this = other;
  Bases = other.Bases;

  return *this;
}

//Bases (e12, e13, e14, e23, e24, e34)
std::ostream& operator <<(std::ostream& stream, const GCA_bivector& bivector)
{
  stream << "Bivector[" << bivector(0) << "e12, " << bivector(1) << "e13, " << bivector(2) << "e14, " << bivector(3) << "e23, "
         << bivector(4) << "e24, " << bivector(5) << "e34]";
  return stream;
}

} //namespace gca
