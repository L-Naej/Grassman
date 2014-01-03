#pragma once
#include "scalar.hpp"
#include "vector.hpp"
#include "bivector.hpp"
#include "trivector.hpp"
#include "quadvector.hpp"

namespace gca
{

class GCA_antiscalar;
class GCA_antivector;
class GCA_antibivector;
class GCA_antitrivector;
class GCA_antiquadvector;

GCA_scalar operator^ (const GCA_scalar& a, const GCA_scalar& b);

GCA_vector operator^ (const GCA_scalar& a, const GCA_vector& b);

GCA_bivector operator^ (const GCA_scalar& a, const GCA_bivector& b);

GCA_trivector operator^ (const GCA_scalar& a, const GCA_trivector& b);

GCA_quadvector operator^ (const GCA_scalar& a, const GCA_quadvector& b);


/*  ----------------------------------------- ANTI ----------------------------------------------*/

GCA_antiscalar operator^ (const GCA_scalar& a, const GCA_antiscalar& b);

GCA_antivector operator^ (const GCA_scalar& a, const GCA_antivector& b);

GCA_antibivector operator^ (const GCA_scalar& a, const GCA_antibivector& b);

GCA_antitrivector operator^ (const GCA_scalar& a, const GCA_antitrivector& b);

GCA_antiquadvector operator^ (const GCA_scalar& a, const GCA_antiquadvector& b);

/*-------------------------------------------Convertisseur base duale ------------------------------------*/

GCA_antiquadvector operator~(const GCA_scalar& a);

}
