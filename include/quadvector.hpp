#pragma once
#include <Eigen/Dense>
#include <vector>
#include <iostream>

namespace gca
{

class GCA_quadvector: public Eigen::Vector4d
{
public:

  typedef Eigen::Vector4d Base;

  GCA_quadvector();
  GCA_quadvector (const GCA_quadvector& other);
      GCA_quadvector(double value);
  ~GCA_quadvector();
  void setBases();

  GCA_quadvector& operator=(const GCA_quadvector& other);

  friend std::ostream& operator<<(std::ostream& stream, const GCA_quadvector& quadvector);

  std::vector<unsigned int> Bases;
      double value;

};

}
