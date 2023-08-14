////////////////////////////////////////////////////////////////////
//DeRap: Optics\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Mon Aug 14 16:30:07 2023 : 'file' last modified on Mon Aug 14 16:30:07 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class NULLED_Weapons_Optics
	{
		units[] = {"NULLED_PK06","NULLED_EOTech_EXPS3","NULLED_Deltapoint","NULLED_Tango6","Rearmed_Spectre","NULLED_Leupold_Mark_4_HAMR","NULLED_ELCAN_Specter_DR","LeeEnfieldOptic","NULLED_Vortex_UH1","NULLED_PM2"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Optics"};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class ItemOptics;
	class LongrangeOptic;
	class HuntingOptic;
	class ACOGOptic;
	class ReflexOptic;
	class PSO1Optic;
	class FNP45_MRDSOptic;
	class NULLED_PK06: ItemOptics
	{
		scope = 2;
		displayName = "Belomo PK-06 reflex sight";
		descriptionShort = "Open reflex sight with automatic reticle brightness adjustment and switching between 3 reticle types.";
		model = "Attachments\Optics\Pk_06\Pk_06.p3d";
		attachments[] = {"BatteryD"};
		animClass = "Binoculars";
		simulation = "itemoptics";
		inventorySlot[] = {"weaponOptics"};
		selectionFireAnim = "zasleh";
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		rotationFlags = 17;
		reversed = 0;
		weight = 265;
		dispersionModifier = -0.009;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		itemSize[] = {2,1};
		hiddenSelections[] = {"reddot"};
		hiddenSelectionsTextures[] = {""};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\optics\data\lensglass_ca.paa","DZ\weapons\attachments\data\cm2.rvmat"}},{0.6,{}},{0.5,{"DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa","DZ\weapons\attachments\data\cm2_damage.rvmat"}},{0.3,{}},{0.0,{"DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa","DZ\weapons\attachments\data\cm2_destruct.rvmat"}}};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			modelOptics = "-";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {};
			opticSightTexture = "attachments\reticles\pk_06_mark_co.paa";
			opticsZoomMin = 0.5236;
			opticsZoomMax = 1.5;
			opticsZoomInit = 0.5236;
			distanceZoomMin = 200;
			distanceZoomMax = 200;
			discreteDistance[] = {200};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0};
			PPLensProperties[] = {0};
			PPBlurProperties = 0;
		};
		repairableWithKits[] = {5,7};
		repairCosts[] = {30,25};
		class EnergyManager
		{
			hasIcon = 1;
			energyUsagePerSecond = 0.01;
			plugType = 1;
			attachmentAction = 1;
		};
	};
	class MosinLRS: LongrangeOptic
	{
		inventorySlot = "weaponOpticsMosin";
	};
	class NULLED_EOTech_EXPS3: ItemOptics
	{
		scope = 2;
		displayName = "EOTech EXPS3";
		descriptionShort = "An operator-grade Holographic Weapon Sight built for close-quarter engagements with fast-moving targets, our Model EXPS3™ HWS® delivers two eyes open shooting, 7mm raised base for lower iron sight access, and night vision capability. Side buttons and an adjustable, quick-detach locking lever for easy installation and removal.";
		model = "Attachments\Optics\EOTech_EXPS3\EOTech_EXPS3.p3d";
		attachments[] = {};
		animClass = "Binoculars";
		simulation = "itemoptics";
		inventorySlot[] = {"weaponOptics"};
		selectionFireAnim = "zasleh";
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		rotationFlags = 17;
		reversed = 0;
		weight = 265;
		dispersionModifier = -0.009;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		itemSize[] = {2,1};
		hiddenSelections[] = {"reddot"};
		hiddenSelectionsTextures[] = {""};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1,{"DZ\weapons\attachments\optics\data\lensglass_ca.paa","DZ\weapons\attachments\data\cm2.rvmat"}},{0.7,{}},{0.5,{"DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa","DZ\weapons\attachments\data\cm2_damage.rvmat"}},{0.3,{}},{0,{"DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa","DZ\weapons\attachments\data\cm2_destruct.rvmat"}}};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			modelOptics = "-";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {};
			opticSightTexture = "Attachments\reticles\EXPS3-0_reticle_green_ca.paa";
			opticsZoomMin = 0.5236;
			opticsZoomMax = 1.5;
			opticsZoomInit = 0.5236;
			distanceZoomMin = 200;
			distanceZoomMax = 200;
			discreteDistance[] = {200};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0};
			PPLensProperties[] = {0};
			PPBlurProperties = 0;
		};
		repairableWithKits[] = {5,7};
		repairCosts[] = {30,25};
	};
	class NULLED_Deltapoint: FNP45_MRDSOptic
	{
		scope = 2;
		displayName = "Deltapoint Pro";
		descriptionShort = "Most people think of the DeltaPoint Pro as a pistol sight, but it's just as capabale on an AR platform as it is on a handgun. The DP Pro AR mount brings the red dot to just the right height without adding a ton of weight or bulk. It's ideal for AR pistols for lightweight builds where every ounce matters.";
		model = "Attachments\Optics\deltapoint\DeltaPoint.p3d";
		attachments[] = {"BatteryD"};
		animClass = "Binoculars";
		rotationFlags = 17;
		reversed = 0;
		weight = 150;
		itemSize[] = {1,1};
		inventorySlot = "pistolOptics";
		simulation = "itemoptics";
		selectionFireAnim = "zasleh";
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		recoilModifier[] = {1,1,1};
		hiddenSelections[] = {"reddot","blue"};
		hiddenSelectionsTextures[] = {""};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 30;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\optics\data\lensglass_ca.paa","DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat","DZ\weapons\attachments\data\mrds.rvmat"}},{0.7,{}},{0.5,{"DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa","DZ\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat","DZ\weapons\attachments\data\mrds_damage.rvmat"}},{0.3,{}},{0.0,{"DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa","DZ\weapons\attachments\optics\data\lensglass_clearer_destruct.rvmat","DZ\weapons\attachments\data\mrds_destruct.rvmat"}}};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			modelOptics = "-";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {};
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			distanceZoomMin = 50;
			distanceZoomMax = 50;
			discreteDistance[] = {50};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {};
			PPLensProperties[] = {};
			PPBlurProperties = 0;
			PPDOFProperties[] = {};
			opticSightTexture = "dz\weapons\attachments\optics\data\collimdot_red_ca.paa";
		};
		repairableWithKits[] = {5,7};
		repairCosts[] = {30.0,25.0};
		class EnergyManager
		{
			hasIcon = 1;
			energyUsagePerSecond = 0.02;
			plugType = 1;
			attachmentAction = 1;
		};
	};
	class NULLED_Tango6: ACOGOptic
	{
		scope = 2;
		displayName = "Sig Sauer Tango6 1-6x24mm";
		descriptionShort = "";
		model = "Attachments\Optics\Sig Sauer Tango6 1-6x24mm\tango6.p3d";
		animClass = "Binoculars";
		attachments[] = {""};
		rotationFlags = 16;
		reversed = 0;
		weight = 440;
		itemSize[] = {2,1};
		inventorySlot = "WeaponOptics";
		selectionFireAnim = "zasleh";
		simulation = "itemoptics";
		dispersionModifier = -0.000125;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		hiddenSelections[] = {"reddot"};
		hiddenSelectionsTextures[] = {"",""};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","DZ\weapons\attachments\optics\data\lensglass_standard.rvmat","DZ\weapons\attachments\data\acog.rvmat"}},{0.7,{}},{0.5,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","DZ\weapons\attachments\optics\data\lensglass_standard_damage.rvmat","DZ\weapons\attachments\data\acog_damage.rvmat"}},{0.3,{}},{0.0,{"DZ\weapons\attachments\data\scope_alpha_destroyed_ca.paa","DZ\weapons\attachments\optics\data\lensglass_standard_destruct.rvmat","DZ\weapons\attachments\data\acog_destruct.rvmat"}}};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			modelOptics = "-";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {};
			opticsZoomMin = "0.3926/4";
			opticsZoomMax = "0.3926/6";
			opticsZoomInit = "0.3926/6";
			discretefov[] = {"0.3926/4","0.3926/6"};
			distanceZoomMin = 100;
			distanceZoomMax = 600;
			discreteDistance[] = {100,200,300,400,500,600};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0,0,0,0};
			PPLensProperties[] = {0,0,0,0};
			PPBlurProperties = 0.0;
			opticSightTexture = "";
		};
		class OpticsInfoWeaponOverride
		{
			memoryPointCamera = "eyeIronsights";
			cameraDir = "cameraDirIronsights";
			modelOptics = "-";
			opticsDisablePeripherialVision = 0.6;
			opticsFlare = 0;
			opticsPPEffects[] = {};
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			distanceZoomMin = 50;
			distanceZoomMax = 50;
			discreteDistance[] = {50};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.4,0.05};
			PPLensProperties[] = {1,0.15,0,0};
			PPBlurProperties = 0.2;
			PPDOFProperties[] = {};
		};
		class EnergyManager
		{
			hasIcon = 1;
			energyUsagePerSecond = 0.02;
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
		};
	};
	class Rearmed_Spectre: ACOGOptic
	{
		scope = 2;
		displayName = "Spectre Elcan";
		descriptionShort = "The HAMR is a fixed four power optic with a 24 mm objective lens. The HAMR is designed specifically for carbines, shotguns, and rifles, most notably the M4 and civilian variants of the weapon. What makes the optic somewhat unusual and unique is the addition of the Leupold Delta point, that rides on top of the optic. The Delta is a miniature red dot optic that uses a red triangle as it reticle.";
		model = "Attachments\Optics\specture\spectre_new.p3d";
		animClass = "Binoculars";
		rotationFlags = 16;
		reversed = 0;
		weight = 440;
		itemSize[] = {2,1};
		inventorySlot = "WeaponOptics";
		selectionFireAnim = "zasleh";
		simulation = "itemoptics";
		dispersionModifier = -0.000125;
		dispersionCondition = "true";
		attachments[] = {};
		recoilModifier[] = {1,1,1};
		hiddenSelections[] = {"reddot","reticle_nonglow"};
		hiddenSelectionsTextures[] = {"","Attachments\reticles\Scope_all_leupold_mark4_hamr_marks_ca.paa"};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","DZ\weapons\attachments\optics\data\lensglass_standard.rvmat","DZ\weapons\attachments\data\acog.rvmat"}},{0.7,{}},{0.5,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","DZ\weapons\attachments\optics\data\lensglass_standard_damage.rvmat","DZ\weapons\attachments\data\acog_damage.rvmat"}},{0.3,{}},{0,{"DZ\weapons\attachments\data\scope_alpha_destroyed_ca.paa","DZ\weapons\attachments\optics\data\lensglass_standard_destruct.rvmat","DZ\weapons\attachments\data\acog_destruct.rvmat"}}};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			modelOptics = "-";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {};
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			discretefov[] = {"0.3926/4"};
			distanceZoomMin = 50;
			distanceZoomMax = 50;
			discreteDistance[] = {100,200,300,400,500,600};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0};
			PPLensProperties[] = {0};
			PPBlurProperties = 0;
		};
		class OpticsInfoWeaponOverride
		{
			memoryPointCamera = "eyeIronsights";
			cameraDir = "cameraDirIronsights";
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			distanceZoomMin = 200;
			distanceZoomMax = 200;
			discreteDistance[] = {25,100,200};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0};
			PPLensProperties[] = {0};
			PPBlurProperties = 0;
			PPDOFProperties[] = {};
		};
		class EnergyManager{};
	};
	class NULLED_Leupold_Mark_4_HAMR: ACOGOptic
	{
		scope = 2;
		displayName = "Leupold Mark 4 HAMR";
		descriptionShort = "The HAMR is a fixed four power optic with a 24 mm objective lens. The HAMR is designed specifically for carbines, shotguns, and rifles, most notably the M4 and civilian variants of the weapon. What makes the optic somewhat unusual and unique is the addition of the Leupold Delta point, that rides on top of the optic. The Delta is a miniature red dot optic that uses a red triangle as it reticle.";
		model = "Attachments\Optics\Leupold_Mark_4_HAMR\Leupold_Mark_4_HAMR.p3d";
		animClass = "Binoculars";
		rotationFlags = 16;
		reversed = 0;
		weight = 440;
		itemSize[] = {2,1};
		inventorySlot = "WeaponOptics";
		selectionFireAnim = "zasleh";
		simulation = "itemoptics";
		dispersionModifier = -0.000125;
		dispersionCondition = "true";
		attachments[] = {};
		recoilModifier[] = {1,1,1};
		hiddenSelections[] = {"reddot","reticle_nonglow"};
		hiddenSelectionsTextures[] = {"","Attachments\reticles\Scope_all_leupold_mark4_hamr_marks_ca.paa"};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","DZ\weapons\attachments\optics\data\lensglass_standard.rvmat","DZ\weapons\attachments\data\acog.rvmat"}},{0.6,{}},{0.5,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","DZ\weapons\attachments\optics\data\lensglass_standard_damage.rvmat","DZ\weapons\attachments\data\acog_damage.rvmat"}},{0.3,{}},{0.0,{"DZ\weapons\attachments\data\scope_alpha_destroyed_ca.paa","DZ\weapons\attachments\optics\data\lensglass_standard_destruct.rvmat","DZ\weapons\attachments\data\acog_destruct.rvmat"}}};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			modelOptics = "-";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {};
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			discretefov[] = {"0.3926/4"};
			distanceZoomMin = 50;
			distanceZoomMax = 50;
			discreteDistance[] = {100,200,300,400,500,600,700,800};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0};
			PPLensProperties[] = {0};
			PPBlurProperties = 0;
		};
		class OpticsInfoWeaponOverride
		{
			memoryPointCamera = "eyeIronsights";
			cameraDir = "cameraDirIronsights";
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			distanceZoomMin = 200;
			distanceZoomMax = 200;
			discreteDistance[] = {25,100,200};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0};
			PPLensProperties[] = {0};
			PPBlurProperties = 0;
			PPDOFProperties[] = {};
		};
		class EnergyManager{};
	};
	class NULLED_ELCAN_Specter_DR: ACOGOptic
	{
		scope = 2;
		displayName = "Rearmed ELCAN Specter DR";
		descriptionShort = "The HAMR is a fixed four power optic with a 24 mm objective lens. The HAMR is designed specifically for carbines, shotguns, and rifles, most notably the M4 and civilian variants of the weapon. What makes the optic somewhat unusual and unique is the addition of the Leupold Delta point, that rides on top of the optic. The Delta is a miniature red dot optic that uses a red triangle as it reticle.";
		model = "Attachments\Optics\specture\spectre_new.p3d";
		animClass = "Binoculars";
		rotationFlags = 16;
		reversed = 0;
		weight = 440;
		itemSize[] = {2,1};
		inventorySlot = "WeaponOptics";
		selectionFireAnim = "zasleh";
		simulation = "itemoptics";
		dispersionModifier = -0.000125;
		dispersionCondition = "true";
		attachments[] = {};
		recoilModifier[] = {1,1,1};
		hiddenSelections[] = {"reddot","reticle_nonglow"};
		hiddenSelectionsTextures[] = {"","Attachments\reticles\Scope_all_leupold_mark4_hamr_marks_ca.paa"};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","DZ\weapons\attachments\optics\data\lensglass_standard.rvmat","DZ\weapons\attachments\data\acog.rvmat"}},{0.7,{}},{0.5,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","DZ\weapons\attachments\optics\data\lensglass_standard_damage.rvmat","DZ\weapons\attachments\data\acog_damage.rvmat"}},{0.3,{}},{0,{"DZ\weapons\attachments\data\scope_alpha_destroyed_ca.paa","DZ\weapons\attachments\optics\data\lensglass_standard_destruct.rvmat","DZ\weapons\attachments\data\acog_destruct.rvmat"}}};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			modelOptics = "-";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {};
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			discretefov[] = {"0.3926/4"};
			distanceZoomMin = 50;
			distanceZoomMax = 50;
			discreteDistance[] = {100,200,300,400,500,600};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0};
			PPLensProperties[] = {0};
			PPBlurProperties = 0;
		};
		class OpticsInfoWeaponOverride
		{
			memoryPointCamera = "eyeIronsights";
			cameraDir = "cameraDirIronsights";
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			distanceZoomMin = 200;
			distanceZoomMax = 200;
			discreteDistance[] = {25,100,200};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0};
			PPLensProperties[] = {0};
			PPBlurProperties = 0;
			PPDOFProperties[] = {};
		};
		class EnergyManager{};
	};
	class LeeEnfieldOptic: ItemOptics
	{
		scope = 2;
		displayName = "LeeEnfield 4x Scope";
		descriptionShort = "LeeEnfield";
		model = "\DZ\weapons\attachments\optics\optic_puscope.p3d";
		animClass = "Binoculars";
		rotationFlags = 16;
		reversed = 0;
		weight = 800;
		itemSize[] = {3,1};
		inventorySlot[] = {"weaponOpticsLeeEnfield"};
		simulation = "itemoptics";
		dispersionModifier = -0.0001;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","DZ\weapons\attachments\data\puscope.rvmat"}},{0.7,{}},{0.5,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","DZ\weapons\attachments\data\puscope_damage.rvmat"}},{0.3,{}},{0.0,{"DZ\weapons\attachments\data\scope_alpha_destroyed_ca.paa","DZ\weapons\attachments\data\puscope_destruct.rvmat"}}};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			modelOptics = "-";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {"OpticsCHAbera3","OpticsBlur1"};
			opticsZoomMin = "0.3926/4";
			opticsZoomMax = "0.3926/4";
			opticsZoomInit = "0.3926/4";
			distanceZoomMin = 100;
			distanceZoomMax = 1300;
			discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {};
			PPLensProperties[] = {};
			PPBlurProperties = 0.6;
		};
	};
	class NULLED_Vortex_UH1: ItemOptics
	{
		scope = 2;
		displayName = "Vortex UH1";
		descriptionShort = "Cool optic made by Designful";
		model = "Attachments\Optics\Vortex\vortex.p3d";
		attachments[] = {"BatteryD"};
		animClass = "Binoculars";
		reversed = 0;
		weight = 800;
		itemSize[] = {2,1};
		inventorySlot[] = {"weaponOptics"};
		rotationFlags = 4;
		dispersionModifier = -0.009;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		hiddenSelections[] = {"reddot"};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1,{"",""}},{0.7,{}},{0.5,{"",""}},{0.3,{}},{0,{"",""}}};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			modelOptics = "-";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {};
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			distanceZoomMin = 100;
			distanceZoomMax = 500;
			discreteDistance[] = {100,200,300,400,500};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0};
			PPLensProperties[] = {0};
			PPDOFProperties[] = {0,0,0,0,0,0};
			PPBlurProperties = 0;
			opticSightTexture = "\Attachments\Optics\Vortex\Data\reticle.paa";
		};
		repairableWithKits[] = {7};
		repairCosts[] = {30,25};
		class EnergyManager
		{
			hasIcon = 1;
			energyUsagePerSecond = 0.01;
			plugType = 1;
			attachmentAction = 1;
		};
	};
	class NULLED_PM2: HuntingOptic
	{
		scope = 2;
		displayName = "Schmidt Bender PM2";
		descriptionShort = "The 5-25x56 PM2 is the most popular specification of the 5-25x56 PM II. It is largely in use in military/police units around the globe. Also among competition shooters this scope is standard due to its universal use with big magnification and an extremely comprehensive total adjustment range. The Double Turn elevation turret is one of our most popular and sought-after turret designs. It provides a visible rotational indicator and has two rotational settings. The indicator changes colour during the transition to the second rotation from black to yellow, which corresponds to the yellow font on the turret. It is ideally capable of providing the adjustment travel needed for long-range shots. The precise parallax compensation with an engraved meter index, is going as close as 10 m/11 yd until up to infinity. The 5-25x56 PM II/LP has a large reticle choice in first or in second focal plane. In a 5-25x56 PM II/LP riflescope, none other can truly compare!";
		model = "Attachments\Optics\Pm2\Pm2.p3d";
		animClass = "Binoculars";
		rotationFlags = 4;
		reversed = 0;
		weight = 700;
		itemSize[] = {4,1};
		inventorySlot[] = {"weaponOptics","weaponOpticsHunting"};
		simulation = "itemoptics";
		dispersionModifier = -0.00025;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		memoryPointCamera = "eyeScope_temp";
		cameraDir = "cameraDir";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\optics\data\lensglass_ca.paa","DZ\weapons\attachments\data\terra.rvmat"}},{0.7,{}},{0.5,{"DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa","DZ\weapons\attachments\data\terra_damage.rvmat"}},{0.3,{}},{0.0,{"DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa","DZ\weapons\attachments\data\terra_destruct.rvmat"}}};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			useModelOptics = 1;
			modelOptics = "Attachments\Optics\Pm2\opticview_PM2.p3d";
			preloadOpticType = "Preload2DOptic_Longrange";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {"OpticsCHAbera3","OpticsBlur1"};
			opticsZoomMin = "0.3926/5";
			opticsZoomMax = "0.3926/25";
			opticsZoomInit = "0.3926/5";
			discretefov[] = {"0.3926/5","0.3926/15","0.3926/25"};
			discreteInitIndex = 0;
			distanceZoomMin = 100;
			distanceZoomMax = 1000;
			discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {};
			PPLensProperties[] = {};
			PPBlurProperties = 0;
		};
		class AnimationSources
		{
			class hide
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class rings_ris
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class rings_ris_pilot
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class rings_winchester
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class rings_winchester_pilot
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyEOTech_EXPS3: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponOptics";
		model = "Attachments\Optics\EOTech_EXPS3\EOTech_EXPS3.p3d";
	};
	class ProxyPm2: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponOptics";
		model = "Attachments\Optics\Pm2\Pm2.p3d";
	};
	class ProxyLeupold_Mark_4_HAMR: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponOptics";
		model = "Attachments\Optics\Leupold_Mark_4_HAMR\Leupold_Mark_4_HAMR.p3d";
	};
	class ProxyDeltaPoint: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponOptics";
		model = "Attachments\Optics\deltapoint\DeltaPoint.p3d";
	};
};
