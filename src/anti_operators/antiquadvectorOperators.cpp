#include "anti_operators/antiquadvectorOperators.hpp"
#include "scalar.hpp"
#include "antiquadvector.hpp"



namespace gca{

GCA_scalar operator~(const GCA_antiquadvector& a){
    GCA_scalar result;
    result = a.value;
    return result;
}

}
