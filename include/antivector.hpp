#pragma once

#include <Eigen/Dense>

namespace gca
{

  class GCA_antivector: public Eigen::Vector4d
  {
  public:

    typedef Eigen::Vector4d Base;


    GCA_antivector();

    GCA_antivector(const GCA_antivector& other);

    GCA_antivector(double x, double y, double z, double w);

    ~GCA_antivector();

  void setBases();

	private:
	std::vector <unsigned int> Bases;


	};
}
