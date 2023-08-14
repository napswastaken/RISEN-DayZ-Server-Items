////////////////////////////////////////////////////////////////////
//DeRap: Muzzle\FAL\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Mon Aug 14 16:30:07 2023 : 'file' last modified on Mon Aug 14 16:30:07 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class NULLED_Attachments_FAL
	{
		units[] = {};
		weapons[] = {"FAL"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class cfgWeapons
{
	class FAL_Base;
	class FAL: FAL_Base
	{
		scope = 2;
		attachments[] = {"weaponButtstockFal","weaponWrap","weaponOptics","weaponMuzzleM4"};
	};
};
