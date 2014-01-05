#include "anti_operators/antivectorOperators.hpp"
#include "scalar.hpp"
#include "vector.hpp"
#include "bivector.hpp"
#include "trivector.hpp"

#include "antivector.hpp"
#include "antibivector.hpp"
#include "antitrivector.hpp"


namespace gca{

//3+1-4=0
GCA_scalar operator^(const GCA_antivector& a, const GCA_antitrivector& b){
  GCA_scalar result;
  int size = b.size()-1;

  for (int i=0; i<=b.size(); ++i){
    if (i%2 == 0){
      result.value -= a(i)*b(size-i);
    }
    else{
      result.value += a(i)*b(size-i);
    }
  }
  return result; 
}

//3+2-4=1
GCA_vector operator^(const GCA_antivector& a, const GCA_antibivector& b){
    GCA_vector result;
    result(0) = b(0)*a(2) - b(1)*a(1) + b(3)*a(0);
    result(1) = b(0)*a(3) - b(2)*a(1) + b(4)*a(0);
    result(2) = b(1)*a(3) - b(2)*a(2) + b(5)*a(0);
    result(3) = b(3)*a(3) - b(4)*a(2) + b(5)*a(1);
    return result;
}


//3+3-4=2
GCA_bivector operator^(const GCA_antivector& a, const GCA_antivector& b){
  GCA_bivector res;
  int compteur = 0;
  for (int i=0; i<a.size()-1; ++i){
    for (int j=i+1; i<a.size(); ++j){
      res(compteur)=a(i)*b(j)-a(j)*b(i);
      compteur ++;
    }
  }
  return res;
}

GCA_trivector operator~(const GCA_antivector& a){
    GCA_trivector result;
    result << -a(0), a(1), -a(2), a(3);
    return result;
}

}
