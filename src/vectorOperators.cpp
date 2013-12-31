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

}

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
