////////////////////////////////////////////////////////////////////
//DeRap: Nulled_Firearms\modded_guns\M300\config.bin
//Produced from mikero's Dos Tools Dll version 8.12
//https://mikero.bytex.digital/Downloads
//'now' is Wed Aug 25 20:20:25 2021 : 'file' last modified on Sun Aug 22 09:59:42 2021
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class NULLED_Weapons_Firearms_M300
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","NULLED_Weapons_Ammunition"};
		magazines[] = {};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class cfgWeapons
{
	class BoltActionRifle_Base;
	class M300_Base: BoltActionRifle_Base
	{
		chamberableFrom[] = {"Ammo_408","NULLED_Ammo_408","Ammo_408Cheytac"};
		magazines[] = {"M300_Magazine"};
	};
};
class CfgMagazines
{
	class Mag_AKM_30Rnd;
	class M300_Magazine: Mag_AKM_30Rnd
	{
		ammo = "NULLED_Bullet_408";
		ammoItems[] = {"Ammo_408","NULLED_Ammo_408","Ammo_408Cheytac"};
	};
};
