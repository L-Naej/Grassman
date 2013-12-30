#include "scalar.hpp"

using namespace gca;



GCA_scalar::GCA_scalar()
  : Bases(0),value(0)
{
}

GCA_scalar::GCA_scalar(const GCA_scalar& other)
  : 
  value(other->value)
{
}

GCA_scalar::GCA_scalar(double value)
  : Bases(0), value(value)
{
}

GCA_scalar::~GCA_scalar()
{
}