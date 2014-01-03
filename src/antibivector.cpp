#include "antibivector.hpp"

using namespace gca;

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


