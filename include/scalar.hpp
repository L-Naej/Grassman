#pragma once

#include <Eigen/Dense>

namespace gca
{
	class GCA_scalar{
		double value;
		GCA_scalar::GCA_scalar();
		GCA_scalar::GCA_scalar(const GCA_scalar& other);
		GCA_scalar::GCA_scalar(double value);
		GCA_scalar::~GCA_scalar();

	};
}
