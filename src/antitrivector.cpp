#include "antitrivector.hpp"

namespace gca
{

GCA_antitrivector::GCA_antitrivector()
  : Base()
{
	setBases();

}

GCA_antitrivector::GCA_antitrivector(const GCA_antitrivector& other)
  : Base(other)
{
	setBases();

}

GCA_antitrivector::GCA_antitrivector(double x, double y, double z, double w)
  : Base()
{
  *this << x, y, z, w;
  	setBases();

}

GCA_antitrivector::~GCA_antitrivector()
{
}

GCA_antitrivector&GCA_antitrivector::operator =(const GCA_antitrivector& other)
{
  *this = other;
  Bases = other.Bases;

  return *this;
}

void GCA_antitrivector::setBases(){
	for (int i=1; i<=2; ++i){
		for (int j=i+1; j<=3; ++j){
			for (int k=j+1; k<= 4; ++k){
				Bases.push_back(i*100+j*10+k);
			}
		}
  }
}

//Bases e123 , e124 , e134 , e234
std::ostream& operator <<(std::ostream& stream, const GCA_antitrivector& antitrivector)
{
  stream << "Antitrivector[";
  for (unsigned int i = 0; i < antitrivector.rows(); ++i)
  {
    stream << antitrivector(i) << antitrivector.Bases[i];
    i != (antitrivector.rows() - 1) ? stream << ", " : stream << "]";
  }
  return stream;
}

}//namespace gca
