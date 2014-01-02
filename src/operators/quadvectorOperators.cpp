#pragma once
#include "quadvectorOperators.hpp"
#include "quadvector.hpp"
#include "antiquadvector.hpp"
#include "antiscalar.hpp"

namespace gca
{

	GCA_quadvector operator^(const GCA_quadvector& a, const GCA_antiquadvector& b){
	GCA_bivector result;
	GCA_scalar BD-b=~b;
	result = a^BD-b;
	return result;
}

	/*--------------------------- Convertisseur en base duale ------------------------*/
//Bases (e1234)

GCA_antiscalar operator~(const GCA_quadvector& a){
	GCA_antiscalar result;
	result->value = a(0);
	return result;
}
}