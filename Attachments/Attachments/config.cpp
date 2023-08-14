////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Mon Aug 14 16:29:49 2023 : 'file' last modified on Tue Aug 03 07:00:49 2021
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgMods
{
	class Attachments
	{
		dir = "Attachments";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "Attachments";
		credits = "DannyDoomno1";
		author = "DannyDoomno1";
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
class CfgPatches
{
	class Attachments
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
