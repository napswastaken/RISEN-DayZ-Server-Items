////////////////////////////////////////////////////////////////////
//DeRap: Nulled_Firearms\HK417\config.bin
//Produced from mikero's Dos Tools Dll version 8.12
//https://mikero.bytex.digital/Downloads
//'now' is Wed Aug 25 20:20:21 2021 : 'file' last modified on Sun Aug 22 09:59:40 2021
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class NULLED_HK417
	{
		units[] = {"HKG28_Bttstck"};
		weapons[] = {"NULLED_HK417"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Firearms","DZ_Sounds_Effects","DZ_Weapons_Magazines"};
		magazines[] = {"NULLED_Mag_HK417_20rnd"};
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
	class NULLED_HK417_Base: Rifle_Base
	{
		scope = 0;
		displayName = "HK417";
		descriptionShort = "German automatic rifle, based on the HK416. Fed from detachable magazines with .308 Win rounds.";
		weight = 4300;
		model = "Firearms\HK417\417.p3d";
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {30.0,25.0};
		PPDOFProperties[] = {};
		initSpeedMultiplier = 1.0;
		WeaponLength = 1.0;
		barrelArmor = 5.5;
		attachments[] = {"weaponButtstockM4","weaponWrap","weaponOptics","weaponFlashlight","suppressorImpro","weaponMuzzleM4"};
		itemSize[] = {9,3};
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_308Win","Ammo_308WinTracer"};
		magazines[] = {"NULLED_Mag_HK417_20rnd"};
		ejectType = 1;
		recoilModifier[] = {1.2,1.2,1.2};
		swayModifier[] = {0.5,0.5,0.5};
		simpleHiddenSelections[] = {"hide_barrel","hide_ironsights"};
		hiddenSelections[] = {"color1","color2","color3"};
		modes[] = {"FullAuto","SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"HK417_Shot_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"SKS_silencerHomeMade_SoundSet","SKS_silencerHomeMadeTail_SoundSet","SKS_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.1;
			dispersion = 0.0009;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"HK417_Shot_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"SKS_silencerHomeMade_SoundSet","SKS_silencerHomeMadeTail_SoundSet","SKS_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.075;
			dispersion = 0.0009;
			magazineSlot = "magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 1000;
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
				class ChamberSmokeBurst
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
					overrideDirectionPoint = "Nabojniceend";
				};
			};
			class OnOverheating
			{
				maxOverheatingValue = 25;
				shotsToStartOverheating = 10;
				overheatingDecayInterval = 1;
				class SmokingBarrel1
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0.0,0.2};
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
					hitpoints = 300;
					healthLevels[] = {{1.0,{"Firearms\HK417\data\front.rvmat","Firearms\HK417\data\rear.rvmat","Firearms\HK417\data\stock.rvmat","Firearms\HK417\data\flashhider.rvmat","Firearms\HK417\data\ironsights.rvmat"}},{0.7,{"Firearms\HK417\data\front.rvmat","Firearms\HK417\data\rear.rvmat","Firearms\HK417\data\stock.rvmat","Firearms\HK417\data\flashhider.rvmat","Firearms\HK417\data\ironsights.rvmat"}},{0.5,{"Firearms\HK417\data\front_damage.rvmat","Firearms\HK417\data\rear_damage.rvmat","Firearms\HK417\data\stock_damage.rvmat","Firearms\HK417\data\flashhider_damage.rvmat","Firearms\HK417\data\ironsights_damage.rvmat"}},{0.3,{"Firearms\HK417\data\front_damage.rvmat","Firearms\HK417\data\rear_damage.rvmat","Firearms\HK417\data\stock_damage.rvmat","Firearms\HK417\data\flashhider_damage.rvmat","Firearms\HK417\data\ironsights_damage.rvmat"}},{0.0,{"Firearms\HK417\data\front_destruct.rvmat","Firearms\HK417\data\rear_destruct.rvmat","Firearms\HK417\data\stock_destruct.rvmat","Firearms\HK417\data\flashhider_destruct.rvmat","Firearms\HK417\data\ironsights_destruct.rvmat"}}};
				};
			};
		};
	};
	class NULLED_HK417: NULLED_HK417_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"Firearms\HK417\data\front_co.paa","Firearms\HK417\data\rear_co.paa","Firearms\HK417\data\stock_co.paa"};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class HKG28_Bttstck: Inventory_Base
	{
		scope = 2;
		displayName = "HK G28 Buttstock";
		descriptionShort = "HK G28 Fully Adjustable Stock For The MR762 & HK 417";
		model = "Firearms\HK417\417_stock.p3d";
		rotationFlags = 17;
		reversed = 0;
		inventorySlot[] = {"weaponButtstockM4"};
		weight = 530;
		itemSize[] = {3,1};
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {1,1,1};
		dispersionModifier = -0.0002;
		dispersionCondition = "true";
		hiddenSelections[] = {"zybtek","camo"};
		hiddenSelectionsMaterials[] = {""};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\support\data\FAL_stock_oe.rvmat"}},{0.6,{"DZ\weapons\attachments\support\data\FAL_stock_oe.rvmat"}},{0.5,{"DZ\weapons\attachments\support\data\FAL_stock_oe_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\support\data\FAL_stock_oe_damage.rvmat"}},{0.0,{"DZ\weapons\attachments\support\data\FAL_stock_oe_destruct.rvmat"}}};
				};
			};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
};
class cfgMagazines
{
	class Magazine_Base;
	class NULLED_Mag_HK417_20rnd: Magazine_Base
	{
		scope = 2;
		displayName = "20rd HK417 Mag";
		descriptionShort = "Detachable box magazine for HK417 rifle. Holds up to 20 rounds of .308 Win.";
		model = "Firearms\HK417\417_mag.p3d";
		weight = 70;
		itemSize[] = {1,2};
		count = 20;
		ammo = "Bullet_308Win";
		ammoItems[] = {"Ammo_308Win","Ammo_308WinTracer"};
		tracersEvery = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"Firearms\HK417\data\mag.rvmat"}},{0.7,{"Firearms\HK417\data\mag.rvmat"}},{0.5,{"Firearms\HK417\data\mag_damage.rvmat"}},{0.3,{"Firearms\HK417\data\mag_damage.rvmat"}},{0.0,{"Firearms\HK417\data\mag_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class MagRifle_fill_in
				{
					soundSet = "MagRifle_fill_in_SoundSet";
					id = 1;
				};
				class MagRifle_fill_loop
				{
					soundSet = "MagRifle_fill_loop_SoundSet";
					id = 2;
				};
				class MagRifle_fill_out
				{
					soundSet = "MagRifle_fill_out_SoundSet";
					id = 3;
				};
				class MagRifle_empty_in
				{
					soundSet = "MagRifle_empty_in_SoundSet";
					id = 4;
				};
				class MagRifle_empty_loop
				{
					soundSet = "MagRifle_empty_loop_SoundSet";
					id = 5;
				};
				class MagRifle_empty_out
				{
					soundSet = "MagRifle_empty_out_SoundSet";
					id = 6;
				};
				class MagPistol_fill_in
				{
					soundSet = "MagPistol_fill_in_SoundSet";
					id = 7;
				};
				class MagPistol_fill_loop
				{
					soundSet = "MagPistol_fill_loop_SoundSet";
					id = 8;
				};
				class MagPistol_fill_out
				{
					soundSet = "MagPistol_fill_out_SoundSet";
					id = 9;
				};
				class MagPistol_empty_in
				{
					soundSet = "MagPistol_empty_in_SoundSet";
					id = 10;
				};
				class MagPistol_empty_loop
				{
					soundSet = "MagPistol_empty_loop_SoundSet";
					id = 11;
				};
				class MagPistol_empty_out
				{
					soundSet = "MagPistol_empty_out_SoundSet";
					id = 12;
				};
			};
		};
	};
};
class CfgSoundShaders
{
	class base_closeShot_SoundShader;
	class base_midShot_SoundShader;
	class base_distShot_SoundShader;
	class HK417_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"Firearms\HK417\sound\417_close",1}};
		volume = 1.0;
	};
	class HK417_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"Firearms\HK417\sound\417_mid",1}};
		volume = 0.8;
	};
	class HK417_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"Firearms\HK417\sound\417_far",1}};
		volume = 0.6;
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class HK417_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"HK417_closeShot_SoundShader","HK417_midShot_SoundShader","HK417_distShot_SoundShader"};
	};
};
