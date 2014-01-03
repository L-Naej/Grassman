#include "operators/bivectorOperators.hpp"
#include "bivector.hpp"
#include "quadvector.hpp"
#include "trivector.hpp"
#include "antitrivector.hpp"
#include "antibivector.hpp"
#include "antiquadvector.hpp"

namespace gca{


/*--------------------------- Convertisseur en base duale ------------------------*/
//Bases (e12, e13, e14, e23, e24, e34)

GCA_quadvector operator^(const GCA_bivector& a, const GCA_bivector& b){
  GCA_quadvector result;
  int size=b.size()-1;

  for (int i=0; i<=size; ++i){
    // Les bases duales de e24=-e13 et celle de e13=-e24, qui sont aux indices 1 et 4 dans Bases
    if (i==1 || i==4){
      result.value = result.value - a(i) * b(size-i);
    }
    else{
      result.value = result.value+ a(i) * b(size-i);
    }
  }	
  return result;
}


/* exactement pareil avec antibivector */
GCA_quadvector operator^(const GCA_bivector& a, const GCA_antibivector& b){
  GCA_quadvector result;
  int size=b.size()-1;
  for (int i=0; i<=size; ++i){
    // Les bases duales de e24=-e13 et celle de e13=-e24, qui sont aux indices 1 et 4 dans Bases
    if (i==1 || i==4){
      result.value = result.value- a(i)*b(size-i);
    }
    else{
      result.value = result.value + a(i)*b(size-i);
    }
  }	
  return result;
}

/* exactement pareil que pour vector^bivector */
GCA_trivector operator^(const GCA_antitrivector& a, const GCA_bivector& b){
    GCA_trivector result;
    result(0) = b(0)*a(2) - b(1)*a(1) + b(3)*a(0);
    result(1) = b(0)*a(3) - b(2)*a(1) + b(4)*a(0);
    result(2) = b(1)*a(3) - b(2)*a(2) + b(5)*a(0);
    result(3) = b(3)*a(3) - b(4)*a(2) + b(5)*a(1);
    return result;

}


GCA_bivector operator^(const GCA_bivector& a, const GCA_antiquadvector& b){
	GCA_bivector result;
  GCA_scalar BD_b = ~b;
  result = a^BD_b;
	return result;
}

GCA_antibivector operator~(const GCA_bivector& a){
	GCA_antibivector result;
  result<< a(0),-a(1),a(2),a(3),-a(4),a(5);
	return result;
}

}


