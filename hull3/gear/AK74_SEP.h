class AK74_SEP {
    class Rifleman {
        weapons[] = {"hlc_rifle_ak74_dirty", "hgun_Rook40_F"};
        primaryAttachments[] = {};
        secondaryAttachments[] = {};
        magazines[] = {
            {"hlc_30Rnd_545x39_B_AK", 1},
            {"16Rnd_9x21_Mag", 3}
        };
        helmet = "H_Bandanna_gry";
        uniform = "MNP_CombatUniform_ASA_GC3";
        goggles = "G_Bandanna_oli";
        vest = "V_TacVest_camo";
        vestMagazines[] = {
            {"hlc_30Rnd_545x39_B_AK", 8},
            {"SmokeShell", 2},
            {"HandGrenade", 2}
        };
        ruck = "B_Carryall_oli";
        ruckWeapons[] = {};
        ruckMagazines[] = {
            {"hlc_30Rnd_545x39_B_AK", 4},
            {"hlc_30Rnd_545x39_t_ak", 2},
            {"SmokeShell", 2},
            {"HandGrenade", 2}
        };
        items[] = {"ACRE_PRC343"};
        code = "";
    };

    class Leader : Rifleman {
        helmet = "MNP_MC_Rev";
        goggles = "G_Bandanna_oli";
        uniform = "MNP_CombatUniform_Rebel_B";
        weapons[] = {"hlc_rifle_aks74_GL","hgun_Rook40_F"};
        vestMagazines[] = {
            {"hlc_30Rnd_545x39_B_AK", 8},
            {"hlc_VOG25_AK", 2},
            {"hlc_GRD_green", 2},
            {"SmokeShell", 2},
            {"HandGrenade", 2}
        };
        ruckMagazines[] = {
            {"hlc_30Rnd_545x39_B_AK", 3},
            {"hlc_30Rnd_545x39_t_ak", 3},
            {"hlc_VOG25_AK", 4},
            {"hlc_GRD_green", 2},
            {"SmokeShell", 2},
            {"HandGrenade", 2}
        };
        items[] = {"ACRE_PRC343", "ItemGPS", "Binocular"};
    };

    class Officer : Leader {
        vestMagazines[] = {
            {"hlc_30Rnd_545x39_B_AK", 8},
            {"hlc_VOG25_AK", 2},
            {"hlc_GRD_green", 2},
            {"SmokeShell", 2},
            {"HandGrenade", 2}
        };
        items[] = {"ACRE_PRC343", "ACRE_PRC148", "ItemGPS", "Binocular"};
    };

    class Crew : Rifleman {
        weapons[] = {"hlc_rifle_aks74u", "hgun_Rook40_F"};
        helmet = "H_HelmetCrew_B";
        ruck = "";
        vest = "V_Chestrig_rgr";
        vestMagazines[] = {
            {"hlc_30Rnd_545x39_B_AK", 6},
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
        weapons[] = {"hlc_rifle_aks74u", "hgun_Rook40_F"};
        helmet = "MNP_Boonie_RU_T";
        vest = "V_TacVest_camo";
        ruck = "B_Carryall_oli";
        ruckMagazines[] = {
            {"hlc_30Rnd_545x39_B_AK", 6},
            {"Medikit", 1},
            {"FirstAidKit", 8}
        };
        items[] = {"ACRE_PRC343", "ACRE_PRC148", "ItemGPS", "Binocular"};
    };

    class FTL : Leader {
        helmet = "H_Cap_oli";
        goggles = "G_Bandanna_aviator";
    };

    class AR : Rifleman {
        uniform = "U_BG_Guerrilla_6_1";
        goggles = "G_Balaclava_oli";
        weapons[] = {"hlc_rifle_rpk", "hgun_Rook40_F"};
        magazines[] = {
            {"hlc_75Rnd_762x39_m_rpk", 1},
            {"16Rnd_9x21_Mag", 3}
        };
        vestMagazines[] = {
            {"hlc_75Rnd_762x39_m_rpk", 1},
            {"SmokeShell", 2},
            {"HandGrenade", 2}
        };
        ruckMagazines[] = {
            {"hlc_75Rnd_762x39_m_rpk", 4},
            {"SmokeShell", 2}
        };
    };

    class AAR : Rifleman {
        uniform = "MNP_CombatUniform_Militia_E";
        goggles = "G_Bandanna_beast";
        ruck = "B_Carryall_ocamo";
        ruckMagazines[] = {
            {"hlc_30Rnd_545x39_B_AK", 6},
            {"hlc_75Rnd_762x39_m_rpk", 4},
            {"SmokeShell", 2}
        };
        items[] = {"ACRE_PRC343", "ItemGPS", "Binocular"};
    };

    class RAT : Rifleman {
        goggles = "G_Bandanna_sport";
        uniform = "MNP_CombatUniform_ASA_GC3";
        weapons[] = {"hlc_rifle_ak74_dirty", "launch_RPG18_F", "hgun_Rook40_F"};
        ruck = "B_Carryall_ocamo";
        ruckMagazines[] = {
            {"hlc_30Rnd_545x39_B_AK", 6},
            {"RPG18_HEAT", 1}
        };
    };

    class MATG : Rifleman {
        goggles = "G_Bandanna_khk";
        weapons[] = {"hlc_rifle_aks74u", "hgun_Rook40_F", "launch_RPG32_F"};
        vestMagazines[] = {
            {"hlc_30Rnd_545x39_B_AK", 8},
            {"SmokeShell", 2},
            {"HandGrenade", 2}
        };
        ruck = "B_Carryall_ocamo";
        ruckMagazines[] = {
            {"hlc_30Rnd_545x39_B_AK", 6},
            {"RPG32_F", 2}
        };
        items[] = {"ACRE_PRC343", "ACRE_PRC148", "ItemGPS"};
    };

    class MMGG : Rifleman {
        weapons[] = {"Cha_PK", "hgun_Pistol_heavy_01_F"};
        magazines[] = {
            {"Cha_100Rnd_762x54_PK", 1},
            {"11Rnd_45ACP_Mag", 3}
        };
        vestMagazines[] = {
            {"Cha_100Rnd_762x54_PK", 1},
            {"SmokeShell", 2},
            {"HandGrenade", 2}
        };
        ruckMagazines[] = {
            {"Cha_100Rnd_762x54_PK", 1},
            {"Cha_100Rnd_762x54_PK_T", 1},
            {"SmokeShell", 2}
        };
        items[] = {"ACRE_PRC343", "ACRE_PRC148", "ItemGPS"};
    };

    class MMGAG : Rifleman {
        ruck = "B_Carryall_mcamo";
        ruckMagazines[] = {
            {"30Rnd_65x39_caseless_mag", 6},
            {"Cha_100Rnd_762x54_PK", 3},
            {"SmokeShell", 2}
        };
        items[] = {"ACRE_PRC343", "Rangefinder"};
    };

    class MATAG : Rifleman {
        weapons[] = {"hlc_rifle_aks74u", "hgun_Rook40_F"};
        ruckMagazines[] = {
            {"hlc_30Rnd_545x39_B_AK", 6},
            {"RPG32_F", 1},
            {"RPG32_HE_F", 1}
        };
        ruck = "B_Carryall_ocamo";
        items[] = {"ACRE_PRC343", "Rangefinder", "ItemGPS"};
    };

    class MATAC : MATAG {
    };

    class HATG : Rifleman {
        weapons[] = {"hlc_rifle_aks74u", "hgun_Rook40_F", "launch_O_Titan_short_F"};
        vestMagazines[] = {
            {"hlc_30Rnd_545x39_B_AK", 8},
            {"SmokeShell", 2},
            {"HandGrenade", 2}
        };
        ruck = "B_Carryall_ocamo";
        ruckMagazines[] = {
            {"hlc_30Rnd_545x39_B_AK", 6},
            {"Titan_AT", 2}
        };
        items[] = {"ACRE_PRC343", "ACRE_PRC148", "ItemGPS"};
    };

    class HATAG : Rifleman {
        ruckMagazines[] = {
            {"hlc_30Rnd_545x39_B_AK", 8},
            {"Titan_AT", 1},
            {"Titan_AP", 1}
        };
        ruck = "B_Carryall_ocamo";
        items[] = {"ACRE_PRC343", "ItemGPS", "Rangefinder"};
    };

    class HATAC : HATAG {
    };

    class ENG : Rifleman {
        weapons[] = {"hlc_rifle_aks74u", "hgun_Rook40_F"};
        ruck = "B_Carryall_ocamo";
        ruckWeapons[] = {
            {"SatchelCharge_Remote_Mag", 1},
            {"DemoCharge_Remote_Mag", 2}
        };
        ruckMagazines[] = {
            {"hlc_30Rnd_545x39_B_AK", 6},
            {"SmokeShell", 2}
        };
        items[] = {"ACRE_PRC343", "ACRE_PRC148", "ItemGPS", "Binocular"};
    };

    class ENGA : ENG {
        items[] = {"ACRE_PRC343", "ItemGPS", "Binocular"};
    };

    class SN : Rifleman {
        weapons[] = {"srifle_DMR_01_F", "hgun_Rook40_F"};
        primaryAttachments[] = {"optic_MRCO"};
        vestMagazines[] = {
            {"10Rnd_762x51_Mag", 8},
            {"SmokeShell", 2},
            {"HandGrenade", 2}
        };
        ruckMagazines[] = {
            {"10Rnd_762x51_Mag", 6},
            {"SmokeShell", 2}
        };
        items[] = {"ACRE_PRC343", "ACRE_PRC148", "ItemGPS"};
    };

    class SP : Rifleman {
        ruck = "B_Carryall_ocamo";
        ruckMagazines[] = {
            {"hlc_30Rnd_545x39_B_AK", 6},
            {"200Rnd_65x39_cased_Box", 3},
            {"SmokeShell", 2}
        };
        items[] = {"ACRE_PRC343", "ItemGPS", "Rangefinder"};
    };

    class VC : Crew {
    };

    class VG : Crew {
    };

    class VD : Crew {
    };

    class P : Crew {
        weapons[] = {"hlc_rifle_aks74u", "hgun_Rook40_F"};
        magazines[] = {
            {"hlc_30Rnd_545x39_B_AK", 1},
            {"16Rnd_9x21_Mag", 3}
        };
        primaryAttachments[] = {"optic_ACO_grn_smg"};
        helmet = "H_PilotHelmetHeli_O";
        uniform = "U_O_PilotCoveralls";
        vestMagazines[] = {
            {"hlc_30Rnd_545x39_B_AK", 6},
            {"SmokeShell", 2}
        };
        ruck = "B_Parachute";
        ruckWeapons[] = {
        };
        ruckMagazines[] = {
        };
        items[] = {"ACRE_PRC343", "ACRE_PRC119", "ItemGPS", "NVGoggles"};
    };

    class PCM : Crew {
        weapons[] = {"hlc_rifle_aks74u", "hgun_Rook40_F"};
        magazines[] = {
            {"hlc_30Rnd_545x39_B_AK", 1},
            {"16Rnd_9x21_Mag", 3}
        };
        helmet = "H_CrewHelmetHeli_O";
        vestMagazines[] = {
            {"hlc_30Rnd_545x39_B_AK", 6},
            {"SmokeShell", 2}
        };
        items[] = {"ACRE_PRC343", "ACRE_PRC119", "ItemGPS", "NVGoggles"};
    };

    class Vehicle {
        weapons[] = {
            {"hlc_rifle_ak74_dirty", 2},
            {"hlc_rifle_aks74u", 2},
            {"launch_RPG18_F", 2}
        };
        magazines[] = {
            {"hlc_30Rnd_545x39_B_AK", 20},
            {"hlc_30Rnd_545x39_t_ak", 10},
            {"hlc_75Rnd_762x39_m_rpk", 6},
            {"Cha_100Rnd_762x54_PK", 4},
            {"RPG18_HEAT", 2},
            {"hlc_GRD_green", 10},
            {"HandGrenade", 10},
            {"SmokeShell", 5}
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
            {"hlc_rifle_ak74_dirty", 5},
            {"hlc_rifle_aks74u", 5},
            {"launch_RPG18_F", 5}
        };
        magazines[] = {
            {"hlc_30Rnd_545x39_B_AK", 50},
            {"hlc_30Rnd_545x39_t_ak", 25},
            {"hlc_75Rnd_762x39_m_rpk", 20},
            {"Cha_100Rnd_762x54_PK", 10},
            {"Cha_100Rnd_762x54_PK_T", 10},
            {"SatchelCharge_Remote_Mag", 4},
            {"RPG18_HEAT", 5},
            {"RPG32_F", 5},
            {"HandGrenade", 10},
            {"SmokeShell", 10}
        };
    };

    class Armored : Vehicle {
        weapons[] = {
        };
        magazines[] = {
            {"hlc_30Rnd_545x39_B_AK", 20},
            {"hlc_30Rnd_545x39_t_ak", 10},
            {"hlc_75Rnd_762x39_m_rpk", 6},
            {"Cha_100Rnd_762x54_PK", 10},
            {"Cha_100Rnd_762x54_PK_T", 10},
            {"RPG32_F", 2},
            {"HandGrenade", 10},
            {"SmokeShell", 5}
        };
    };
};