#include "vector.hpp"

/*
GCA_antitrivector operator~(){
  //si on est sur ei, il faut un eiii pour faire R4
}
*/


GCA_vector::GCA_vector()
  : Base()
{
}

GCA_vector::GCA_vector(const GCA_vector& other)
  : Base(other)
{
}

GCA_vector::GCA_vector(double x, double y, double z, double w)
  : Base()
{
  *this << x, y, z, w;
}

GCA_vector::~GCA_vector()
{
}
