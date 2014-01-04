#include "vector.hpp"

namespace gca
{

GCA_vector::GCA_vector()
  : Base()
{
	setBases();

}

GCA_vector::GCA_vector(const GCA_vector& other)
  : Base(other)
{
	setBases();

}

GCA_vector::GCA_vector(double x, double y, double z, double w)
  : Base()
{
  *this << x, y, z, w;
  	setBases();

}

GCA_vector::~GCA_vector()
{
}

void GCA_vector::setBases(){
	for (int i=0; i<4; ++i){
		Bases.push_back(i);
  }
}

std::ostream& operator <<(std::ostream& stream, const GCA_vector& vector)
{
  stream << "Vector[" << vector(0) << "e1, " << vector(1) << "e2, " << vector(2) << "e3, " << vector(3) << "e4]";
  return stream;
}

} // namespace gca
