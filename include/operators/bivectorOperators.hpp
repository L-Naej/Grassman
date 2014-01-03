#pragma once
#include "scalar.hpp"
#include "vector.hpp"
#include "bivector.hpp"
#include "trivector.hpp"
#include "quadvector.hpp"

namespace gca
{

class GCA_antibivector;
class GCA_antitrivector;
class GCA_antiquadvector;

GCA_quadvector operator^(GCA_bivector& a, GCA_bivector& b);

GCA_quadvector operator^(GCA_bivector& a, GCA_antibivector& b);
GCA_trivector operator^(GCA_bivector& a, GCA_antitrivector& b);
GCA_bivector operator^(GCA_bivector& a, GCA_antiquadvector& b);


GCA_antibivector operator~(const GCA_bivector& bivec);


} //namespace gca
