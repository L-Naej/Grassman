#include "vector.hpp"
#include "bivector.hpp"
#include "operators/scalarOperators.hpp"
#include "operators/vectorOperators.hpp"
#include "operators/trivectorOperators.hpp"
#include "operators/bivectorOperators.hpp"
#include "operators/quadvectorOperators.hpp"
#include "scalar.hpp"

#include <iostream>

void plop()
{
  gca::GCA_vector a (1.0 ,2.0 ,3.0 ,1.0);
  std::cout << a << std::endl;
  gca::GCA_vector b ;
  b << -1.0 , -3.0 , 2.0 , 1.0;
  gca::GCA_bivector l = a ^ b ; // l is a Plucker line
  std::cout << " l : " << l << std :: endl ;
  gca::GCA_vector x1 (2.0 , -1.0 , -1.0 ,1.0);
  gca::GCA_vector x2 (1.0 , -1.0 ,1.0 ,1.0);
  gca::GCA_vector x3 ( -1.0 , -1.0 , -2.0 ,1.0);
  gca::GCA_trivector d = x1 ^ x2 ^ x3 ; // d is a plane
  std::cout << d << std::endl;
  //std :: cout << " intersection : " << (~ d ^ ~l) << std :: endl ;
}

int main(int argc, char** argv)
{
  gca::GCA_vector vec1(1.0, 0.0, 0.0, 1.0);
  gca::GCA_vector vec2(0.0, 1.0, 0.0, 1.0);
  gca::GCA_vector vec3;
  vec3 << 12, 45, 20, 10;

  gca::GCA_scalar scalar1 = 3;
  gca::GCA_scalar scalar2;
  scalar2 << scalar1;//Les scalaires peuvent etres traités comme des doubles
  std::cout << scalar2 << std::endl;
  scalar2 << 42;
  std::cout << scalar2 << std::endl;

  std::cout << (scalar1 ^ vec1) << std::endl;

  gca::GCA_bivector bivector1 = vec1 ^ vec2;
  std::cout << bivector1 << std::endl;

  std::cout << ~bivector1 << std::endl;

  gca::GCA_trivector trivector1 = bivector1 ^ vec3;
  std::cout << trivector1 << std::endl;

  gca::GCA_bivector bivector2 = vec3 ^ vec1;
  gca::GCA_quadvector quadvector1 = bivector1 ^ bivector2;
  std::cout << quadvector1 << std::endl;

  std::cout << ~quadvector1 << std::endl;
  std::cout << ~trivector1 << std::endl;

  return 0;
}

