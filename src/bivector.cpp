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

