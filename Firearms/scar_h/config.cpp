////////////////////////////////////////////////////////////////////
//DeRap: Nulled_Firearms\scar_h\config.bin
//Produced from mikero's Dos Tools Dll version 8.12
//https://mikero.bytex.digital/Downloads
//'now' is Wed Aug 25 20:20:30 2021 : 'file' last modified on Sun Aug 22 09:59:43 2021
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class NULLED_Scar_H
	{
		units[] = {};
		weapons[] = {"NULLED_Scar_H"};
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
	class Rifle_Base;
	class NULLED_Scar_H_Base: Rifle_Base
	{
		scope = 0;
		weight = 3700;
		absorbency = 0.0;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30.0,25.0};
		initSpeedMultiplier = 1.0;
		PPDOFProperties[] = {};
		WeaponLength = 0.752228;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_308Win","Ammo_308WinTracer"};
		magazines[] = {"Mag_Scar_H_20Rnd"};
		magazineSwitchTime = 0.45;
		ejectType = 1;
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {0.5,0.5,0.5};
		simpleHiddenSelections[] = {"hide_barrel","folding_raised","folding_lowered"};
		drySound[] = {"dz\sounds\weapons\firearms\SKS\SKS_dry",0.5,1,20};
		reloadMagazineSound[] = {};
		reloadAction = "ReloadFal";
		modes[] = {"FullAuto","SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"Scar_H_Shot_SoundSet","","Scar_H_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"Scar_H_silencer_SoundSet","","Scar_H_silencerInteriorHomeMadeTail_SoundSet"}};
			begin1[] = {};
			begin2[] = {};
			begin3[] = {};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			reloadTime = 0.096;
			recoil = "recoil_fal";
			recoilProne = "recoil_fal_prone";
			dispersion = 0.0;
			magazineSlot = "magazine";
			beginSilenced_Pro[] = {};
			beginSilenced_HomeMade[] = {};
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"Scar_H_Shot_SoundSet","","Scar_H_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"Scar_H_silencer_SoundSet","","Scar_H_silencerInteriorHomeMadeTail_SoundSet"}};
			begin1[] = {};
			begin2[] = {};
			begin3[] = {};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			reloadTime = 0.096;
			recoil = "recoil_fal";
			recoilProne = "recoil_fal_prone";
			dispersion = 0.0;
			magazineSlot = "magazine";
			beginSilenced_Pro[] = {};
			beginSilenced_HomeMade[] = {};
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {25};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 25;
			distanceZoomMax = 25;
		};
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke";
				};
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_ump45_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
				};
				class MuzzleFlashStar
				{
					overrideParticle = "weapon_shot_Flame_3D_4star";
					ignoreIfSuppressed = 1;
					overrideDirectionVector[] = {0,45,0};
					positionOffset[] = {0.01,0,0};
				};
				class ChamberSmokeBurst
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
					overrideDirectionPoint = "Nabojniceend";
				};
			};
			class OnOverheating
			{
				maxOverheatingValue = 60;
				shotsToStartOverheating = 7;
				overheatingDecayInterval = 1;
				class SmokingBarrel1
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0.0,0.4};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot1
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.4,0.9};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot3
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel_heavy";
					onlyWithinOverheatLimits[] = {0.9,1};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.2,0,0};
					onlyWithinOverheatLimits[] = {0,1};
					onlyWithinRainLimits[] = {0.2,1};
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
	};
	class NULLED_Scar_H: NULLED_Scar_H_Base
	{
		scope = 2;
		displayName = "FN Scar-H";
		descriptionShort = "The FN SCAR-H uses 7.62 NATO rounds instead of the usual 5.56 NATO rounds. It is the heavier variant of its cousin, the FN Scar-L, having more accuracy, damage, and penetration.";
		model = "Firearms\Scar_H\Scar_H.p3d";
		attachments[] = {"weaponWrap","weaponOptics","weaponMuzzleAK"};
		itemSize[] = {8,3};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"DZ\weapons\firearms\fal\Data\fal.rvmat"}},{0.7,{"DZ\weapons\firearms\fal\Data\fal.rvmat"}},{0.5,{"DZ\weapons\firearms\fal\Data\fal_damage.rvmat"}},{0.3,{"DZ\weapons\firearms\fal\Data\fal_damage.rvmat"}},{0.0,{"DZ\weapons\firearms\fal\Data\fal_destruct.rvmat"}}};
				};
			};
		};
	};
};
