#pragma once
#include "scalar.hpp"
#include "vector.hpp"
#include "bivector.hpp"
#include "trivector.hpp"
#include "quadvector.hpp"

namespace gca
{
	/*--------------------------- Convertisseur en base duale ------------------------*/
//Bases (e123, e124, e134, e234)

GCA_antivector operator~(const GCA_trivector& a){
	GCA_antivector result;
	result<< -a(0),a(1),-a(2),a(3);
	return result;
}
}