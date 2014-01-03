#pragma once

#include <Eigen/Dense>
#include <vector>

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

    GCA_antivector& operator=(const GCA_antivector& other);

  void setBases();

	private:
	std::vector <unsigned int> Bases;


	};
}
