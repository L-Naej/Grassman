#pragma once
#include <Eigen/Dense>

namespace gca
{

	class GCA_quadvector: public Eigen::Vector4d{
	public:

	  typedef Eigen::Vector4d Base;

		GCA_quadvector();
    GCA_quadvector (const GCA_quadvector& other);
		GCA_quadvector(double a, double b,double c,double d);
		~GCA_quadvector();
    void setBases();

		std::vector<unsigned int> Bases;

	};

}
