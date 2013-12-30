#include "vector.hpp"
#include "bivector.hpp"
#include "vectorWedgeProduct.hpp"

#include <iostream>

int main(int argc, char** argv)
{

  GCA_vector vec(1.0, 0.0, 0.0, 1.0);
  GCA_vector vec2(0.0, 1.0, 0.0, 1.0);
  GCA_bivector bivec(vec, vec2);

  //bivec = vec ^ vec2;
  std::cout << bivec << std::endl;
  return 0;
}
