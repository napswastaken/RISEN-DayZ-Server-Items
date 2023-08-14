////////////////////////////////////////////////////////////////////
//DeRap: Nulled_Firearms\RSASS\config.bin
//Produced from mikero's Dos Tools Dll version 8.12
//https://mikero.bytex.digital/Downloads
//'now' is Wed Aug 25 20:20:29 2021 : 'file' last modified on Sun Aug 22 09:59:42 2021
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class NULLED_RSASS
	{
		units[] = {};
		weapons[] = {"NULLED_RSASS_Black","NULLED_RSASS_Tan"};
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
	class NULLED_RSASS_Base: Rifle_Base
	{
		scope = 0;
		weight = 3700;
		absorbency = 0;
		repairableWithKits[] = {1};
		repairCosts[] = {25};
		PPDOFProperties[] = {};
		initSpeedMultiplier = 1.0;
		WeaponLength = 0.752228;
		barrelArmor = 3.888;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_308Win","Ammo_308WinTracer"};
		magazines[] = {"Mag_RSASS_20Rnd"};
		magazineSwitchTime = 0.45;
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {0.5,0.5,0.5};
		simpleHiddenSelections[] = {"hide_barrel","folding_raised","folding_lowered"};
		drySound[] = {"dz\sounds\weapons\firearms\SKS\SKS_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\AK74\ak74_reload",0.8,1,30};
		reloadAction = "ReloadFal";
		modes[] = {"SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"RSASS_Shot_SoundSet","","RSASS_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"RSASS_silencer_SoundSet","","RSASS_InteriorTail_SoundSet"}};
			reloadTime = 0.15;
			recoil = "recoil_fal";
			recoilProne = "recoil_fal_prone";
			dispersion = 0.001;
			magazineSlot = "magazine";
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {100};
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
					onlyWithinOverheatLimits[] = {0,0.4};
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
	class NULLED_RSASS_Black: NULLED_RSASS_Base
	{
		scope = 2;
		displayName = "Remington R11 RSASS";
		descriptionShort = "The Remington Semi Automatic Sniper System is the culmination of a joint effort between Remington Arms and JP Enterprises to develop a highly accurate and superbly built rapid firing sniper rifle. This weapon delivers sub-MOA accuracy out to 800 meters and beyond while providing the tactical advantage of a semi-automatic platform.";
		model = "Firearms\RSASS\RSASS.p3d";
		attachments[] = {"weaponButtstockM4","weaponWrap","weaponOptics","suppressorImpro","weaponMuzzleM4"};
		itemSize[] = {8,3};
		hiddenSelections[] = {"zybtek","camo"};
		hiddenSelectionsTextures[] = {"Firearms\RSASS\data\Black_co.paa","Firearms\RSASS\data\Black_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1,{"DZ\weapons\firearms\fal\Data\fal.rvmat"}},{0.7,{"DZ\weapons\firearms\fal\Data\fal.rvmat"}},{0.5,{"DZ\weapons\firearms\fal\Data\fal_damage.rvmat"}},{0.3,{"DZ\weapons\firearms\fal\Data\fal_damage.rvmat"}},{0,{"DZ\weapons\firearms\fal\Data\fal_destruct.rvmat"}}};
				};
			};
		};
	};
	class NULLED_RSASS_Tan: NULLED_RSASS_Base
	{
		scope = 2;
		displayName = "RSASS";
		descriptionShort = "The Remington Semi Automatic Sniper System (RSASS) is a semi-automatic precision rifle manufactured by Remington Arms. Special thanks to AlipMitchell for funding this.";
		model = "Firearms\RSASS\RSASS.p3d";
		attachments[] = {"weaponButtstockM4","weaponWrap","weaponOptics","suppressorImpro","weaponMuzzleM4"};
		itemSize[] = {8,3};
		hiddenSelections[] = {"zybtek","camo"};
		hiddenSelectionsTextures[] = {"Firearms\RSASS\data\Tan_co.paa","Firearms\RSASS\data\Tan_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1,{"DZ\weapons\firearms\fal\Data\fal.rvmat"}},{0.7,{"DZ\weapons\firearms\fal\Data\fal.rvmat"}},{0.5,{"DZ\weapons\firearms\fal\Data\fal_damage.rvmat"}},{0.3,{"DZ\weapons\firearms\fal\Data\fal_damage.rvmat"}},{0,{"DZ\weapons\firearms\fal\Data\fal_destruct.rvmat"}}};
				};
			};
		};
	};
};
