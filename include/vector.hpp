//nombre de base possible : 4 (e1,e2,e3,e4) donc vector4d

class GCA_vector: public Eigen::Vector4d
{
	GCA_vector();
	GCA_vector (const GCA_vector& other);
	GCA_vector(a,b,c,d);
	~GCA_vector();

	/*-------------------------------------------*/

	GCA_vector operator^(GCA_scalar value){
		//vector^scalar = vector
		// 1-blade + 0-balde = 1-blade
	}

	GCA_bivector operator^(GCA_vector& other){
		//vector^vector = bivector
		// 1-blade + 1-balde = 2-blade

	}

	GCA_trivector operator^(GCA_bivector other){
		//vector^bivector = trivector
		// 1-blade + 2-balde = 3-blade

	}

	GCA_quadrivector operator^(GCA_trivector& other){
		//vector^trivector = quadrivector
		// 1-blade + 3-balde = 4-blade

	}

/*-----------------------------------------------------*/

	GCA_antitrivector operator~(){
		//si on est sur ei, il faut un eiii pour faire R4
	}

/*-----------------------------------------------------*/


	GCA_quadrivector operator^(GCA_antivector& other){
		//vector^antivector = quadrivector
		// 1-blade + 3-balde = 4-blade

	}

	GCA_trivector operator^(GCA_antibivector other){
		//vector^antibivector = trivector
		// 1-blade + 2-balde = 3-blade

	}

	GCA_bivector operator^(GCA_antitrivector& other){
		//vector^antirivector = quadrivector
		// 1-blade + 1-balde = 2-blade

	}

	GCA_vector operator^(GCA_antiquadrivector& other){
		//vector^antiquadrivector = vector
		// 1-blade + 0-balde = 1-blade

	}
};
