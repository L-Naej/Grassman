#pragma once

#include <Eigen/Dense>
#include <vector>


//nombre de base possible : 4 (e123,e124,e134,e234) donc vector4d
namespace gca
{

class GCA_trivector: public Eigen::Vector4d
{
public:

  typedef Eigen::Vector4d Base;
	GCA_trivector();
	GCA_trivector (const GCA_trivector& other);
	GCA_trivector(double a,double b,double c,double d);
	~GCA_trivector();
  void setBases();

  GCA_trivector& operator=(const GCA_trivector& other);

private:
	std::vector<unsigned int> Bases;

};

} //namespace gca
