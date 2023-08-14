////////////////////////////////////////////////////////////////////
//DeRap: Nulled_Firearms\vanilla_guns\config.bin
//Produced from mikero's Dos Tools Dll version 8.12
//https://mikero.bytex.digital/Downloads
//'now' is Wed Aug 25 20:20:31 2021 : 'file' last modified on Sun Aug 22 09:59:44 2021
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class NULLED_Weapons_Firearms
	{
		units[] = {};
		weapons[] = {"Winchester70_Black","Winchester70_Green","Mp133_polymer","B95_Black","Mosin9130_Black","SKS_Black"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Sounds_Weapons"};
	};
};
class cfgWeapons
{
	class Winchester70;
	class Winchester70_Black: Winchester70
	{
		scope = 2;
		descriptionShort = "$STR_cfgWeapons_Winchester70_Black0";
		hiddenSelectionsTextures[] = {"Firearms\vanilla_guns\retextures\winchester70_blackwood_co.paa"};
	};
	class Winchester70_Green: Winchester70
	{
		scope = 2;
		descriptionShort = "$STR_cfgWeapons_Winchester70_Green0";
		hiddenSelectionsTextures[] = {"Firearms\vanilla_guns\retextures\winchester70_OD_co.paa"};
	};
	class SVD;
	class SVD_Wooden: SVD
	{
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Firearms\vanilla_guns\retextures\svd_wood_co.paa"};
	};
	class Mp133Shotgun;
	class Mp133_polymer: Mp133Shotgun
	{
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Firearms\vanilla_guns\retextures\mp133_polymer_co.paa"};
	};
	class B95;
	class B95_Black: B95
	{
		scope = 2;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"Firearms\vanilla_guns\retextures\b95_blackwood_co.paa"};
	};
	class Mosin9130;
	class Mosin9130_Black: Mosin9130
	{
		scope = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Firearms\vanilla_guns\retextures\mosin_9130_blackwood_co.paa"};
	};
	class SKS;
	class SKS_Black: SKS
	{
		scope = 2;
		hiddenSelections[] = {"camoGround","Clip_rounds","clip"};
		hiddenSelectionsTextures[] = {"Firearms\vanilla_guns\retextures\sks_blackwood_co.paa"};
	};
};
