#pragma once

//nombre de base possible : 6 (e12,e13,e14,e23,e24,e34)
#include <Eigen/Dense>

namespace gca
{


typedef Eigen::Matrix<double, 6, 1> Vector6d;

class GCA_bivector: public Vector6d
{
public:
  typedef Vector6d Base;

	GCA_bivector();
	GCA_bivector (const GCA_bivector& other);
  GCA_bivector(double a, double b, double c, double d, double e, double f);
	~GCA_bivector();
  void setBases();

  GCA_bivector& operator=(const GCA_bivector& other);


private:
  //Les bases par composante
  std::vector<unsigned int> Bases;

};

} //namespace gca
