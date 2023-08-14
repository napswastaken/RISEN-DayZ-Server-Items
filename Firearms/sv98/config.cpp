////////////////////////////////////////////////////////////////////
//DeRap: Nulled_Firearms\sv98\config.bin
//Produced from mikero's Dos Tools Dll version 8.12
//https://mikero.bytex.digital/Downloads
//'now' is Wed Aug 25 20:20:30 2021 : 'file' last modified on Sun Aug 22 09:59:43 2021
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class SV98
	{
		units[] = {};
		weapons[] = {"NULLED_SV98"};
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
	class NULLED_SV98_Base: BoltActionRifle_Base
	{
		scope = 0;
		animName = "cz527";
		weight = 2720;
		absorbency = 0;
		initSpeedMultiplier = 1.15;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30,25};
		modelOptics = "-";
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
		chamberableFrom[] = {"Ammo_762x54","Ammo_762x54Tracer"};
		magazines[] = {"Mag_SV98_10Rnd"};
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
			soundSetShot[] = {"SV98_Shot_SoundSet","","SV98_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"SV98_silencer_SoundSet","SV98_silencerTailInterior_SoundSet"}};
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
	class NULLED_SV98: NULLED_SV98_Base
	{
		scope = 2;
		displayName = "SV-98 bolt-action sniper rifle";
		descriptionShort = "SV-98 is a Russian sniper rifle developed in 1998-2000 by a group of weapon engineers led by V.Stronskly. Serially produced by IzhMash group. It is a magazine-fed bolt-action rifle, designed to engage military personnel at distances of up to 1000 m.";
		model = "Firearms\SV98\SV98.p3d";
		attachments[] = {"weaponWrap","weaponOptics","weaponMuzzleAK"};
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
