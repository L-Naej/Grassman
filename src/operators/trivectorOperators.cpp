#include "operators/trivectorOperators.hpp"
#include "operators/scalarOperators.hpp"
#include "anti_operators/antiquadvectorOperators.hpp"

#include "scalar.hpp"
#include "vector.hpp"
#include "bivector.hpp"
#include "trivector.hpp"
#include "quadvector.hpp"
#include "antivector.hpp"
#include "antitrivector.hpp"
#include "antiquadvector.hpp"


namespace gca
{

GCA_quadvector operator^(const GCA_trivector& a, const GCA_antitrivector b){
	GCA_quadvector result;
  	int size = b.size()-1;

  for (int i=0; i<=b.size(); ++i){
    if (i%2 == 0){
      result.value = result.value - a(i)*b(size-i);
    }
    else{
      result.value = result.value + a(i)*b(size-i);
    }
  }
  return result;

}


GCA_trivector operator^(const GCA_trivector& a, const GCA_antiquadvector b){
    GCA_trivector result;
      GCA_scalar BD_b= ~b;
      result = BD_b^a;
	  return result;
}



	/*--------------------------- Convertisseur en base duale ------------------------*/
//Bases (e123, e124, e134, e234)

GCA_antivector operator~(const GCA_trivector& a){
	GCA_antivector result;
	result<< -a(0),a(1),-a(2),a(3);
	return result;
}
}
