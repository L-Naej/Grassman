#pragma once

//nombre de base possible : 4 (e123,e124,e134,e234) donc vector4d
namespace gca
{

class GCA_trivector: public Eigen::Vector4d
{

	GCA_trivector();
	GCA_trivector (const GCA_trivector& other);
	GCA_trivector(double a,double b,double c,double d);
	~GCA_trivector();
	void GCA_trivector::setBases();

	std::vector<unsigned int> Bases;

};

} //namespace gca
