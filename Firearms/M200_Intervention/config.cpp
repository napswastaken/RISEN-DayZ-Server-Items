////////////////////////////////////////////////////////////////////
//DeRap: Nulled_Firearms\M200_Intervention\config.bin
//Produced from mikero's Dos Tools Dll version 8.12
//https://mikero.bytex.digital/Downloads
//'now' is Wed Aug 25 20:20:23 2021 : 'file' last modified on Sun Aug 22 09:59:41 2021
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class M200_Intervention
	{
		units[] = {};
		weapons[] = {"NULLED_M200_Intervention"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","NULLED_Weapons_Ammunition","NULLED_Weapons_Muzzles"};
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
	class NULLED_M200_Intervention_Base: BoltActionRifle_Base
	{
		scope = 0;
		animName = "CZ527";
		weight = 4320;
		absorbency = 0;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30,25};
		modelOptics = "-";
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		PPDOFProperties[] = {};
		initSpeedMultiplier = 1.2;
		opticsFlare = 0;
		ironsightsExcludingOptics[] = {"HuntingOptic"};
		WeaponLength = 1.4;
		value = 0;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"NULLED_Ammo_408"};
		magazines[] = {"NULLED_Mag_m200_7Rnd"};
		magazineSwitchTime = 0.5;
		barrelArmor = 1000;
		ejectType = 0;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {0.5,0.5,0.5};
		simpleHiddenSelections[] = {"hide_barrel"};
		drySound[] = {"dz\sounds\weapons\firearms\mosin9130\mosin_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\CR527\cz527_reload_0",1,1,20};
		reloadSound[] = {"dz\sounds\weapons\firearms\CR527\cz527_cycling_0",1,1,20};
		reloadAction = "Reloadsvd";
		shotAction = "ReloadsvdShot";
		hiddenSelections[] = {"camo"};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"NULLED_M200_Shot_SoundSet","","R700_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"NULLED_M200_silencer_SoundSet","","R700_silencerTailInterior_SoundSet"}};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			soundBeginExt[] = {{"beginSilenced_HomeMade",1}};
			reloadTime = 1;
			recoil = "recoil_svd";
			recoilProne = "recoil_svd_prone";
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
					overrideParticle = "weapon_shot_svd_01";
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
	class NULLED_M200_Intervention: NULLED_M200_Intervention_Base
	{
		scope = 2;
		displayName = "CheyTac M200 Intervention";
		descriptionShort = "The CheyTac Intervention is an American bolt-action sniper rifle manufactured by CheyTac LLC, which can also be classified as an anti-materiel rifle. It is fed by a 7-round detachable single-stack magazine. It is specifically chambered in either .408 Chey";
		model = "Firearms\M200_Intervention\M200_Intervention.p3d";
		attachments[] = {"weaponWrap","weaponOptics","408Muzzle"};
		itemSize[] = {9,3};
		hiddenSelectionsTextures[] = {"Firearms\M200_Intervention\data\M200_co.paa"};
		hiddenSelectionsMaterials[] = {"Firearms\M200_Intervention\data\M200_Intervention.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1,{"Firearms\M200_Intervention\data\M200_Intervention.rvmat"}},{0.7,{"Firearms\M200_Intervention\data\M200_Intervention.rvmat"}},{0.5,{"Firearms\M200_Intervention\data\M200_Intervention_damage.rvmat"}},{0.3,{"Firearms\M200_Intervention\data\M200_Intervention_damage.rvmat"}},{0,{"Firearms\M200_Intervention\data\M200_Intervention_destruct.rvmat"}}};
				};
			};
		};
	};
};
class CfgSlots
{
	class Slot_408Muzzle
	{
		name = "408Muzzle";
		displayName = "408Muzzle";
	};
};
