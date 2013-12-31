#include "bivectorOperators.hpp"

GCA_antibivector operator~(const GCA_bivector& bivec)
{

}


/*--------------------------- Convertisseur en base duale ------------------------*/
//Bases (e12, e13, e14, e23, e24, e34)

GCA_antibivector operator~(const GCA_bivector& a){
	GCA_antibivector result;
	result<< a(0),-a(1),a(2),a(3),-a(4),a(5),
	return result;
}


