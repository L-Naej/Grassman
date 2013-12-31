#include "bivector.hpp"
#include "bases.hpp"
#include "vectorOperators.hpp"

using namespace gca;

GCA_bivector::GCA_bivector()
  : Base()
{
  setBases();
}

GCA_bivector::GCA_bivector(const GCA_bivector& other)
  : Base(other)
{
  setBases();
}

GCA_bivector::GCA_bivector(double a, double b, double c, double d, double e, double f)
{
  *this << a, b, c, d, e, f;
  setBases();
}

/*GCA_bivector::GCA_bivector(const GCA_vector& a, const GCA_vector& b)
{
  *this = a ^ b;
}*/ 
  // Pourquoi ici? C'est sans vectorOpérations non?

GCA_bivector::~GCA_bivector()
{
}

void GCA_bivector::setBases(){
  for (int i=1; i<=3; ++i){
    for (int j=i+1; j<=4; ++j){
        Bases.push_back(i*10+j*);
      }
  }
}

/*

GCA_bivector operator^(GCA_scalar value){
  //bivector^scalar = bivector
  // 2-blade + 0-balde = 2-blade
}

GCA_trivector operator^(GCA_vector& other){
  //bivector^vector = trivector
  // 2-blade + 1-balde = 3-blade

}

GCA_quadrivector operator^(GCA_bivector other){
  //bivector^bivector = quadrivector
  // 2-blade + 2-balde = 4-blade

}


GCA_antibivector operator~(){
  //si on est sur eii, il faut un eii pour faire R4
}



GCA_quadrivector operator^(GCA_antitrivector& other){
  //trivector^antitrivector = quadriivector
  // 3-blade + 1-balde = 4-blade

}

GCA_trivector operator^(GCA_antiquadrivector& other){
  //trivector^antiquadrivector = trivector
  // 3-blade + 0-balde = 3-blade

}

*/

