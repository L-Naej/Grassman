#include "antiquadvector.hpp"

using namespace gca;

GCA_antiquadvector::GCA_antiquadvector()
  :value(0)
{
}

GCA_antiquadvector::GCA_antiquadvector(const GCA_antiquadvector& other)
  :value(other->value)
{
}

GCA_antiquadvector::GCA_antiquadvector(double value)
  :value(value)
{
}

GCA_antiquadvector::~GCA_antiquadvector()
{
}

void GCA_antiquadvector::setBases(){
	Bases.push_back(1234);
}