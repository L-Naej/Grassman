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

private:
};

} //namespace gca
