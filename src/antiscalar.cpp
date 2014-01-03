#include "antiscalar.hpp"

using namespace gca;

GCA_antiscalar::GCA_antiscalar()
{
}

GCA_antiscalar::GCA_antiscalar(const GCA_antiscalar& other)
  :value(other.value)
{
}

GCA_antiscalar::GCA_antiscalar(double value)
 :value(value)
{
  
}

GCA_antiscalar::~GCA_antiscalar()
{
}

/*GCA_antiscalar&GCA_antiscalar::operator =(const GCA_antiscalar& other)
{
  value = other.value;
  return *this;
}*/

