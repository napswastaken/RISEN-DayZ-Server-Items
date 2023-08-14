////////////////////////////////////////////////////////////////////
//DeRap: scripts\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Mon Aug 14 16:30:16 2023 : 'file' last modified on Mon Aug 14 16:30:16 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Backpack_Scripts
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Scripts","DZ_Data"};
	};
};
class CfgMods
{
	class Backpack_Scripts
	{
		dir = "Backpack_Scripts";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "The RA Servers Mod";
		credits = "0";
		creditsJson = "";
		author = "Crocell";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		inputs = "";
		dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"Backpacks/scripts/4_World"};
			};
		};
	};
};
