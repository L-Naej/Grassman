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

GCA_trivector&GCA_trivector::operator =(const GCA_trivector& other)
{
  *this = other;
  Bases = other.Bases;
  return *this;
}

//Bases (e123, e124, e134, e234)

std::ostream& operator <<(std::ostream& stream, const GCA_trivector& trivector)
{
  stream << "Trivector[" << trivector(0) << "e123, " << trivector(1) << "e124," << trivector(2)
         << "e134," << trivector(3) << "e234]";
  return stream;
}
