////////////////////////////////////////////////////////////////////
//DeRap: Nulled_Firearms\nerf_gun\config.bin
//Produced from mikero's Dos Tools Dll version 8.12
//https://mikero.bytex.digital/Downloads
//'now' is Wed Aug 25 20:20:25 2021 : 'file' last modified on Sun Aug 22 09:59:42 2021
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Nerfgun
	{
		units[] = {};
		weapons[] = {"NULLED_Nerf"};
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
	class Nerf_Base: Rifle_Base
	{
		scope = 0;
		weight = 1746;
		absorbency = 0.0;
		repairableWithKits[] = {};
		repairCosts[] = {};
		PPDOFProperties[] = {};
		ironsightsExcludingOptics[] = {"M4_CarryHandleOptic","BUISOptic","M68Optic","M4_T3NRDSOptic","ReflexOptic","ACOGOptic"};
		WeaponLength = 0.814784;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_NeftRound"};
		magazines[] = {"Mag_Nerf_12Rnd"};
		magazineSwitchTime = 0.5;
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {0.5,0.5,0.5};
		simpleHiddenSelections[] = {"hide_barrel"};
		drySound[] = {"dz\sounds\weapons\firearms\m4a1\m4_dry",0.5,1,20};
		reloadAction = "ReloadM4";
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\m4a1\m4_reload_0",0.8,1,20};
		hiddenSelections[] = {"camo"};
		modes[] = {"SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"Nerf_Shot_SoundSet","",""};
			soundSetShotExt[] = {{"","",""},{"","",""}};
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
			beginSilenced_Pro2[] = {"",1,1,75};
			beginSilenced_HomeMade[] = {"",1,1,150};
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
	class NULLED_Nerf: Nerf_Base
	{
		scope = 2;
		displayName = "Nerf N-Strike Elite Delta Trooper Blaster";
		descriptionShort = "Customize this blaster to defeat the competition! The Nerf N-Strike Elite Delta Trooper comes with a 12-dart clip and 12 Elite darts, so battlers can unleash a dozen darts in a row before it’s time to reload. Load the clip into the blaster, move the slide backward then forward to prime it, and pull the trigger to fire a dart up to 90 feet (27 meters). Want to slam-fire all 12 darts rapidly? Hold down the trigger and keep pumping the slide backward and forward to overwhelm opponents!";
		model = "Firearms\nerf_gun\NerfGun.p3d";
		attachments[] = {"weaponOptics","weaponWrap"};
		itemSize[] = {8,3};
		spawnDamageRange[] = {0.0,0.6};
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\m4\data\m4_body_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\m4\data\m4_body.rvmat"};
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle = "";
				};
				class MuzzleFlash
				{
					overrideParticle = "";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
				};
				class ChamberSmokeBurst
				{
					overrideParticle = "";
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
					overrideParticle = "";
					onlyWithinOverheatLimits[] = {0.0,0.2};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot1
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "";
					onlyWithinOverheatLimits[] = {0.2,0.6};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot3
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "";
					onlyWithinOverheatLimits[] = {0.6,1};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "";
					positionOffset[] = {0.35,0,0};
					onlyWithinOverheatLimits[] = {0,1};
					onlyWithinRainLimits[] = {0.2,1};
				};
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen = 1;
					overrideParticle = "";
					overridePoint = "Nabojnicestart";
				};
			};
			class OnBulletCasingEject
			{
				class ChamberSmokeRaise
				{
					overrideParticle = "";
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
					healthLevels[] = {{1.0,{"DZ\weapons\firearms\M4\Data\m4_body.rvmat"}},{0.7,{"DZ\weapons\firearms\M4\Data\m4_body.rvmat"}},{0.5,{"DZ\weapons\firearms\M4\Data\m4_body_damage.rvmat"}},{0.3,{"DZ\weapons\firearms\M4\Data\m4_body_damage.rvmat"}},{0.0,{"DZ\weapons\firearms\M4\Data\m4_body_destruct.rvmat"}}};
				};
			};
		};
	};
};
