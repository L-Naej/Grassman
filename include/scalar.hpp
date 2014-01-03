#pragma once

#include <Eigen/Dense>

namespace gca
{
	class GCA_scalar{
  private:
    std::vector<unsigned int> Bases;
		double value;

  public:
    GCA_scalar();
    GCA_scalar(const GCA_scalar& other);
    GCA_scalar(double value);
    ~GCA_scalar();

    operator double() const
    {return value;}

	};
}
