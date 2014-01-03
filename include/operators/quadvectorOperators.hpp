#pragma once
#include "quadvectorOperators.hpp"
#include "quadvector.hpp"
#include "antiscalar.hpp"

namespace gca
{

	GCA_quadvector operator^(const GCA_quadvector& a, const GCA_antiquadvector& b);

	GCA_antiscalar operator~(const GCA_quadvector& a);

}
