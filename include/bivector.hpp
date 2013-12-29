//nombre de base possible : 6 (e12,e13,e14,e23,e24,e34) donc vector6d (ca existe? sinon Xd)

class GCA_bivector: public Eigen::Vector6d
{

	GCA_bivector();
	GCA_bivector (const GCA_bivector& other);
	GCA_bivector(a,b,c,d,e,f);
	~GCA_bivector();

	/*-------------------------------------------*/

	GCA_bivector operator^(GCA_scalar value){
		//bivector^scalar = bivector
		// 2-blade + 0-balde = 2-blade
	}

	GCA_trivector operator^(GCA_vector& other){
		//bivector^vector = trivector
		// 2-blade + 1-balde = 3-blade

	}

	GCA_quadrivector operator^(GCA_bivector other){
		//bivector^bivector = quadrivector
		// 2-blade + 2-balde = 4-blade

	}


/*-----------------------------------------------------*/

	GCA_antibivector operator~(){
		//si on est sur eii, il faut un eii pour faire R4
	}

/*-----------------------------------------------------*/



	GCA_quadrivector operator^(GCA_antitrivector& other){
		//trivector^antitrivector = quadriivector
		// 3-blade + 1-balde = 4-blade

	}

	GCA_trivector operator^(GCA_antiquadrivector& other){
		//trivector^antiquadrivector = trivector
		// 3-blade + 0-balde = 3-blade

	}
};
