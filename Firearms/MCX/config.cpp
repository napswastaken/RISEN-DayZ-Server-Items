////////////////////////////////////////////////////////////////////
//DeRap: Nulled_Firearms\MCX\config.bin
//Produced from mikero's Dos Tools Dll version 8.12
//https://mikero.bytex.digital/Downloads
//'now' is Wed Aug 25 20:20:24 2021 : 'file' last modified on Sun Aug 22 09:59:41 2021
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class NULLED_Weapons_Firearms_MCX
	{
		units[] = {};
		weapons[] = {"NULLED_MCX"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","NULLED_Attachments"};
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
	class NULLED_MCX_Base: Rifle_Base
	{
		scope = 0;
		weight = 1746;
		absorbency = 0;
		repairableWithKits[] = {1};
		repairCosts[] = {25};
		PPDOFProperties[] = {};
		ironsightsExcludingOptics[] = {"M4_CarryHandleOptic","BUISOptic","M68Optic","M4_T3NRDSOptic","ReflexOptic","ACOGOptic"};
		WeaponLength = 0.814784;
		barrelArmor = 3.75;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"NULLED_Ammo_Blackout"};
		magazines[] = {"Mag_STANAG_Blackout_30Rnd","Mag_STANAGCoupled_Blackout_30Rnd","Mag_CMAG_Blackout_10Rnd","Mag_CMAG_Blackout_20Rnd","Mag_CMAG_Blackout_30Rnd","Mag_CMAG_Blackout_40Rnd","Mag_CMAG_Blackout_10Rnd_Green","Mag_CMAG_Blackout_20Rnd_Green","Mag_CMAG_Blackout_30Rnd_Green","Mag_CMAG_Blackout_40Rnd_Green","Mag_CMAG_Blackout_10Rnd_Black","Mag_CMAG_Blackout_20Rnd_Black","Mag_CMAG_Blackout_30Rnd_Black","Mag_CMAG_Blackout_40Rnd_Black"};
		magazineSwitchTime = 0.5;
		ejectType = 1;
		recoilModifier[] = {1,1.2,1};
		swayModifier[] = {0.5,0.5,0.5};
		simpleHiddenSelections[] = {"hide_barrel"};
		drySound[] = {"dz\sounds\weapons\firearms\m4a1\m4_dry",0.5,1,20};
		reloadAction = "ReloadM4";
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\m4a1\m4_reload_0",0.8,1,20};
		hiddenSelections[] = {"camo"};
		modes[] = {"FullAuto","SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"M4_Shot_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			begin1[] = {"",1,1,1000};
			begin2[] = {"",1,1,1000};
			begin3[] = {"",1,1,1000};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			reloadTime = 0.125;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			dispersion = 0.00125;
			magazineSlot = "magazine";
			beginSilenced_Pro1[] = {"",1,1,75};
			beginSilenced_Pro2[] = {"2",1,1,75};
			beginSilenced_HomeMade[] = {"",1,1,150};
			soundBeginExt[] = {{"beginSilenced_Pro1",0.5,"beginSilenced_Pro2",0.5},{"beginSilenced_HomeMade",1}};
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"M4_Shot_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			begin1[] = {"",1.7782794,1,1000};
			begin2[] = {"",1.7782794,1,1000};
			begin3[] = {"",1.7782794,1,1000};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			reloadTime = 0.075;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			dispersion = 0.00125;
			magazineSlot = "magazine";
			beginSilenced_Pro1[] = {"",1,1,75};
			beginSilenced_Pro2[] = {"2",1,1,75};
			beginSilenced_HomeMade[] = {"d",1,1,150};
			soundBeginExt[] = {{"beginSilenced_Pro1",0.5,"beginSilenced_Pro2",0.5},{"beginSilenced_HomeMade",1}};
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
	};
	class NULLED_MCX: NULLED_MCX_Base
	{
		scope = 2;
		displayName = "SIG MCX .300 AAC Blackout Assault Rifle";
		descriptionShort = "The MCX line, designed and manufactured by SIG Sauer, is available in both semi-automatic and automatic versions and features a short-stroke gas piston system, which is inherited from the earlier SIG MPX submachine gun.";
		model = "Firearms\MCX\MCX.p3d";
		attachments[] = {"weaponWrap","weaponOptics","weaponFlashlight","weaponMuzzleM4","weaponButtstockMCX","weaponHandguardMCX"};
		chamberableFrom[] = {"NULLED_Ammo_Blackout"};
		magazines[] = {"Mag_STANAG_Blackout_30Rnd","Mag_STANAGCoupled_Blackout_30Rnd","Mag_CMAG_Blackout_10Rnd","Mag_CMAG_Blackout_20Rnd","Mag_CMAG_Blackout_30Rnd","Mag_CMAG_Blackout_40Rnd","Mag_CMAG_Blackout_10Rnd_Green","Mag_CMAG_Blackout_20Rnd_Green","Mag_CMAG_Blackout_30Rnd_Green","Mag_CMAG_Blackout_40Rnd_Green","Mag_CMAG_Blackout_10Rnd_Black","Mag_CMAG_Blackout_20Rnd_Black","Mag_CMAG_Blackout_30Rnd_Black","Mag_CMAG_Blackout_40Rnd_Black"};
		itemSize[] = {8,3};
		spawnDamageRange[] = {0,0.6};
		hiddenSelectionsTextures[] = {"Firearms\MCX\data\MCX_Black_co.paa"};
		hiddenSelectionsMaterials[] = {"Firearms\MCX\data\MCX.rvmat"};
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
					onlyWithinOverheatLimits[] = {0,0.2};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot1
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.2,0.6};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot3
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel_heavy";
					onlyWithinOverheatLimits[] = {0.6,1};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.35,0,0};
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
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{2,{"DZ\weapons\firearms\M4\Data\m4_body.rvmat"}},{1,{"DZ\weapons\firearms\M4\Data\m4_body.rvmat"}},{0.7,{"DZ\weapons\firearms\M4\Data\m4_body_damage.rvmat"}},{0.3,{"DZ\weapons\firearms\M4\Data\m4_body_damage.rvmat"}},{0,{"DZ\weapons\firearms\M4\Data\m4_body_destruct.rvmat"}}};
				};
			};
		};
	};
};
class CfgSlots
{
	class Slot_weaponHandguardMCX
	{
		name = "weaponHandguardMCX";
		displayName = "weaponHandguardMCX";
	};
	class Slot_weaponButtstockMCX
	{
		name = "weaponButtstockMCX";
		displayName = "weaponButtstockMCX";
	};
};
