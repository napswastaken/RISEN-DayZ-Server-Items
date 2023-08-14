////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Mon Aug 14 16:30:58 2023 : 'file' last modified on Mon Aug 14 16:30:58 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class NULLED_NVGs
	{
		units[] = {"NULLED_Armasight_N_15","NULLED_GPNVG18_Black","NULLED_GPNVG18_Green","NULLED_GPNVG18_Tan"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgMods
{
	class NULLED_NVGs
	{
		dir = "NULLED_NVGs";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "NULLED_NVGs";
		credits = "Crocell";
		author = "Crocell";
		authorID = "1633";
		version = "1.0";
		extra = 0;
		type = "mod";
	};
};
class CfgVehicles
{
	class Clothing_Base;
	class NVGoggles;
	class NULLED_Armasight_N_15: NVGoggles
	{
		scope = 2;
		displayName = "Armasight NVG";
		descriptionShort = "NVG";
		model = "nvgs\Armasight_N_15\Armasight_N_15.p3d";
		simulation = "itemoptics";
		animClass = "Binoculars";
		inventorySlot[] = {"NVG"};
		itemSize[] = {2,2};
		weight = 300;
		rotationFlags = 1;
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			modelOptics = "-";
			distanceZoomMin = 500;
			distanceZoomMax = 500;
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
		};
		attachments[] = {"BatteryD"};
		NVOptic = 1;
		simpleHiddenSelections[] = {"hide"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\characters\glasses\data\NVG_Headstrap.rvmat"}},{0.7,{"DZ\characters\glasses\data\NVG_Headstrap.rvmat"}},{0.5,{"DZ\characters\glasses\data\NVG_Headstrap_damage.rvmat"}},{0.3,{"DZ\characters\glasses\data\NVG_Headstrap_damage.rvmat"}},{0,{"DZ\characters\glasses\data\NVG_Headstrap_destruct.rvmat"}}};
				};
			};
		};
		repairableWithKits[] = {7};
		repairCosts[] = {25};
		class EnergyManager
		{
			hasIcon = 1;
			energyUsagePerSecond = 0.01;
			plugType = 1;
			attachmentAction = 1;
		};
		class AnimationSources
		{
			class hide
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class rotate
			{
				source = "user";
				animPeriod = 0.3;
				initPhase = 0;
			};
		};
	};
	class NULLED_GPNVG18_Base: NULLED_Armasight_N_15
	{
		scope = 0;
		displayName = "EOTech GPNVG";
		descriptionShort = "The EOTech GPNVG Ground Panoramic Helmet-mounted Night Vision Goggle sports a modular design for maintenance and supportability with a field replaceable tube design.";
		model = "nvgs\GPNVG_18\GPNVG_18.p3d";
		simulation = "itemoptics";
		animClass = "Binoculars";
		inventorySlot[] = {"NVG"};
		itemSize[] = {2,2};
		weight = 300;
		rotationFlags = 1;
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			modelOptics = "-";
			distanceZoomMin = 500;
			distanceZoomMax = 500;
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
		};
		attachments[] = {"BatteryD"};
		NVOptic = 1;
		simpleHiddenSelections[] = {"hide"};
		hiddenSelections[] = {"head"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\characters\glasses\data\NVG_Headstrap.rvmat"}},{0.7,{"DZ\characters\glasses\data\NVG_Headstrap.rvmat"}},{0.5,{"DZ\characters\glasses\data\NVG_Headstrap_damage.rvmat"}},{0.3,{"DZ\characters\glasses\data\NVG_Headstrap_damage.rvmat"}},{0,{"DZ\characters\glasses\data\NVG_Headstrap_destruct.rvmat"}}};
				};
			};
		};
		repairableWithKits[] = {7};
		repairCosts[] = {25};
		class EnergyManager
		{
			hasIcon = 1;
			energyUsagePerSecond = 0.01;
			plugType = 1;
			attachmentAction = 1;
		};
		class AnimationSources
		{
			class hide
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class rotate
			{
				source = "user";
				animPeriod = 0.3;
				initPhase = 0;
			};
		};
	};
	class NULLED_GPNVG18_Black: NULLED_GPNVG18_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"Nvgs\GPNVG_18\data\PGNVG_Black_ca.paa"};
	};
	class NULLED_GPNVG18_Green: NULLED_GPNVG18_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"Nvgs\GPNVG_18\data\PGNVG_Green_ca.paa"};
	};
	class NULLED_GPNVG18_Tan: NULLED_GPNVG18_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"Nvgs\GPNVG_18\data\PGNVG_ca.paa"};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyGPNVG_18: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"NVG"};
		model = "Nvgs\GPNVG_18\GPNVG_18.p3d";
	};
	class ProxyArmasight_N_15: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"NVG"};
		model = "Nvgs\Armasight_N_15\Armasight_N_15.p3d";
	};
};
