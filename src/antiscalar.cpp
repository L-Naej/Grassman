#include "antiscalar.hpp"
#include "vectorOperators.hpp"

using namespace gca;

GCA_antiscalar::GCA_antiscalar()
  : Base()
{
  setBases();
}

GCA_antiscalar::GCA_antiscalar(const GCA_antiscalar& other)
  : Base(other), value(other->value)
{
  setBases();
}

GCA_antiscalar::GCA_antiscalar(double a)
{
  *this->value = a;
  setBases();
}



GCA_antiscalar::~GCA_antiscalar()
{
}

	std::vector <unsigned int> Bases;
	void GCA_antiscalar::setBases();
