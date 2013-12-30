#pragma once

//nombre de base possible : 6 (e12,e13,e14,e23,e24,e34) donc vector6d (ca existe? sinon Xd)
#include <Eigen/Dense>

class GCA_vector;

typedef Eigen::Matrix<double, 6, 1> Vector6d;

class GCA_bivector: public Vector6d
{
public:
  typedef Vector6d Base;

	GCA_bivector();
	GCA_bivector (const GCA_bivector& other);
  GCA_bivector(double a, double b, double c, double d, double e, double f);
  GCA_bivector(const GCA_vector& a, const GCA_vector& b);
	~GCA_bivector();

  //operator<< d'affectation déjà défini par Eigen::Matrix

  /*
  GCA_bivector operator^(GCA_scalar value);
  GCA_trivector operator^(GCA_vector& other);

  GCA_quadrivector operator^(GCA_bivector other);
  GCA_antibivector operator~();

  GCA_quadrivector operator^(GCA_antitrivector& other);

  GCA_trivector operator^(GCA_antiquadrivector& other);
*/
private:
  //Les bases par composante
  unsigned int firstBase;
  unsigned int secondBase;
  unsigned int thirdBase;
  unsigned int fourthBase;

};
