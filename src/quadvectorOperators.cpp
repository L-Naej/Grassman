#pragma once
#include "scalar.hpp"
#include "vector.hpp"
#include "bivector.hpp"
#include "trivector.hpp"
#include "quadvector.hpp"

namespace gca
{
	/*--------------------------- Convertisseur en base duale ------------------------*/
//Bases (e1234)

GCA_antiscalar operator~(const GCA_quadvector& a){
	GCA_antiscalar result;
	result->value = a(0);
	return result;
}
}