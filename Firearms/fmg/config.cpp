////////////////////////////////////////////////////////////////////
//DeRap: Nulled_Firearms\fmg\config.bin
//Produced from mikero's Dos Tools Dll version 8.12
//https://mikero.bytex.digital/Downloads
//'now' is Wed Aug 25 20:20:21 2021 : 'file' last modified on Sun Aug 22 09:59:40 2021
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class NULLED_FMG
	{
		units[] = {};
		weapons[] = {"NULLED_FMG"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","NULLED_Weapons_Ammunition"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class CfgWeapons
{
	class CZ61;
	class NULLED_FMG_Base: CZ61
	{
		scope = 0;
		weight = 1280;
		absorbency = 0.0;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30.0,25.0};
		PPDOFProperties[] = {};
		initSpeedMultiplier = 0.9;
		WeaponLength = 0.541088;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_9x19"};
		magazines[] = {"Mag_Glock_15Rnd","Mag_Glock_21Rnd","Mag_Glock19_15Rnd"};
		magazineSwitchTime = 0.3;
		barrelArmor = 800;
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {0.5,0.5,0.5};
		drySound[] = {"dz\sounds\weapons\firearms\m4a1\m4_dry",0.5,1,20};
		reloadAction = "ReloadCZ61";
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\pm63rak\pm63rak_reload_0mod",0.8,1,20};
		hiddenSelections[] = {"camo"};
		modes[] = {"FullAuto","SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"P90_Shot_SoundSet","CZ61_Tail_SoundSet","CZ61_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"P90_silencer_SoundSet","CZ61_silencerTail_SoundSet","CZ61_silencerInteriorTail_SoundSet"},{"CZ61_silencerHomeMade_SoundSet","CZ61_silencerHomeMadeTail_SoundSet","CZ61_silencerInteriorHomeMadeTail_SoundSet"}};
			begin1[] = {"",0.7,1,900};
			begin2[] = {"",0.7,1,900};
			begin3[] = {"",0.7,1,900};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			beginSilenced_Pro[] = {"",1,1,200};
			beginSilenced_HomeMade[] = {"",1,1,300};
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
			reloadTime = 0.066667;
			recoil = "recoil_cz61";
			recoilProne = "recoil_cz61_prone";
			dispersion = 0.003;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"P90_Shot_SoundSet","CZ61_Tail_SoundSet","CZ61_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"P90_silencer_SoundSet","CZ61_silencerTail_SoundSet","CZ61_silencerInteriorTail_SoundSet"},{"CZ61_silencerHomeMade_SoundSet","CZ61_silencerHomeMadeTail_SoundSet","CZ61_silencerInteriorHomeMadeTail_SoundSet"}};
			begin1[] = {"",0.7,1,900};
			begin2[] = {"",0.7,1,900};
			begin3[] = {"",0.7,1,900};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			beginSilenced_Pro[] = {"",1,1,200};
			beginSilenced_HomeMade[] = {"",1,1,300};
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
			reloadTime = 0.05;
			recoil = "recoil_cz61";
			recoilProne = "recoil_cz61_prone";
			dispersion = 0.003;
			magazineSlot = "magazine";
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_cz61_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
				};
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke_small";
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 3;
				maxOverheatingValue = 10;
				overheatingDecayInterval = 1;
				class SmokingBarrel
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0.0,0.5};
					onlyWithinRainLimits[] = {0,0.2};
					ignoreIfSuppressed = 1;
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.1,0.02,0};
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
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {100};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
		};
	};
	class NULLED_FMG: NULLED_FMG_Base
	{
		scope = 2;
		displayName = "Magpul FMG-9";
		descriptionShort = "The Magpul FMG-9 is a prototype for a new generation of folding submachine guns, designed by Magpul Industries in 2008. Like other folding machine guns, it would be used for concealed carry and can be disguised as anything from a small package to an extra laptop battery.";
		model = "Firearms\FMG\FMG.p3d";
		attachments[] = {"pistolMuzzle","weaponWrap"};
		itemSize[] = {4,3};
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\cz61\data\cz61_main_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\cz61\data\cz61.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"DZ\weapons\firearms\cz61\data\cz61.rvmat"}},{0.7,{"DZ\weapons\firearms\cz61\data\cz61.rvmat"}},{0.5,{"DZ\weapons\firearms\cz61\data\cz61_damage.rvmat"}},{0.3,{"DZ\weapons\firearms\cz61\data\cz61_damage.rvmat"}},{0.0,{"DZ\weapons\firearms\cz61\data\cz61_destruct.rvmat"}}};
				};
			};
		};
	};
};
