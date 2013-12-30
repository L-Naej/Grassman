#pragma once

//nombre de base possible : 1 (e1234)
namespace gca
{

class GCA_quadrivector
{

	GCA_trivector();
	GCA_trivector (const GCA_quadrivector& other);
	GCA_trivector(float);
	~GCA_trivector();

	/*-------------------------------------------*/

	GCA_quadrivector operator^(GCA_scalar value){
		//quadrivector^scalar = quadrivector
		// 4-blade + 0-balde = 4-blade
	}


/*-----------------------------------------------------*/

	GCA_antiscalar operator~(){
		//on a déjà R4
	}

/*-----------------------------------------------------*/


	GCA_quadrivector operator^(GCA_antiquadrivector other){
		//quadrivector^antiquadrivector = quadrivector
		// 4-blade + 0-balde = 4-blade

	}
};

} //namespace gca
