#include "anti_operators/antitrivectorOperators.hpp"
#include "vector.hpp"
#include "antitrivector.hpp"



namespace gca{
GCA_vector operator~(const GCA_antitrivector& a){
    GCA_vector result;
    result << -a(0), a(1), -a(2), a(3);
    return result;
}

}