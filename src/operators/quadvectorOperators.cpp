#include "operators/quadvectorOperators.hpp"
#include "quadvector.hpp"
#include "antiquadvector.hpp"
#include "antiscalar.hpp"
#include "scalar.hpp"
#include "bivector.hpp"

namespace gca
{

	GCA_quadvector operator^(const GCA_quadvector& a, const GCA_antiquadvector& b){
	GCA_bivector result;
  GCA_scalar BD_b=~b;
  result = a^BD_b;
	return result;
}

	/*--------------------------- Convertisseur en base duale ------------------------*/
//Bases (e1234)

GCA_antiscalar operator~(const GCA_quadvector& a){
	GCA_antiscalar result;
  result = a(0);
	return result;
}
}
