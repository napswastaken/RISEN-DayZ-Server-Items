////////////////////////////////////////////////////////////////////
//DeRap: Nulled_Firearms\Kar98\config.bin
//Produced from mikero's Dos Tools Dll version 8.12
//https://mikero.bytex.digital/Downloads
//'now' is Wed Aug 25 20:20:22 2021 : 'file' last modified on Sun Aug 22 09:59:40 2021
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class NULLED_Kar98
	{
		units[] = {};
		weapons[] = {"NULLED_Kar98"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","NULLED_Weapons_Ammunition"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class BoltActionRifle_InnerMagazine_Base;
	class NULLED_Kar98_Base: BoltActionRifle_InnerMagazine_Base
	{
		scope = 0;
		displayName = "";
		descriptionShort = "";
		animName = "Mosin9130";
		weight = 4000;
		absorbency = 0.0;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30.0,25.0};
		PPDOFProperties[] = {};
		DisplayMagazine = 0;
		WeaponLength = 1.22271;
		chamberSize = 5;
		chamberedRound = "";
		magazines[] = {};
		chamberableFrom[] = {"NULLED_Ammo_792x57"};
		ejectType = 0;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {0.5,0.5,0.5};
		simpleHiddenSelections[] = {"hide_barrel"};
		drySound[] = {"dz\sounds\weapons\firearms\mosin9130\mosin_dry",0.5,1,20};
		reloadSkips[] = {0.32,0.41,0.5,0.59,0.69,0.77};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\mosin9130\mosin_reloading",0.8,1,20};
		reloadSound[] = {};
		reloadAction = "ReloadMosinFull";
		shotAction = "ReloadMosinShort";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\mosin9130\data\mosin_9130.rvmat"};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"Kar98_Shot_SoundSet","","Mosin_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"Kar98_silencer_SoundSet","","Mosin_silencerInteriorHomeMadeTail_SoundSet"}};
			begin1[] = {};
			begin2[] = {};
			begin3[] = {};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			beginSilenced_HomeMade[] = {};
			soundBeginExt[] = {{"beginSilenced_HomeMade",1}};
			reloadTime = 1;
			recoil = "recoil_mosin";
			recoilProne = "recoil_mosin_prone";
			dispersion = 0.001;
			magazineSlot = "magazine";
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_mosin9130_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					positionOffset[] = {-0.03,0,0};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 1;
				maxOverheatingValue = 3;
				overheatingDecayInterval = 4;
				class BarrelSmoke
				{
					overrideParticle = "smoking_barrel_small";
				};
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen = 1;
					overrideParticle = "smoking_barrel_small";
					overridePoint = "Nabojnicestart";
				};
			};
			class OnBulletCasingEject
			{
				class ChamberSmokeRaise
				{
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "Nabojnicestart";
				};
			};
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
			discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex = 0;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"DZ\weapons\firearms\mosin9130\Data\mosin_9130.rvmat"}},{0.7,{"DZ\weapons\firearms\mosin9130\Data\mosin_9130.rvmat"}},{0.5,{"DZ\weapons\firearms\mosin9130\Data\mosin_9130_damage.rvmat"}},{0.3,{"DZ\weapons\firearms\mosin9130\Data\mosin_9130_damage.rvmat"}},{0.0,{"DZ\weapons\firearms\mosin9130\Data\mosin_9130_destruct.rvmat"}}};
				};
			};
		};
	};
	class NULLED_Kar98: NULLED_Kar98_Base
	{
		scope = 2;
		displayName = "Karabiner 98 kurz";
		descriptionShort = "The Karabiner 98 kurz often abbreviated Kar98k or K98k is a bolt-action rifle chambered for the 7.92×57mm Mauser cartridge that was adopted on 21 June 1935 as the standard service rifle by the German Wehrmacht.";
		model = "Firearms\Kar98\kar98.p3d";
		animName = "Mosin9130";
		weight = 3000;
		absorbency = 0.1;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30.0,25.0};
		chamberSize = 5;
		chamberedRound = "";
		magazines[] = {};
		chamberableFrom[] = {"NULLED_Ammo_792x57"};
		ejectType = 0;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {0.5,0.5,0.5};
		DisplayMagazine = 0;
		simpleHiddenSelections[] = {"hide_barrel"};
		drySound[] = {"dz\sounds\weapons\firearms\mosin9130\mosin_dry",0.5,1};
		reloadSkips[] = {0.32,0.41,0.5,0.59,0.69,0.77};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\mosin9130\mosin_reloading",0.8,1,20};
		reloadSound[] = {};
		reloadAction = "ReloadMosinFull";
		shotAction = "ReloadMosinShort";
		hiddenSelections[] = {"camo"};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"Kar98_Shot_SoundSet","","Mosin_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"Kar98_silencer_SoundSet","","Mosin_silencerInteriorHomeMadeTail_SoundSet"}};
			begin1[] = {};
			begin2[] = {};
			begin3[] = {};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			beginSilenced_HomeMade[] = {};
			soundBeginExt[] = {{"beginSilenced_HomeMade",1}};
			reloadTime = 1;
			recoil = "recoil_mosin";
			recoilProne = "recoil_mosin_prone";
			dispersion = 0.003;
		};
		class OpticsInfo: OpticsInfo
		{
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
			discreteDistance[] = {50};
			discreteDistanceInitIndex = 0;
		};
	};
};
