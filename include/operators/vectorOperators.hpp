#pragma once
#include "scalar.hpp"
#include "vector.hpp"
#include "bivector.hpp"
#include "trivector.hpp"
#include "quadvector.hpp"
#include "antibivector.hpp"
#include "antivector.hpp"
#include "antitrivector.hpp"
#include "antiquadvector.hpp"

namespace gca
{

GCA_bivector operator^(const GCA_vector& a, const GCA_vector& b);

GCA_trivector operator^(const GCA_vector& a, const GCA_bivector& b);

GCA_quadvector operator^(const GCA_vector& a, const GCA_trivector& b);

/*------------------------------ Anti -------------------------------*/

GCA_quadvector operator^(const GCA_vector& a, const GCA_antivector& b);

GCA_trivector operator^(const GCA_vector& a, const GCA_antibivector& b);

GCA_bivector operator^(const GCA_vector& a, const GCA_antitrivector& b);

GCA_vector operator^(const GCA_vector& a, const GCA_antiquadvector& b);

// convertisseur en base duale
GCA_antitrivector operator~(const GCA_vector& a);




} //namespace gca
