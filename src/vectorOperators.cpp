#include "vectorOperators.hpp"

using namespace gca;

GCA_bivector operator^(const GCA_vector& a, const GCA_vector& b)
{
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

GCA_trivector operator^(const GCA_vector& a, const GCA_bivector& b){
    gca::GCA_trivector result;
    result(0) = b(0)*a(2) - b(1)*a(1) + b(3)*a(0);
    result(1) = b(0)*a(3) - b(2)*a(1) + b(4)*a(0);
    result(2) = b(1)*a(3) - b(2)*a(2) + b(5)*a(0);
    result(3) = b(3)*a(3) - b(4)*a(2) + b(5)*a(1);
    return result;

}
/* EXPLICATION 
b= (b(0)e12,b(1)e13, b(2)e14, b(3)e23, b(4)e24, b(5)e34)
a=(a(0)e1, a(1)e2, a(2)e3, a(3)e4)

On fait les combinaisons pour avoir un trivector =(result(0)e123, result(1)e124, result(2)e134, result(3)e234)
*/

GCA_quadvector operator^(const GCA_vector& a, const GCA_trivector& b){
  
}

GCA_quadvector operator^(const GCA_vector& a, const GCA_antivector& b){
  
}

GCA_trivector operator^(const GCA_vector& a, const GCA_antibivector& b){
  
}

GCA_bivector operator^(const GCA_vector& a, const GCA_antitrivector& b){
  
}

GCA_vector operator^(const GCA_vector& a, const GCA_antiquadvector& b){
  
}

/*--------------------------------------- Le convertisseur en base duale donne un trivector ---------------------------------------*/

//car Bases (1,2,3,4)
GCA_antitrivector operator~(const GCA_scalar& a){
  GCA_antitrivector result;
  result<< -a(0), a(1, -a(2), a(3);
    return result;
}
