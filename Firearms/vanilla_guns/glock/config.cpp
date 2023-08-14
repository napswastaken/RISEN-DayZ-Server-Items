////////////////////////////////////////////////////////////////////
//DeRap: Nulled_Firearms\vanilla_guns\glock\config.bin
//Produced from mikero's Dos Tools Dll version 8.12
//https://mikero.bytex.digital/Downloads
//'now' is Wed Aug 25 20:20:31 2021 : 'file' last modified on Sun Aug 22 09:59:44 2021
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class NULLED_Pistols_Glock
	{
		units[] = {};
		weapons[] = {"Glock19_OD","Glock19_Tan"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Pistols","NULLED_Weapons_Ammunition"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoPistol;
class cfgWeapons
{
	class Pistol_Base;
	class Glock19_Base: Pistol_Base
	{
		displayName = "Glock19";
		chamberableFrom[] = {"Ammo_9x19"};
		magazines[] = {"Mag_Glock_15Rnd","Mag_Glock_21Rnd","Mag_Glock19_15Rnd","Mag_Glock18_50Rnd"};
	};
	class Glock19;
	class Glock19_OD: Glock19
	{
		scope = 2;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"Firearms\vanilla_guns\retextures\glock19_od_co.paa"};
	};
	class Glock19_Tan: Glock19
	{
		scope = 2;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"Firearms\vanilla_guns\retextures\glock19_sand_co.paa"};
	};
};
