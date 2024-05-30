class CfgCloudlets
{
	class Default;
	class WPCloud;
	class WPTrails;
	class WPCloudEdit: WPCloud
	{
			lifeTime = 30;
			lifeTimeVar = 15;
			Weight = 10;
			rubbing = 0.04;
			moveVelocityVar[] = {0, 0, 0};		// variability in direction and speed of particle (each part of vector has it is own variability)
			moveVelocity[] = {0, 0, 0};			// direction and speed of movement of particle [x,z,y]
	};
	class WPCloudVT: WPCloudEdit
	{
		lifeTime = 30;
		lifeTimeVar = 15;
		Weight = 10;
		rubbing = 0.04;
  	position[] = {0,15,0};
		moveVelocityVar[] = {0, -1, 0.1};		// variability in direction and speed of particle (each part of vector has it is own variability)
		moveVelocity[] = {0.1, -0.5, 0};
	};
	class WPTrailsVT:WPTrails{
		position[] = {0,15,0};
	};
};
