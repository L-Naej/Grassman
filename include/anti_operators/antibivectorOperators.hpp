#include "scalar.hpp"
#include "antibivector.hpp"
#include "bivector.hpp"



namespace gca{

//2+2-4=0
GCA_scalar operator^(const GCA_antibivector& a, const GCA_antibivector& b);

GCA_bivector operator~(const GCA_antibivector& a);

}
