#include "antiscalar.hpp"

using namespace gca;

GCA_antiscalar::GCA_antiscalar()
  : Base()
{
}

GCA_antiscalar::GCA_antiscalar(const GCA_antiscalar& other)
  : Base(other), value(other->value)
{
}

GCA_antiscalar::GCA_antiscalar(double value)
 : Base(), value(value)
{
  
}

GCA_antiscalar::~GCA_antiscalar()
{
}

GCA_antiscalar&GCA_antiscalar::operator =(const GCA_antiscalar& other)
{
  value = other.value;
  return *this;
}

