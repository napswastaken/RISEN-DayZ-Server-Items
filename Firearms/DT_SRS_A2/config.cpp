////////////////////////////////////////////////////////////////////
//DeRap: Nulled_Firearms\DT_SRS_A2\config.bin
//Produced from mikero's Dos Tools Dll version 8.12
//https://mikero.bytex.digital/Downloads
//'now' is Wed Aug 25 20:20:20 2021 : 'file' last modified on Sun Aug 22 09:59:40 2021
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DT_SRS_A2
	{
		units[] = {};
		weapons[] = {"NULLED_DT_SRS_A2"};
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
	class BoltActionRifle_Base;
	class NULLED_DT_SRS_A2_Base: BoltActionRifle_Base
	{
		scope = 0;
		animName = "cz527";
		weight = 2720;
		absorbency = 0;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30,25};
		modelOptics = "-";
		initSpeedMultiplier = 1.15;
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		autoReload = 1;
		PPDOFProperties[] = {};
		opticsFlare = 0;
		ironsightsExcludingOptics[] = {"HuntingOptic"};
		WeaponLength = 1.0;
		value = 0;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"NULLED_Ammo_338lm","NULLED_Ammo_338lm_AP"};
		magazines[] = {"NULLED_Mag_SRS_7Rnd","NULLED_Mag_SRS_5Rnd"};
		magazineSwitchTime = 0.38;
		barrelArmor = 900;
		ejectType = 0;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {0.5,0.5,0.5};
		simpleHiddenSelections[] = {"hide_barrel"};
		drySound[] = {"dz\sounds\weapons\firearms\mosin9130\mosin_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\CR527\cz527_reload_0",1,1,20};
		reloadSound[] = {"dz\sounds\weapons\firearms\CR527\cz527_cycling_0",1,1,20};
		reloadAction = "Reloadcz527";
		shotAction = "Reloadcz527Shot";
		hiddenSelections[] = {"camo"};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"R700_Shot_SoundSet","","R700_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"R700_silencer_SoundSet","R700_silencerTailInterior_SoundSet"}};
			begin1[] = {"",1,1,1000};
			begin2[] = {"",1,1,1000};
			begin3[] = {"",1,1,1000};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			beginSilenced_HomeMade[] = {"",1,1,150};
			soundBeginExt[] = {{"beginSilenced_HomeMade",1}};
			reloadTime = 1;
			recoil = "recoil_cz527";
			recoilProne = "recoil_cz527_prone";
			dispersion = 0.001;
			magazineSlot = "magazine";
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
					overrideParticle = "weapon_shot_cz527_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					positionOffset[] = {-0.05,0,0};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 1;
				maxOverheatingValue = 4;
				overheatingDecayInterval = 3;
				class BarrelSmoke
				{
					overrideParticle = "smoking_barrel_small";
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
			distanceZoomMin = 200;
			distanceZoomMax = 200;
			discreteDistance[] = {200};
			discreteDistanceInitIndex = 0;
		};
	};
	class NULLED_DT_SRS_A2: NULLED_DT_SRS_A2_Base
	{
		scope = 2;
		displayName = "Desert Tech SRS A2 338LP - Black";
		descriptionShort = "The Desert Tech Stealth Recon Scout (SRS) is a bolt-action sniper rifle developed by the Utah-based firearm manufacturer Desert Tech (formerly Desert Tactical Arms). It was unveiled at the 2008 SHOT Show. It is known for its bullpup design.";
		model = "Firearms\DT_SRS_A2\DT_SRS_A2.p3d";
		attachments[] = {"weaponWrap","weaponOptics","338_Muzzle"};
		itemSize[] = {9,3};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {};
				};
			};
		};
	};
};
