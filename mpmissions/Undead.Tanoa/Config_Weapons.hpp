/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 6500, -1 },
            { "hgun_P07_khk_F", "", 6500, -1 },
            { "hgun_Pistol_heavy_01_F", "", 9850, -1 },
            { "hgun_Pistol_heavy_02_F", "", 9850, -1 },
            { "hgun_ACPC2_F", "", 11500, -1 },
            { "hgun_Pistol_01_F", "", 9850, -1 },
            { "hgun_PDW2000_F", "", 20000, -1 },
            { "SMG_05_F", "", 20000, -1 },
            { "SMG_01_F", "", 30000, -1 },
            { "SMG_02_F", "", 20000, -1 },
            { "optic_ACO_grn_smg", "", 2500, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "16Rnd_9x21_Mag", "", 25 },
            { "11Rnd_45ACP_Mag", "", 50 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "16Rnd_9x21_Mag", "", 45 },			
            { "30Rnd_9x21_Mag", "", 75 },
            { "30Rnd_9x21_Mag_SMG_02", "", 75 },
            { "30Rnd_45ACP_Mag_SMG_01", "", 75 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_TRG20_F", "", 45000, -1 },
            { "arifle_Katiba_F", "", 60000, -1 },
            { "arifle_MX_SW_F", "", 80000, -1 },
            { "arifle_MX_SW_khk_F", "", 80000, -1 },
	        { "arifle_MX_F", "", 60000, -1 },
	        { "arifle_MX_khk_F", "", 60000, -1 },
	        { "srifle_EBR_F", "", 75000, -1 },
	        { "srifle_DMR_03_F", "", 75000, -1 },
	        { "srifle_DMR_03_khaki_F", "", 75000, -1 },
	        { "srifle_DMR_03_tan_F", "", 75000, -1 },
	        { "srifle_DMR_03_multicam_F", "", 75000, -1 },
	        { "srifle_DMR_03_woodland_F", "", 75000, -1 },
	        { "srifle_DMR_06_camo_F", "", 75000, -1 },
	        { "srifle_DMR_06_olive_F", "", 75000, -1 },
	        { "srifle_DMR_06_camo_khs_F", "", 75000, -1 },
            { "srifle_DMR_01_F", "", 75000, -1 },
            { "arifle_AK12_F", "", 60000, -1 },
            { "arifle_AKM_F", "", 45000, -1 },
            { "arifle_AKS_F", "", 35000, -1 },
            { "arifle_CTAR_blk_F", "", 50000, -1 },
            { "arifle_CTARS_blk_F", "", 50000, -1 },
            { "srifle_DMR_07_blk_F", "", 75000, -1 },
            { "srifle_DMR_07_hex_F", "", 75000, -1 },
            { "srifle_DMR_07_ghex_F", "", 75000, -1 },
            { "arifle_SPAR_01_khk_F", "", 60000, -1 },
            { "arifle_SPAR_01_snd_F", "", 60000, -1 },
            { "arifle_SPAR_02_khk_F", "", 80000, -1 },
            { "arifle_SPAR_02_snd_F", "", 80000, -1 },
	        { "arifle_SPAR_03_khk_F", "", 75000, -1 },
	        { "arifle_SPAR_03_snd_F", "", 75000, -1 },
            { "arifle_ARX_ghex_F", "", 85000, -1 },
            { "arifle_ARX_hex_F", "", 85000, -1 },
            { "arifle_SDAR_F", "", 20000, -1 },
            { "launch_RPG7_F", "", 240000, -1 },
            { "muzzle_snds_H", "", 20000, -1 },
            { "muzzle_snds_L", "", 20000, -1 },
            { "muzzle_snds_M", "", 20000, -1 },
            { "muzzle_snds_B", "", 20000, -1 },
            { "muzzle_snds_338_black", "", 20000, -1 },
            { "muzzle_snds_338_green", "", 20000, -1 },
            { "muzzle_snds_338_sand", "", 20000, -1 },
            { "optic_ACO_grn", "", 3500, -1 },
            { "optic_Holosight", "", 3600, -1 },
            { "optic_Hamr", "", 7500, -1 },
            { "optic_Hamr_khk_F", "", 7500, -1 },
            { "optic_ERCO_blk_F", "", 7500, -1 },
            { "optic_ERCO_khk_F", "", 7500, -1 },
            { "optic_ERCO_snd_F", "", 7500, -1 },
            { "optic_MRCO", "", 7500, -1 },
            { "optic_DMS", "", 9500, -1 },
            { "optic_DMS_ghex_F", "", 9500, -1 },
            { "optic_LRPS", "", 9500, -1 },
            { "optic_AMS", "", 9500, -1 },
            { "optic_AMS_khk", "", 9500, -1 },
            { "optic_AMS_snd", "", 9500, -1 },
            { "optic_AMS_snd", "", 9500, -1 },
            { "optic_KHS_blk", "", 9500, -1 },
            { "optic_KHS_hex", "", 9500, -1 },
            { "acc_flashlight", "", 1000, -1 },
            { "acc_pointer_IR", "", 1000, -1 }
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 300 },
            { "30Rnd_65x39_caseless_green", "", 500 },
            { "10Rnd_762x54_Mag", "", 500 },
            { "30Rnd_762x39_Mag_F", "", 500 },
            { "30Rnd_762x39_Mag_F", "", 500 },
            { "30Rnd_545x39_Mag_F", "", 500 },
            { "30Rnd_580x42_Mag_F", "", 500 },
            { "100Rnd_580x42_Mag_F", "", 500 },
            { "20Rnd_650x39_Cased_Mag_F", "", 500 },
            { "30Rnd_556x45_Stanag", "", 500 },
            { "150Rnd_556x45_Drum_Mag_F", "", 1000 },
            { "20Rnd_762x51_Mag", "", 500 },
            { "20Rnd_556x45_UW_mag", "", 500 },
            { "RPG7_F", "", 50000 },
            { "10Rnd_338_Mag", "", 500 },
            { "200Rnd_65x39_cased_Box_Tracer", "", 2000 },
            { "100Rnd_65x39_caseless_mag", "", 1000 },
            { "30Rnd_65x39_caseless_mag", "", 500 },
            { "5Rnd_127x108_Mag", "", 1000 },
            { "7Rnd_408_Mag", "", 1000 },
            { "200Rnd_556x45_Box_F", "", 1000 },
            { "30Rnd_65x39_caseless_green", "", 500 },
            { "30Rnd_9x21_Mag_SMG_02", "", 500 }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 1500, 500 },
            { "hgun_Pistol_heavy_02_F", "", 2500, -1 },
            { "hgun_ACPC2_F", "", 4500, -1 },
            { "hgun_PDW2000_F", "", 9500, -1 },
            { "optic_ACO_grn_smg", "", 950, 250 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
    };

    //Basic Shops
    class genstore {
        name = "General Store";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 15, -1 },
            { "ItemGPS", "", 10, -1 },
            { "ItemMap", "", 50, -1 },
            { "ItemCompass", "", 50, -1 },
            { "ItemWatch", "", 50, -1 },
            { "ToolKit", "", 250, -1 },
            { "FirstAidKit", "", 150, -1 },
            { "NVGoggles", "", 200, -1 },
            { "Chemlight_red", "", 30, -1 },
            { "Chemlight_yellow", "", 30, -1 },
            { "Chemlight_green", "", 30, -1 },
            { "Chemlight_blue", "", 30, -1 }
        };
        mags[] = {};
    };

    class f_station_store {
        name = "Fuel Station Store";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 75, -1 },
            { "ItemGPS", "", 50, 45 },
            { "ItemMap", "", 25, 35 },
            { "ItemCompass", "", 25, 25 },
            { "ItemWatch", "", 25, -1 },
            { "ToolKit", "", 1250, 75 },
            { "FirstAidKit", "", 750, 65 },
            { "NVGoggles", "", 1000, 980 },
            { "Chemlight_red", "", 150, -1 },
            { "Chemlight_yellow", "", 150, 50 },
            { "Chemlight_green", "", 150, 50 },
            { "Chemlight_blue", "", 150, 50 }
        };
        mags[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Cop Shop";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_sdar_F", "Taser Rifle", 200, -1 },
            { "hgun_P07_snds_F", "Taser Pistol", 200, -1 },
			{ "SMG_05_F", "", 200, -1 },
            { "Binocular", "", 15, -1 },
            { "ItemGPS", "", 10, -1 },
            { "ToolKit", "", 25, -1 },
            { "FirstAidKit", "", 15, -1 },
            { "Medikit", "", 100, -1 },
            { "NVGoggles", "", 200, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 45 },
			{ "30Rnd_9x21_Mag_SMG_02", "", 75 }
        };
    };

    class cop_patrol {
        name = "Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "You must be a Tanoa Police Officer+" };
        items[] = {
            { "arifle_SPAR_01_blk_F", "", 3500, -1 },
            { "arifle_MXC_Black_F", "", 3500, -1 },
            { "arifle_MX_Black_F", "", 3500, -1 },
            { "arifle_MXM_Black_F", "", 3500, -1 },
            { "MineDetector", "", 100, -1 },
            { "muzzle_snds_H", "", 100, -1 },
            { "muzzle_snds_L", "", 100, -1 },
            { "muzzle_snds_M", "", 100, -1 },
            { "muzzle_snds_B", "", 100, -1 },
            { "muzzle_snds_338_black", "", 100, -1 },
            { "muzzle_snds_338_green", "", 100, -1 },
            { "muzzle_snds_338_sand", "", 100, -1 },
            { "optic_ACO_grn", "", 350, -1 },
            { "optic_Holosight", "", 360, -1 },
            { "optic_Hamr", "", 750, -1 },
            { "optic_Hamr_khk_F", "", 750, -1 },
            { "optic_ERCO_blk_F", "", 750, -1 },
            { "optic_ERCO_khk_F", "", 750, -1 },
            { "optic_ERCO_snd_F", "", 750, -1 },
            { "optic_MRCO", "", 750, -1 },
            { "optic_DMS", "", 950, -1 },
            { "optic_DMS_ghex_F", "", 950, -1 },
            { "optic_LRPS", "", 950, -1 },
            { "optic_AMS", "", 950, -1 },
            { "optic_AMS_khk", "", 950, -1 },
            { "optic_AMS_snd", "", 950, -1 },
            { "optic_AMS_snd", "", 950, -1 },
            { "optic_KHS_blk", "", 950, -1 },
            { "optic_KHS_hex", "", 950, -1 },
            { "acc_flashlight", "", 100, -1 },
            { "acc_pointer_IR", "", 100, -1 }
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 130 },
            { "30Rnd_65x39_caseless_mag", "", 130 }
        };
    };

    class cop_sergeant {
        name = "Command Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be Tanoa Police Command" };
        items[] = {
            { "arifle_SPAR_03_blk_F", "", 1750, -1 },
            { "srifle_EBR_F", "", 1750, -1 },
            { "HandGrenade_Stone", "Flashbang", 50, -1 },
            { "muzzle_snds_H", "", 100, -1 },
            { "muzzle_snds_L", "", 100, -1 },
            { "muzzle_snds_M", "", 100, -1 },
            { "muzzle_snds_B", "", 100, -1 },
            { "muzzle_snds_338_black", "", 100, -1 },
            { "muzzle_snds_338_green", "", 100, -1 },
            { "muzzle_snds_338_sand", "", 100, -1 },
            { "optic_ACO_grn", "", 350, -1 },
            { "optic_Holosight", "", 360, -1 },
            { "optic_Hamr", "", 750, -1 },
            { "optic_Hamr_khk_F", "", 750, -1 },
            { "optic_ERCO_blk_F", "", 750, -1 },
            { "optic_ERCO_khk_F", "", 750, -1 },
            { "optic_ERCO_snd_F", "", 750, -1 },
            { "optic_MRCO", "", 750, -1 },
            { "optic_DMS", "", 950, -1 },
            { "optic_DMS_ghex_F", "", 950, -1 },
            { "optic_LRPS", "", 950, -1 },
            { "optic_AMS", "", 950, -1 },
            { "optic_AMS_khk", "", 950, -1 },
            { "optic_AMS_snd", "", 950, -1 },
            { "optic_AMS_snd", "", 950, -1 },
            { "optic_KHS_blk", "", 950, -1 },
            { "optic_KHS_hex", "", 950, -1 },
            { "acc_flashlight", "", 100, -1 },
            { "acc_pointer_IR", "", 100, -1 }
        };
        mags[] = {
            { "20Rnd_762x51_Mag", "", 20 }
        };
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ItemGPS", "", 100, -1 },
            { "Binocular", "", 150, -1 },
            { "ToolKit", "", 250, -1 },
            { "FirstAidKit", "", 150, -1 },
            { "Medikit", "", 500, -1 },
            { "NVGoggles", "", 1200, -1 }
        };
        mags[] = {};
    };
};
