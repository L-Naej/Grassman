#pragma once

#include <Eigen/Dense>

namespace gca
{

typedef Eigen::Matrix<double, 6, 1> Vector6d;

class GCA_antibivector : public Vector6d
{
public:
  typedef Vector6d Base;

  GCA_antibivector();
  GCA_antibivector(const GCA_antibivector& other);
  GCA_antibivector(double a, double b, double c, double d);
  ~GCA_antibivector();
  	std::vector <unsigned int> Bases;
	void GCA_antibivector::setBases();

private:
};

} //namespace gca
