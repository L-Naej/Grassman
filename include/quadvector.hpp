#pragma once

namespace gca
{

	class GCA_quadvector: public Eigen::Vector4d
	{

		GCA_quadvector();
		GCA_quadivector (const GCA_quadvector& other);
		GCA_quadvector(a,b,c,d);
		~GCA_quadvector();
		void GCA_quadvector::setBases();

		std::vector<unsigned int> Bases;

	};

}