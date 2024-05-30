#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {QGVAR(mortar), QGVAR(box)};
        weapons[] = {QGVAR(carryWeapon)};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"A3_characters_F", "A3_Data_F"};
        author = "Ghostorrior expanding on work of Potato and Dankan37";
    };
};
class WPExplosion;
class WPExplosionEdit: WPExplosion
{
  class Explosion1
  {
		simulation = "particles";	// type of simulation - particles or light
		type = "WPCloudEdit";			// name of PE's class defined in CfgCloudlets or light's class defined in CfgLights
		position[] = {0, 0, 0};		// position related to the default position or memorypoint
		lifeTime = 15;			// life time of emitter
    intensity = 1;
    Interval = 1;
    blockAIVisibility = true;
  };
  class LightExp
  {
    simulation = "light";
    type = "ExploLight";
    intensity = 1;
    Interval = 1;
  };
  class Trails
  {
    simulation = "particles";
    type = "WPTrails";
    intensity = 1;
    Interval = 1;
    lifeTime = 1.25;
  };
};
class WPExplosionVT: WPExplosionEdit
{
  class Explosion1
  {
		simulation = "particles";	// type of simulation - particles or light
		type = "WPCloudVT";			// name of PE's class defined in CfgCloudlets or light's class defined in CfgLights
		position[] = {0, 0, 10};		// position related to the default position or memorypoint
		lifeTime = 15;			// life time of emitter
    intensity = 1;
    Interval = 1;
    blockAIVisibility = true;
  };
  class LightExp
  {
    position[] = {0, 0, 10};
    simulation = "light";
    type = "ExploLight";
    intensity = 1;
    Interval = 1;
  };
  class Trails
  {
    position[] = {0, 0, 10};
    simulation = "particles";
    type = "WPTrailsVT";
    intensity = 1;
    Interval = 1;
    lifeTime = 1.25;
  };
};
#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgCloudlets.hpp"
#include "CfgFunctions.hpp"
