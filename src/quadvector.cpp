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

GCA_quadvector::GCA_quadvector(double value)
    : Base(), value(value)
{
  	setBases();
}

GCA_quadvector::~GCA_quadvector()
{
}

void GCA_quadvector::setBases(){
  Bases.push_back(1234);
}

GCA_quadvector&GCA_quadvector::operator =(const GCA_quadvector& other)
{
  *this = other;
  Bases = other.Bases;
  return *this;
}
