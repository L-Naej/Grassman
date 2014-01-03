#pragma once

#include <Eigen/Dense>
#include <vector>

namespace gca
{
	class GCA_antiquadvector{
  public:
		double value;
		std::vector <unsigned int> Bases;
        
    GCA_antiquadvector();

    GCA_antiquadvector(const GCA_antiquadvector& other);

    GCA_antiquadvector(double value);

    ~GCA_antiquadvector();

    void setBases();

	};

}
