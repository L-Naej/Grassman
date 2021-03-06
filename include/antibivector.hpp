#pragma once
#include <vector>

#include <Eigen/Dense>
#include <iostream>

namespace gca
{

typedef Eigen::Matrix<double, 6, 1> Vector6d;

class GCA_antibivector: public Vector6d
{
public:
  typedef Vector6d Base;

  GCA_antibivector();

  GCA_antibivector(const GCA_antibivector& other);

  GCA_antibivector(double a, double b, double c, double d, double e, double f);


  ~GCA_antibivector();

  GCA_antibivector& operator=(const GCA_antibivector& other);

  void setBases();

  friend std::ostream& operator<<(std::ostream& stream, const GCA_antibivector& antibivector);


private:
  std::vector <unsigned int> Bases;


  };
}

