#include "bivector.hpp"
#include "bases.hpp"
#include "vectorWedgeProduct.hpp"

GCA_bivector::GCA_bivector()
  : Base()
{
}

GCA_bivector::GCA_bivector(const GCA_bivector& other)
  : GCA_bivector() // , firstBase(other.firstBase), secondBase(other.secondBase), thirdBase(other.thirdBase), fourthBase(other.fourthBase)
{
}

GCA_bivector::GCA_bivector(double a, double b, double c, double d, double e, double f)
  : firstBase(Bases::e1), secondBase(Bases::e2), thirdBase(Bases::e3), fourthBase(Bases::e4)
{
  *this << a, b, c, d, e, f;
}

GCA_bivector::GCA_bivector(const GCA_vector& a, const GCA_vector& b)
{
  *this = a ^ b;
}

GCA_bivector::~GCA_bivector()
{
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

