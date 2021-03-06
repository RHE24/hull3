class MX {
    class Rifleman {
        weapons[] = {"arifle_MX_F", "hgun_Pistol_heavy_01_F"};
        primaryAttachments[] = {"acc_flashlight"};
        secondaryAttachments[] = {};
        magazines[] = {
            {"30Rnd_65x39_caseless_mag", 1},
            {"11Rnd_45ACP_Mag", 3}
        };
        helmet = "H_HelmetB_snakeskin";
        uniform = "U_B_CombatUniform_mcam";
        goggles = "";
        vest = "V_PlateCarrier2_rgr";
        vestMagazines[] = {
            {"30Rnd_65x39_caseless_mag", 8},
            {"SmokeShell", 2},
            {"HandGrenade", 2}
        };
        ruck = "B_AssaultPack_rgr";
        ruckWeapons[] = {};
        ruckMagazines[] = {
            {"30Rnd_65x39_caseless_mag", 4},
            {"30Rnd_65x39_caseless_mag_Tracer", 2},
            {"SmokeShell", 2},
            {"HandGrenade", 2}
        };
        items[] = {"ACRE_PRC343", "ItemGPS"};
        code = "";
    };

    class Leader : Rifleman {
        weapons[] = {"arifle_MX_GL_F","hgun_Pistol_heavy_01_F"};
        vestMagazines[] = {
            {"30Rnd_65x39_caseless_mag", 8},
            {"11Rnd_45ACP_Mag", 3},
            {"1Rnd_HE_Grenade_shell", 2},
            {"1Rnd_Smoke_Grenade_shell", 2},
            {"SmokeShell", 2},
            {"HandGrenade", 2}
        };
        ruckMagazines[] = {
            {"30Rnd_65x39_caseless_mag", 3},
            {"30Rnd_65x39_caseless_mag_Tracer", 2},
            {"1Rnd_HE_Grenade_shell", 4},
            {"1Rnd_Smoke_Grenade_shell", 2},
            {"SmokeShell", 2},
            {"HandGrenade", 2}
        };
        items[] = {"ACRE_PRC343", "ItemGPS", "Binocular"};
    };

    class Officer : Leader {
        items[] = {"ACRE_PRC343", "ACRE_PRC148", "ItemGPS", "Binocular"};
    };

    class Crew : Rifleman {
        weapons[] = {"arifle_MXC_F", "hgun_Pistol_heavy_01_F"};
        primaryAttachments[] = {};
        helmet = "H_HelmetCrew_B";
        ruck = "";
        vest = "V_PlateCarrier1_rgr";
        vestMagazines[] = {
            {"30Rnd_65x39_caseless_mag", 4},
            {"30Rnd_65x39_caseless_mag_Tracer", 2},
            {"SmokeShell", 2},
            {"HandGrenade", 2}
        };
    };

    class CO : Officer {
        items[] = {"ACRE_PRC343", "ACRE_PRC148", "ACRE_PRC119", "ItemGPS", "Binocular"};
    };

    class XO : CO {
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        weapons[] = {"arifle_MXC_F", "hgun_Pistol_heavy_01_F"};
        helmet = "H_HelmetB_light_snakeskin";
        uniform = "U_B_CombatUniform_mcam_tshirt";
        vest = "V_PlateCarrier1_rgr";
        ruck = "B_Carryall_mcamo";
        ruckMagazines[] = {
            {"30Rnd_65x39_caseless_mag", 6},
            {"Medikit", 1},
            {"FirstAidKit", 8}
        };
        items[] = {"ACRE_PRC343", "ACRE_PRC148", "ItemGPS", "Binocular"};
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        weapons[] = {"arifle_MX_SW_F", "hgun_Pistol_heavy_01_F"};
        magazines[] = {
            {"100Rnd_65x39_caseless_mag", 1},
            {"11Rnd_45ACP_Mag", 3}
        };
        vestMagazines[] = {
            {"100Rnd_65x39_caseless_mag", 1},
            {"SmokeShell", 2},
            {"HandGrenade", 2}
        };
        ruckMagazines[] = {
            {"100Rnd_65x39_caseless_mag", 2},
            {"100Rnd_65x39_caseless_mag_Tracer", 2},
            {"SmokeShell", 2}
        };
    };

    class AAR : Rifleman {
        ruck = "B_Kitbag_mcamo";
        uniform = "U_B_CombatUniform_mcam_tshirt";
        ruckMagazines[] = {
            {"30Rnd_65x39_caseless_mag_Tracer", 2},
            {"100Rnd_65x39_caseless_mag", 4},
            {"SmokeShell", 2}
        };
        items[] = {"ACRE_PRC343", "ItemGPS", "Binocular"};
    };

    class RAT : Rifleman {
        weapons[] = {"arifle_MXC_F", "hgun_Pistol_heavy_01_F", "AT4"};
        uniform = "U_B_CombatUniform_mcam_tshirt";
        ruck = "B_AssaultPack_rgr";
        ruckMagazines[] = {
            {"30Rnd_65x39_caseless_mag", 4},
            {"30Rnd_65x39_caseless_mag_Tracer", 2},
            {"SmokeShell", 2},
            {"HandGrenade", 2},
            {"AT4_HEAT", 1}
        };
    };

    class MMGG : Rifleman {
        weapons[] = {"LMG_Mk200_F", "hgun_Pistol_heavy_01_F"};
        magazines[] = {
            {"200Rnd_65x39_cased_Box", 1},
            {"11Rnd_45ACP_Mag", 3}
        };
        vestMagazines[] = {
            {"200Rnd_65x39_cased_Box", 1},
            {"SmokeShell", 2},
            {"HandGrenade", 2}
        };
        ruckMagazines[] = {
            {"200Rnd_65x39_cased_Box", 1},
            {"200Rnd_65x39_cased_Box_Tracer", 1},
            {"SmokeShell", 2}
        };
        items[] = {"ACRE_PRC343", "ACRE_PRC148", "ItemGPS"};
    };

    class MMGAG : Rifleman {
        ruck = "B_Carryall_mcamo";
        ruckMagazines[] = {
            {"30Rnd_65x39_caseless_mag", 6},
            {"200Rnd_65x39_cased_Box", 3},
            {"SmokeShell", 2}
        };
        items[] = {"ACRE_PRC343", "Rangefinder"};
    };

    class MATG : Rifleman {
        weapons[] = {"arifle_MX_F", "hgun_Pistol_heavy_01_F", "launch_NLAW_F"};
        vestMagazines[] = {
            {"30Rnd_65x39_caseless_mag", 8},
            {"SmokeShell", 2},
            {"HandGrenade", 2}
        };
        ruck = "B_Bergen_sgg";
        ruckMagazines[] = {
            {"30Rnd_65x39_caseless_mag", 6},
            {"NLAW_F", 2}
        };
        items[] = {"ACRE_PRC343", "ACRE_PRC148", "ItemGPS"};
    };

    class MATAG : Rifleman {
        ruckMagazines[] = {
            {"30Rnd_65x39_caseless_mag", 6},
            {"NLAW_F", 2}
        };
        ruck = "B_Bergen_sgg";
        items[] = {"ACRE_PRC343", "Rangefinder", "ItemGPS"};
    };

    class MATAC : MATAG {
    };

    class HATG : Rifleman {
        weapons[] = {"arifle_MX_F", "hgun_Pistol_heavy_01_F", "launch_B_Titan_short_F"};
        vestMagazines[] = {
            {"30Rnd_65x39_caseless_mag", 8},
            {"SmokeShell", 2},
            {"HandGrenade", 2}
        };
        ruck = "B_Bergen_sgg";
        ruckMagazines[] = {
            {"30Rnd_65x39_caseless_mag", 6},
            {"Titan_AT", 2}
        };
        items[] = {"ACRE_PRC343", "ACRE_PRC148", "ItemGPS"};
    };

    class HATAG : Rifleman {
        ruckMagazines[] = {
            {"30Rnd_65x39_caseless_mag", 8},
            {"Titan_AT", 1},
            {"Titan_AP", 1}
        };
        ruck = "B_Bergen_sgg";
        items[] = {"ACRE_PRC343", "ItemGPS", "Rangefinder"};
    };

    class HATAC : HATAG {
    };

    class ENG : Rifleman {
        weapons[] = {"arifle_MXC_F"};
        uniform = "U_B_CombatUniform_mcam_tshirt";
        vest = "V_PlateCarrier1_rgr";
        helmet = "H_Booniehat_mcamo";
        ruck = "B_Carryall_mcamo";
        ruckWeapons[] = {
            {"SatchelCharge_Remote_Mag", 1},
            {"DemoCharge_Remote_Mag", 2}
        };
        ruckMagazines[] = {
            {"30Rnd_65x39_caseless_mag", 4},
            {"30Rnd_65x39_caseless_mag_Tracer", 2},
            {"SmokeShell", 2}
        };
        items[] = {"ACRE_PRC343", "ACRE_PRC148", "ItemGPS", "Binocular"};
    };

    class ENGA : ENG {
        items[] = {"ACRE_PRC343", "ItemGPS", "Binocular"};
    };

    class VC : Crew {
        items[] = {"ACRE_PRC343", "ACRE_PRC119", "ItemGPS", "Rangefinder"};
    };

    class VG : Crew {
    };

    class VD : Crew {
    };

    class P : Crew {
        weapons[] = {"SMG_01_F"};
        magazines[] = {
            {"30Rnd_45ACP_Mag_SMG_01", 1}
        };
        primaryAttachments[] = {};
        helmet = "H_PilotHelmetHeli_B";
        uniform = "U_B_HeliPilotCoveralls";
        vestMagazines[] = {
            {"30Rnd_45ACP_Mag_SMG_01", 4},
            {"SmokeShellBlue", 2},
            {"Chemlight_blue", 2},
            {"B_IR_Grenade", 1}
        };
        ruck = "B_Parachute";
        ruckWeapons[] = {
        };
        ruckMagazines[] = {
        };
        items[] = {"ACRE_PRC343", "ACRE_PRC119", "ItemGPS", "NVGoggles"};
    };

    class PCM : P {
    };

    class Vehicle {
        weapons[] = {
            {"arifle_MX_F", 2},
            {"SMG_01_F", 2},
            {"AT4", 2}
        };
        magazines[] = {
            {"30Rnd_65x39_caseless_mag", 20},
            {"30Rnd_65x39_caseless_mag_Tracer", 10},
            {"100Rnd_65x39_caseless_mag", 6},
            {"100Rnd_65x39_caseless_mag_Tracer", 4},
            {"30Rnd_45ACP_Mag_SMG_01", 10},
            {"200Rnd_65x39_cased_Box", 3},
            {"200Rnd_65x39_cased_Box_Tracer", 2},
            {"1Rnd_Smoke_Grenade_shell", 10},
            {"HandGrenade", 10},
            {"SmokeShell", 5},
            {"AT4_HEAT", 2}
        };
        items[] = {
            {"ACRE_PRC343", 5},
            {"ACRE_PRC148", 5}
        };
        code = "";
    };

    class Car : Vehicle {
    };

    class Truck : Vehicle {
        weapons[] = {
            {"arifle_MX_Black_F", 5},
            {"SMG_01_F", 5},
            {"AT4", 5}
        };
        magazines[] = {
            {"30Rnd_65x39_caseless_mag", 50},
            {"30Rnd_65x39_caseless_mag_Tracer", 25},
            {"100Rnd_65x39_caseless_mag", 15},
            {"100Rnd_65x39_caseless_mag_Tracer", 5},
            {"30Rnd_45ACP_Mag_SMG_01", 10},
            {"200Rnd_65x39_cased_Box", 6},
            {"200Rnd_65x39_cased_Box_Tracer", 4},
            {"SatchelCharge_Remote_Mag", 4},
            {"NLAW_F", 5},
            {"AT4_HEAT", 5},
            {"1Rnd_Smoke_Grenade_shell", 20},
            {"HandGrenade", 10},
            {"SmokeShell", 10}
        };
    };

    class Armored : Vehicle {
        weapons[] = {
        };
        magazines[] = {
            {"30Rnd_65x39_caseless_mag", 20},
            {"30Rnd_65x39_caseless_mag_Tracer", 10},
            {"100Rnd_65x39_caseless_mag", 6},
            {"100Rnd_65x39_caseless_mag_Tracer", 4},
            {"30Rnd_45ACP_Mag_SMG_01", 5},
            {"200Rnd_65x39_cased_Box", 3},
            {"200Rnd_65x39_cased_Box_Tracer", 2},
            {"NLAW_F", 2},
            {"1Rnd_Smoke_Grenade_shell", 20},
            {"HandGrenade", 10},
            {"SmokeShell", 5}
        };
    };
};
