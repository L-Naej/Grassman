#pragma once
#include "trivectorOperators.hpp"
#include "scalar.hpp"
#include "vector.hpp"
#include "bivector.hpp"
#include "trivector.hpp"
#include "quadvector.hpp"
#include "antivector.hpp"
#include "antitrivector.hpp"
#include "antiquadvector.hpp"


namespace gca
{

GCA_quadvector operator^(const GCA_trivector& a, const GCA_antitrivector b);

GCA_trivector operator^(const GCA_trivector& a, const GCA_antiquadvector b);

GCA_antivector operator~(const GCA_trivector& a);
}
