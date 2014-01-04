#include "operators/scalarOperators.hpp"
#include "scalar.hpp"
#include "vector.hpp"
#include "bivector.hpp"
#include "trivector.hpp"
#include "quadvector.hpp"
#include "antiscalar.hpp"
#include "antivector.hpp"
#include "antibivector.hpp"
#include "antitrivector.hpp"
#include "antiquadvector.hpp"

namespace gca
{

//----- Les fonctions 2 à 2 sont les meme mais prennent leurs arguments dans le sens inverse
GCA_scalar operator^ (const GCA_scalar& a, const GCA_scalar& b){
	GCA_scalar res;
  res = a * b;
	return res;
}
//-----

// scalar^vector / vector^scalar
GCA_vector operator^ (const GCA_scalar& a, const GCA_vector& b){
	GCA_vector res;
	for (int i=0; i<b.size();++i){
    res(i) = a * b(i);

	}
	return res;
}

GCA_vector operator^ (const GCA_vector& b, const GCA_scalar& a){
  GCA_vector res;
  for (int i=0; i<b.size();++i){
    res(i) = a * b(i);

  }
  return res;
}

//scalar^bivector / bivector^scalar
GCA_bivector operator^ (const GCA_scalar& a, const GCA_bivector& b){
	GCA_bivector res;
	for (int i=0; i<b.size();++i){
    res(i) = a * b(i);

	}
	return res;
}

GCA_bivector operator^ (const GCA_bivector& b, const GCA_scalar& a){
  GCA_bivector res;
  for (int i=0; i<b.size();++i){
    res(i) = a * b(i);

  }
  return res;
}

//scalar^trivector / trivector^scalar
GCA_trivector operator^ (const GCA_scalar& a, const GCA_trivector& b){
	GCA_trivector res;
	for (int i=0; i<b.size();++i){
    res(i) = a * b(i);

	}
	return res;
}

GCA_trivector operator^ (const GCA_trivector& b, const GCA_scalar& a){
  GCA_trivector res;
  for (int i=0; i<b.size();++i){
    res(i) = a * b(i);

  }
  return res;
}

//scalar^quadvector / quadvector^scalar
GCA_quadvector operator^ (const GCA_scalar& a, const GCA_quadvector& b){
	GCA_quadvector res;
	for (int i=0; i<b.size();++i){
    res(i) = a * b(i);

	}
	return res;
}

GCA_quadvector operator^ (const GCA_quadvector& b, const GCA_scalar& a){
  GCA_quadvector res;
  for (int i=0; i<b.size();++i){
    res(i) = a * b(i);

  }
  return res;
}


/*  ----------------------------------------- ANTI ----------------------------------------------*/

GCA_antiscalar operator^ (const GCA_scalar& a, const GCA_antiscalar& b){
	GCA_antiscalar res;
  res = a * b;
	return res;
}


GCA_antivector operator^ (const GCA_scalar& a, const GCA_antivector& b){
	GCA_antivector res;
	for (int i=0; i<b.size();++i){
    res(i) = a.value * b(i);

	}
	return res;
}

GCA_antibivector operator^ (const GCA_scalar& a, const GCA_antibivector& b){
	GCA_antibivector res;
	for (int i=0; i<b.size();++i){
    res(i) = a.value * b(i);

	}
	return res;
}

GCA_antitrivector operator^ (const GCA_scalar& a, const GCA_antitrivector& b){
	GCA_antitrivector res;
	for (int i=0; i<b.size();++i){
    res(i) = a.value * b(i);

	}
	return res;
}

GCA_antiquadvector operator^ (const GCA_scalar& a, const GCA_antiquadvector& b){
	GCA_antiquadvector res;
    res = a.value *b.value;
	return res;
}

GCA_antiquadvector operator~(const GCA_scalar& a){
	GCA_antiquadvector res;
  res.value = a.value;
	return res;
}

} //namespace gca
