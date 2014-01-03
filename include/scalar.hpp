#pragma once
#include <vector>

#include <Eigen/Dense>

namespace gca
{
	class GCA_scalar{
  private:
    std::vector <unsigned int> Bases;

  public:
    GCA_scalar();
    GCA_scalar(const GCA_scalar& other);
    GCA_scalar(double value);
    ~GCA_scalar();

    GCA_scalar& operator=(const GCA_scalar& other);

    operator double() const
    {return value;}

    double value;

	};
}
