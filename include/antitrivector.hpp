#pragma once

#include <Eigen/Dense>

namespace gca
{

  class GCA_antitrivector: public Eigen::Vector4d
	{
	public:

	  typedef Eigen::Vector4d Base;

    GCA_antitrivector();

    GCA_antitrivector(const GCA_antitrivector& other);

    GCA_antitrivector(double x, double y, double z, double w);

    ~GCA_antitrivector();

    GCA_antitrivector& operator=(const GCA_antitrivector& other);

    void setBases();

private:
	std::vector <unsigned int> Bases;


	};
}
