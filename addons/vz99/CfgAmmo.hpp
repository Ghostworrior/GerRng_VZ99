class CfgAmmo {
    class SmokeShellArty;
    class ShotDeployBase;
    class Sh_82mm_AMOS;
    class Flare_82mm_AMOS_White;

    //Smokes:
    class GVAR(deploy_smokeWhite): SmokeShellArty {
        effectsSmoke ="WPExplosionEdit";
        explosionEffects ="WPExplosionEdit";
        timeToLive = 90;
        whistleDist = 100;
        whistleOnFire = 1;
        explosionTime = 0.1;
    };
    class GVAR(deploy_smokeWhiteVT): GVAR(deploy_smokeWhite) {
        effectsSmoke ="WPExplosionVT";
        explosionEffects ="WPExplosionVT";
        timeToLive = 10;
    };
    class GVAR(ammo_smokeWhite): ShotDeployBase {
        model = "\A3\weapons_f\ammo\shell";
        submunitionAmmo = QGVAR(deploy_smokeWhite);
        whistleDist = 100;
        whistleOnFire = 1;
    };
    class GVAR(ammo_smokeWhiteVT): ShotDeployBase {
        model = "\A3\weapons_f\ammo\shell";
        submunitionAmmo = QGVAR(deploy_smokeWhiteVT);
        whistleDist = 100;
        whistleOnFire = 1;
    };

    //Flare:
    class GVAR(ammo_flare): Flare_82mm_AMOS_White {
        flareSize = 6;
        intensity = 2000000;
        timeToLive = 75;
        flareAirFriction = -0.75;
    };
    class GVAR(ammo_flare_IR): GVAR(ammo_flare) {
        intensity = 1500000;
        irLight = 1;
    };
    //HE:
    class GVAR(ammo_he): Sh_82mm_AMOS {
        ace_frag_classes[] = {"ACE_frag_small_HD"}; //HD have move air friction
        ace_frag_force = 1;

        // effectFly = "ArtilleryTrails"; //Fun but not don't make any sense

        fuseDistance = 50; //The minimum distance any explosive projectile has to travel, before it becomes armed and thus explodes on impact.
        hit = 100;
        indirectHit = 10;
        indirectHitRange = 9;

        muzzleEffect = "";
        class CamShakeExplode {
            power = "(82*0.2)";
            duration = "((round (82^0.5))*0.2 max 0.2)";
            frequency = 20;
            distance = "((18 + 82^0.5)*8)";
        };
        class CamShakeHit {
            power = 82;
            duration = "((round (82^0.25))*0.2 max 0.2)";
            frequency = 20;
            distance = 1;
        };
        class CamShakeFire {
            power = "(82^0.25)";
            duration = "((round (82^0.5))*0.2 max 0.2)";
            frequency = 20;
            distance = "((82^0.5)*8)";
        };
        class CamShakePlayerFire {
            power = 0.01;
            duration = 0.1;
            frequency = 20;
            distance = 1;
        };
    };
    /*class GVAR(ammo_he_airburst): GVAR(ammo_he) {
        simulation = "shotRocket";
        timeToLive = 0;
        vz_burstHeight = 20;
        vz_shellParam[] = {40, 7, 4, 1800, "B_408_Ball", 5, "APERSMine",0};
        // explosionEffects = "HERocketExplosion"; //ExploAmmoExplosion, HEShellExplosion
        // CraterEffects = "";
    };*/
};
