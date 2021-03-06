#include "scalar.hpp"

namespace gca
{

GCA_scalar::GCA_scalar()
  : Bases(0), value(0)
{
}

GCA_scalar::GCA_scalar(const GCA_scalar& other)
  : Bases(0),value(other.value)
{
}

GCA_scalar::GCA_scalar(double value)
  : Bases(0), value(value)
{
}

GCA_scalar::~GCA_scalar()
{
}

GCA_scalar&GCA_scalar::operator =(const GCA_scalar& other)
{
  *this = other;
  Bases = other.Bases;

  return *this;
}

void GCA_scalar::operator <<(const double& value)
{
  this->value = value;
}

void GCA_scalar::operator <<(const int& value)
{
  this->value = value;
}

std::ostream& operator <<(std::ostream& stream, const GCA_scalar& scalar)
{
  stream << "Scalar[" << scalar.value << "]";
  return stream;
}


} // namespace gca
