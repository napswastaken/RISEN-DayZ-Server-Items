////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Mon Aug 14 16:30:06 2023 : 'file' last modified on Mon Aug 14 16:30:06 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class NULLED_Attachments
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgMods
{
	class NULLED_Attachments
	{
		dir = "NULLED_Attachments";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "The NULLED_Community Mod";
		credits = "0";
		author = "Crocell";
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
				files[] = {"Attachments\Scripts\4_World"};
			};
		};
	};
};
