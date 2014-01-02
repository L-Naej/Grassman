#include "antivector.hpp"

using namespace gca;


	GCA_antivector::GCA_antivector()
  : Base()
{
	setBases();

}

GCA_antivector::GCA_antivector(const GCA_antivector& other)
  : Base(other)
{
	setBases();

}

GCA_antivector::GCA_antivector(double x, double y, double z, double w)
  : Base()
{
  *this << x, y, z, w;
  	setBases();

}

GCA_antivector::~GCA_antivector()
{
}

void GCA_antivector::setBases(){
	for (int i=0; i<4; ++i){
		Bases.push_back(i);
	}
}