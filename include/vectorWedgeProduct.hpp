#pragma once
#include "vector.hpp"
#include "bivector.hpp"

//GCA_vector operator^(GCA_scalar value);

GCA_bivector operator^(const GCA_vector& a, const GCA_vector& b);

/*
GCA_trivector operator^(GCA_bivector other);

GCA_quadrivector operator^(GCA_trivector& other);


GCA_quadrivector operator^(GCA_antivector& other);

GCA_trivector operator^(GCA_antibivector other);

GCA_bivector operator^(GCA_antitrivector& other);

GCA_vector operator^(GCA_antiquadrivector& other);
*/
