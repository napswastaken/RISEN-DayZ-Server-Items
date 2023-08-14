////////////////////////////////////////////////////////////////////
//DeRap: Nulled_Firearms\m300_praetorian_composite\config.bin
//Produced from mikero's Dos Tools Dll version 8.12
//https://mikero.bytex.digital/Downloads
//'now' is Wed Aug 25 20:20:23 2021 : 'file' last modified on Sun Aug 22 09:59:41 2021
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class NULLED_M300_Praetorian_Composite
	{
		units[] = {};
		weapons[] = {"NULLED_M300"};
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
	class NULLED_M300_Base: BoltActionRifle_Base
	{
		scope = 0;
		animName = "CZ527";
		weight = 3621;
		absorbency = 0;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30,25};
		modelOptics = "-";
		initSpeedMultiplier = 1.2;
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		PPDOFProperties[] = {};
		opticsFlare = 0;
		ironsightsExcludingOptics[] = {"HuntingOptic"};
		WeaponLength = 0.934214;
		value = 0;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"NULLED_Ammo_408"};
		magazines[] = {"Mag_M300_7Rnd"};
		magazineSwitchTime = 0.38;
		barrelArmor = 900;
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
			soundSetShot[] = {"NULLED_M200_Shot_SoundSet","CR527_Tail_SoundSet","CR527_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"NULLED_M200_silencer_SoundSet","CR527_Tail_SoundSet","CR527_InteriorTail_SoundSet"}};
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
	class NULLED_M300: NULLED_M300_Base
	{
		scope = 2;
		displayName = "CheyTac M300 Praetorian Composite";
		descriptionShort = "The CheyTac M300 Intervention (Carbon Fiber) is a modern rendition of the M200 Intervention. CheyTac utilized lightweight materials such as aluminum and carbon fiber to achieve a lightweight portable sniper rifle that doesn't compromise on strength, accuracy, or agility.";
		model = "Firearms\M300_Praetorian_Composite\M300_Praetorian_Composite.p3d";
		attachments[] = {"weaponOpticsHunting","weaponWrap","weaponOptics","50Muzzle"};
		itemSize[] = {9,3};
		hiddenSelectionsTextures[] = {"Firearms\M300_Praetorian_Composite\data\m300_co.paa"};
		hiddenSelectionsMaterials[] = {"Firearms\M300_Praetorian_Composite\data\m300.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1,{"DZ\weapons\firearms\mosin9130\Data\mosin_9130.rvmat"}},{0.7,{"DZ\weapons\firearms\mosin9130\Data\mosin_9130.rvmat"}},{0.5,{"DZ\weapons\firearms\mosin9130\Data\mosin_9130.rvmat"}},{0.3,{"DZ\weapons\firearms\mosin9130\Data\mosin_9130.rvmat"}},{0,{"DZ\weapons\firearms\mosin9130\Data\mosin_9130.rvmat"}}};
				};
			};
		};
	};
};
