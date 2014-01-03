#include "vector.hpp"
#include "bivector.hpp"
#include "operators/vectorOperators.hpp"

#include <iostream>

int main(int argc, char** argv)
{

  gca::GCA_vector vec(1.0, 0.0, 0.0, 1.0);
  gca::GCA_vector vec2(0.0, 1.0, 0.0, 1.0);

  return 0;
}

void plop()
{
  gca :: GCA_vector a (1.0 ,2.0 ,3.0 ,1.0);
  gca :: GCA_vector b ;
  b << -1.0 , -3.0 , 2.0 , 1.0;
  gca :: GCA_bivector l = a ^ b ; // l is a Plucker line
  std :: cout << " l : " << l << std :: endl ;
  gca :: GCA_vector x1 (2.0 , -1.0 , -1.0 ,1.0);
  gca :: GCA_vector x2 (1.0 , -1.0 ,1.0 ,1.0);
  gca :: GCA_vector x3 ( -1.0 , -1.0 , -2.0 ,1.0);
  gca :: GCA_trivector d = x1 ^ x2 ^ x3 ; // d is a plane
  std :: cout << " intersection : " << ~ d ^~ l << std :: endl ;
}
