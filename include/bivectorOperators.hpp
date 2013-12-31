#pragma once
#include "scalar.hpp"
#include "vector.hpp"
#include "bivector.hpp"
#include "trivector.hpp"
#include "quadvector.hpp"

namespace gca
{

GCA_trivector operator^(GCA_vector& other);
//GCA_quadrivector operator^(GCA_bivector other);

GCA_antibivector operator~(const GCA_bivector& bivec);


} //namespace gca
