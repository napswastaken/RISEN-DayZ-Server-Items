////////////////////////////////////////////////////////////////////
//DeRap: Nulled_Firearms\vanilla_guns\M4\config.bin
//Produced from mikero's Dos Tools Dll version 8.12
//https://mikero.bytex.digital/Downloads
//'now' is Wed Aug 25 20:20:31 2021 : 'file' last modified on Sun Aug 22 09:59:44 2021
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class NULLED_Weapons_Firearms_M4
	{
		units[] = {"M4_MPHndgrd_Tan","M4_MPHndgrd_OD","M4_MPBttstck_Tan","M4_MPBttstck_OD","M4_RISHndgrd_Tan","M4_RISHndgrd_OD","M4_Suppressor_od","M4_Suppressor_Tan","PistolSuppressor_Black"};
		weapons[] = {"M4A1_OD","M4A1_Tan"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Magazines","DZ_Weapons_Supports","NULLED_Weapons_Ammunition"};
		magazines[] = {"Mag_CMAG_30Rnd","Mag_CMAG_30Rnd_Tan","Mag_CMAG_30Rnd_Black","Mag_CMAG_30Rnd_Green"};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class M4_MPHndgrd;
	class M4_MPBttstck;
	class M4_Suppressor;
	class M4_RISHndgrd;
	class M4_MPHndgrd_Tan: M4_MPHndgrd
	{
		scope = 2;
		displayName = "M4-A1 MP Handguard";
		descriptionShort = "Tan MP Handguard for M4";
		hiddenSelectionsTextures[] = {"Firearms\vanilla_guns\m4\data\MPHndgrd_tan_co.paa"};
	};
	class M4_MPHndgrd_OD: M4_MPHndgrd
	{
		scope = 2;
		displayName = "M4-A1 MP Handguard";
		descriptionShort = "OD MP Handguard for M4";
		hiddenSelectionsTextures[] = {"Firearms\vanilla_guns\m4\data\MPHndgrd_od_co.paa"};
	};
	class M4_MPBttstck_Tan: M4_MPBttstck
	{
		scope = 2;
		displayName = "M4-A1 MP Buttstock";
		descriptionShort = "Tan MP Buttstock for M4";
		hiddenSelectionsTextures[] = {"Firearms\vanilla_guns\m4\data\MPBttstck_tan_co.paa"};
	};
	class M4_MPBttstck_OD: M4_MPBttstck
	{
		scope = 2;
		displayName = "M4-A1 MP Buttstock";
		descriptionShort = "OD MP Buttstock for M4";
		hiddenSelectionsTextures[] = {"Firearms\vanilla_guns\m4\data\MPBttstck_OD_co.paa"};
	};
	class M4_RISHndgrd_Tan: M4_RISHndgrd
	{
		scope = 2;
		displayName = "M4-A1 RIS Handguard";
		descriptionShort = "Tan RIS Handguard for M4";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"Firearms\vanilla_guns\m4\data\RISHndgrd_tan_co.paa"};
	};
	class M4_RISHndgrd_OD: M4_RISHndgrd
	{
		scope = 2;
		displayName = "M4-A1 RIS Handguard";
		descriptionShort = "OD RIS Handguard for M4";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"Firearms\vanilla_guns\m4\data\RISHndgrd_od_co.paa"};
	};
	class M4_Suppressor_od: M4_Suppressor
	{
		scope = 2;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"Firearms\vanilla_guns\m4\data\suppressor_od_co.paa"};
	};
	class M4_Suppressor_Tan: M4_Suppressor
	{
		scope = 2;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"Firearms\vanilla_guns\m4\data\suppressor_tan_co.paa"};
	};
	class PistolSuppressor;
	class PistolSuppressor_Black: PistolSuppressor
	{
		scope = 2;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"Firearms\vanilla_guns\m4\data\gemtech_black_co.paa"};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class Mag_CMAG_30Rnd: Magazine_Base
	{
		scope = 2;
		hiddenSelectionsMaterials[] = {"Firearms\vanilla_guns\m4\data\pmag.rvmat"};
	};
	class Mag_CMAG_30Rnd_Tan: Mag_CMAG_30Rnd
	{
		displayName = "30rd Mag-C Mag";
		descriptionShort = "Tan 30 Round PMAG";
		scope = 2;
		hiddenSelectionsTextures[] = {"Firearms\vanilla_guns\m4\data\pmag_co_tan.paa"};
	};
	class Mag_CMAG_30Rnd_Black: Mag_CMAG_30Rnd
	{
		displayName = "30rd Mag-C Mag";
		descriptionShort = "Tan 30 Round PMAG";
		scope = 2;
		hiddenSelectionsTextures[] = {"Firearms\vanilla_guns\m4\data\CMAG_tan_co.paa"};
	};
	class Mag_CMAG_30Rnd_Green: Mag_CMAG_30Rnd
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"Firearms\vanilla_guns\m4\data\CMAG_od_co.paa"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class Rifle_Base;
	class M4A1;
	class M4A1_OD: M4A1
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"Firearms\vanilla_guns\m4\data\m4_body_od_co.paa"};
	};
	class M4A1_Tan: M4A1
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"Firearms\vanilla_guns\m4\data\m4_body_tan_co.paa"};
	};
};
