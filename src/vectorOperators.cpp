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

/*
GCA_vector operator^(GCA_scalar value){
  //vector^scalar = vector
  // 1-blade + 0-balde = 1-blade
}

GCA_trivector operator^(GCA_bivector other){
  //vector^bivector = trivector
  // 1-blade + 2-balde = 3-blade

}

GCA_quadrivector operator^(GCA_trivector& other){
  //vector^trivector = quadrivector
  // 1-blade + 3-balde = 4-blade

}


GCA_antitrivector operator~(){
  //si on est sur ei, il faut un eiii pour faire R4
}



GCA_quadrivector operator^(GCA_antivector& other){
  //vector^antivector = quadrivector
  // 1-blade + 3-balde = 4-blade

}

GCA_trivector operator^(GCA_antibivector other){
  //vector^antibivector = trivector
  // 1-blade + 2-balde = 3-blade

}

GCA_bivector operator^(GCA_antitrivector& other){
  //vector^antirivector = quadrivector
  // 1-blade + 1-balde = 2-blade

}

GCA_vector operator^(GCA_antiquadrivector& other){
  //vector^antiquadrivector = vector
  // 1-blade + 0-balde = 1-blade

}
*/
