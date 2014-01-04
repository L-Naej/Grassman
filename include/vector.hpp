#pragma once

//nombre de base possible : 4 (e1,e2,e3,e4) donc vector4d
#include <Eigen/Dense>
#include <vector>
#include <iostream>

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

  friend std::ostream& operator<<(std::ostream& stream, const GCA_vector& vector);

	std::vector <unsigned int> Bases;

};

} //namespace gca
