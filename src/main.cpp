#include "vector.hpp"
#include "bivector.hpp"
#include "vectorOperators.hpp"

#include <iostream>

int main(int argc, char** argv)
{

  gca::GCA_vector vec(1.0, 0.0, 0.0, 1.0);
  gca::GCA_vector vec2(0.0, 1.0, 0.0, 1.0);
  gca::GCA_bivector bivec(vec, vec2);

  //bivec = vec ^ vec2;
  std::cout << bivec << std::endl;
  return 0;
}
