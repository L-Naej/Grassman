#pragma once

//nombre de base possible : 4 (e1,e2,e3,e4) donc vector4d
#include <Eigen/Dense>

namespace gca
{

class GCA_vector: public Eigen::Vector4d
{
public:

  typedef Eigen::Vector4d Base;

	GCA_vector();
	GCA_vector (const GCA_vector& other);
  GCA_vector(double x, double y, double z, double w);
	~GCA_vector();
  void setBases();

  GCA_vector& operator=(const GCA_vector& other);

	std::vector <unsigned int> Bases;

};

} //namespace gca
