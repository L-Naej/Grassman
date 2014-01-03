#include "anti_operators/antibivectorOperators.hpp"
#include "scalar.hpp"
#include "antibivector.hpp"



namespace gca{

//2+2-4=0
GCA_scalar operator^(const GCA_antibivector& a, const GCA_antibivector& b){
    GCA_scalar result;
  int size=b.size()-1;

  for (int i=0; i<=size; ++i){
    if (i==1 || i==4){
      result.value = a(i)*b(size-i);
    }
    else{
      result.value += a(i)*b(size-i);
    }
  }
}






}
