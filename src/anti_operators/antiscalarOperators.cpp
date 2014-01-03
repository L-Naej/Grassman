#include "anti_operators/antiscalarOperators.hpp"
#include "vector.hpp"
#include "bivector.hpp"
#include "quadvector.hpp"
#include "trivector.hpp"
#include "antiscalar.hpp"
#include "antivector.hpp"
#include "antibivector.hpp"
#include "antitrivector.hpp"
#include "antiquadvector.hpp"


namespace gca{

//4+4-4=4
GCA_antiscalar operator^(const GCA_antiscalar& a, const GCA_antiscalar& b){
	GCA_antiscalar result = a.value*b.value;
	return result;
}

//4+3-4=3
GCA_trivector operator^(const GCA_antiscalar& a, const GCA_antivector& b){
    GCA_trivector result;
	for (int i=0; i< b.size(); ++i){
		result(i)=a.value*b(i);
	}
	return result;
}


//4+2-4=2
GCA_bivector operator^(const GCA_antiscalar& a, const GCA_antibivector& b){
    GCA_bivector result;
	for (int i=0; i< b.size(); ++i){
		result(i)=a.value*b(i);
	}
	return result;
}


//4+1-4=1
GCA_vector operator^(const GCA_antiscalar& a, const GCA_antitrivector& b){
    GCA_vector result;
	for (int i=0; i< b.size(); ++i){
		result(i)=a.value*b(i);
	}
	return result;
}

//4+0-4=0
GCA_scalar operator^(const GCA_antiscalar& a, const GCA_antiquadvector& b){
	GCA_scalar result;
	result.value = b.value*a.value;
	return result;
}

}
