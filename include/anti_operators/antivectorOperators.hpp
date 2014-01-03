#include "scalar.hpp"
#include "vector.hpp"
#include "bivector.hpp"

#include "antivector.hpp"
#include "antibivector.hpp"
#include "antitrivector.hpp"


namespace gca{

//3+1-4=0
GCA_scalar operator^(const GCA_antivector& a, const GCA_antitrivector& b);

//3+2-4=1
GCA_vector operator^(const GCA_antivector& a, const GCA_antibivector& b);


//3+3-4=2
GCA_bivector operator^(const GCA_antivector& a, const GCA_antivector& b);


}
