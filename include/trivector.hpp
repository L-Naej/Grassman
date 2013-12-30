#pragma once

//nombre de base possible : 4 (e123,e124,e134,e234) donc vector4d

class GCA_trivector: public Eigen::Vector4d
{

	GCA_trivector();
	GCA_trivector (const GCA_trivector& other);
	GCA_trivector(a,b,c,d);
	~GCA_trivector();

	/*-------------------------------------------*/

	GCA_trivector operator^(GCA_scalar value){
		//trivector^scalar = trivector
		// 3-blade + 0-balde = 3-blade
	}

	GCA_quadrivector operator^(GCA_vector& other){
		//trivector^vector = quadrivector
		// 3-blade + 1-balde = 4-blade

	}


/*-----------------------------------------------------*/

	GCA_antivector operator~(){
		//si on est sur eiii, il faut un ei pour faire R4
	}

/*-----------------------------------------------------*/


	GCA_quadrivector operator^(GCA_antibivector other){
		//bivector^antibivector = quadrivector
		// 2-blade + 2-balde = 4-blade

	}

	GCA_trivector operator^(GCA_antitrivector& other){
		//bivector^antitrivector = trivector
		// 2-blade + 1-balde = 3-blade

	}

	GCA_bivector operator^(GCA_antiquadrivector& other){
		//bivector^antiquadrivector = quadrivector
		// 2-blade + 0-balde = 2-blade

	}
};
