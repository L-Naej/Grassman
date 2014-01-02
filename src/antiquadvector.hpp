#pragma once

#include <Eigen/Dense>

namespace gca
{

	class GCA_antiquadvector{
		double value;
		std::vector <unsigned int> Bases;
		GCA_antiquadvector::GCA_antiquadvector();

		GCA_antiquadvector::GCA_antiquadvector(const GCA_antiquadvector& other);

		GCA_antiquadvector::GCA_antiquadvector(double value);

		GCA_antiquadvector::~GCA_antiquadvector();

		void GCA_antiquadvector::setBases();

	};

}