#include "trivector.hpp"

using namespace gca;


	GCA_trivector::GCA_trivector()
  : Base()
{
	setBases();

}

GCA_trivector::GCA_trivector(const GCA_trivector& other)
  : Base(other)
{
	setBases();

}

GCA_trivector::GCA_trivector(double x, double y, double z, double w)
  : Base()
{
  *this << x, y, z, w;
  	setBases();

}

GCA_trivector::~GCA_trivector()
{
}

void GCA_trivector::setBases(){
	for (int i=1; i<=2; ++i){
		for (int j=i+1; j<=3; ++j){
			for (int k=j+1; k<= 4; ++k){
				Bases.push_back(i*100+j*10+k);
			}
		}
	}
}