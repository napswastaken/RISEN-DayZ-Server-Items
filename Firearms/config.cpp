////////////////////////////////////////////////////////////////////
//DeRap: Nulled_Firearms\config.bin
//Produced from mikero's Dos Tools Dll version 8.12
//https://mikero.bytex.digital/Downloads
//'now' is Wed Aug 25 20:20:20 2021 : 'file' last modified on Sun Aug 22 09:59:39 2021
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class NULLED_Firearms
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgMods
{
	class NULLED_Firearms
	{
		dir = "NULLED_Firearms";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "NULLED_Firearms";
		credits = "CashewSan";
		author = "CashewSan";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"Firearms\Scripts\4_World"};
			};
		};
	};
};
