#pragma once

#include <Eigen/Dense>

namespace gca
{
	class GCA_scalar{
		double value;
		GCA_antiscalar::GCA_antiscalar();
		GCA_antiscalar::GCA_antiscalar(const GCA_antiscalar& other);
		GCA_antiscalar::GCA_antiscalar(double value);
		GCA_antiscalar::~GCA_antiscalar();

	};
}