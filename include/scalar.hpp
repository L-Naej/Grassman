#pragma once

//nombre de base possible : 4 (e1,e2,e3,e4) donc vector4d
#include <Eigen/Dense>

namespace gca
{
	class GCA_scalar{
		double value;
		std::vector <unsigned int> Bases;

		GCA_scalar::GCA_scalar();
		GCA_scalar::GCA_scalar(const GCA_scalar& other);
		GCA_scalar::GCA_scalar(double value);
		GCA_scalar::~GCA_scalar();

	};
}
