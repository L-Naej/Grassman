#pragma once

namespace gca
{

	class GCA_quadvector: public Eigen::Vector4d{
	public:

	  typedef Eigen::Vector4d Base;

		GCA_quadvector();
		GCA_quadivector (const GCA_quadvector& other);
		GCA_quadvector(double a, double b,double c,double d);
		~GCA_quadvector();
		void GCA_quadvector::setBases();

		std::vector<unsigned int> Bases;

	};

}