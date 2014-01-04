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

GCA_quadvector operator^(const GCA_bivector& a, const GCA_bivector& b);

GCA_quadvector operator^(const GCA_bivector& a, const GCA_antibivector& b);
GCA_trivector operator^(const GCA_bivector& a, const GCA_antitrivector& b);
GCA_bivector operator^(const GCA_bivector& a, const GCA_antiquadvector& b);


GCA_antibivector operator~(const GCA_bivector& bivec);


} //namespace gca
