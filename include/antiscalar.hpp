#pragma once

#include <Eigen/Dense>

namespace gca
{
  class GCA_antiscalar{
  private:
		double value;
  public:
    GCA_antiscalar();
    GCA_antiscalar(const GCA_antiscalar& other);
    GCA_antiscalar(double value);
    ~GCA_antiscalar();

    operator double() const
    {return value;}

	};
}
