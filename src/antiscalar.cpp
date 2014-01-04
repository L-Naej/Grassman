#include "antiscalar.hpp"

namespace gca
{

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

std::ostream& operator <<(std::ostream& stream, const GCA_antiscalar& antiscalar)
{
  stream << "Antiscalar[" << antiscalar.value << "]";
  return stream;
}

/*GCA_antiscalar&GCA_antiscalar::operator =(const GCA_antiscalar& other)
{
  value = other.value;
  return *this;
}*/

} //namespace gca
