#include "quadvector.hpp"

using namespace gca;

	GCA_quadvector::GCA_quadvector()
  : Base()
{
	setBases();

}

GCA_quadvector::GCA_quadvector(const GCA_quadvector& other)
  : Base(other)
{
	setBases();

}

GCA_quadvector::GCA_quadvector(double x, double y, double z, double w)
  : Base()
{
  *this << x, y, z, w;
  	setBases();

}

GCA_quadvector::~GCA_quadvector()
{
}

void GCA_quadvector::setBases(){
	Bases.push_back(1234);
}