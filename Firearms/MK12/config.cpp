////////////////////////////////////////////////////////////////////
//DeRap: Nulled_Firearms\MK12\config.bin
//Produced from mikero's Dos Tools Dll version 8.12
//https://mikero.bytex.digital/Downloads
//'now' is Wed Aug 25 20:20:24 2021 : 'file' last modified on Sun Aug 22 09:59:42 2021
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class NULLED_MK12
	{
		units[] = {};
		weapons[] = {"NULLED_MK12"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics"};
		magazines[] = {};
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
	class NULLED_MK12_Base: Rifle_Base
	{
		scope = 0;
		weight = 4250;
		absorbency = 0;
		repairableWithKits[] = {1};
		repairCosts[] = {25};
		PPDOFProperties[] = {};
		ironsightsExcludingOptics[] = {"M4_CarryHandleOptic","BUISOptic","M68Optic","M4_T3NRDSOptic","ReflexOptic","ACOGOptic","HuntingOptic"};
		simpleHiddenSelections[] = {"hide_barrel","folding_lowered","folding_raised"};
		WeaponLength = 0.814784;
		barrelArmor = 2.5;
		initSpeedMultiplier = 0.98588;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_556x45","Ammo_556x45Tracer"};
		magazines[] = {"Mag_STANAG_30Rnd","Mag_STANAGCoupled_30Rnd","Mag_STANAG_60Rnd","Mag_CMAG_10Rnd","Mag_CMAG_20Rnd","Mag_CMAG_30Rnd","Mag_CMAG_40Rnd","Mag_CMAG_10Rnd_Green","Mag_CMAG_20Rnd_Green","Mag_CMAG_30Rnd_Green","Mag_CMAG_40Rnd_Green","Mag_CMAG_10Rnd_Black","Mag_CMAG_20Rnd_Black","Mag_CMAG_30Rnd_Black","Mag_CMAG_40Rnd_Black"};
		magazineSwitchTime = 0.5;
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2,2,1.1};
		drySound[] = {"dz\sounds\weapons\firearms\m4a1\m4_dry",0.5,1,20};
		reloadAction = "ReloadM4";
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\m4a1\m4_reload_0",0.8,1,20};
		hiddenSelections[] = {"buttstock","handguard","receiver","ironsights","grip","handguardcovers","bolt"};
		modes[] = {"SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"M16_Shot_SoundSet","M16_Tail_SoundSet","M16_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M16_silencer_SoundSet","M16_silencerTail_SoundSet","M16_silencerInteriorTail_SoundSet"},{"M16_silencerHomeMade_SoundSet","M16_silencerHomeMadeTail_SoundSet","M16_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.125;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			dispersion = 0.002;
			magazineSlot = "magazine";
		};
		class NoiseShoot
		{
			strength = 82;
			type = "shot";
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
	};
	class NULLED_MK12: NULLED_MK12_Base
	{
		scope = 2;
		displayName = "MK12";
		descriptionShort = "The MK12 (also known as the Special Purpose Rifle) is used by Special Operations Forces of both the U.S. Army and U.S. Navy, is a heavily modified light designated marksman variation of the M16 line of infantry weapons. Chambered in 5.56x45mm NATO rounds.";
		model = "Firearms\MK12\MK12.p3d";
		attachments[] = {"weaponWrap","weaponOptics","weaponOpticsHunting","weaponFlashlight","weaponMuzzleM4","weaponBayonet"};
		itemSize[] = {8,3};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"Firearms\MK12\data\Buttstock.rvmat","Firearms\MK12\data\Handguard.rvmat","Firearms\MK12\data\Receiver.rvmat","Firearms\MK12\data\IronSight.rvmat","Firearms\MK12\data\ReceiverGrip.rvmat","Firearms\MK12\data\HandguardCovers.rvmat","Firearms\MK12\data\ReceiverBolt.rvmat"}},{0.7,{"Firearms\MK12\data\Buttstock.rvmat","Firearms\MK12\data\Handguard.rvmat","Firearms\MK12\data\Receiver.rvmat","Firearms\MK12\data\IronSight.rvmat","Firearms\MK12\data\ReceiverGrip.rvmat","Firearms\MK12\data\HandguardCovers.rvmat","Firearms\MK12\data\ReceiverBolt.rvmat"}},{0.5,{"Firearms\MK12\data\Buttstock_damage.rvmat","Firearms\MK12\data\Handguard_damage.rvmat","Firearms\MK12\data\Receiver_damage.rvmat","Firearms\MK12\data\IronSight_damage.rvmat","Firearms\MK12\data\ReceiverGrip_damage.rvmat","Firearms\MK12\data\HandguardCovers_damage.rvmat","Firearms\MK12\data\ReceiverBolt_damage.rvmat"}},{0.3,{"Firearms\MK12\data\Buttstock_damage.rvmat","Firearms\MK12\data\Handguard_damage.rvmat","Firearms\MK12\data\Receiver_damage.rvmat","Firearms\MK12\data\IronSight_damage.rvmat","Firearms\MK12\data\ReceiverGrip_damage.rvmat","Firearms\MK12\data\HandguardCovers_damage.rvmat","Firearms\MK12\data\ReceiverBolt_damage.rvmat"}},{0.0,{"Firearms\MK12\data\Buttstock_destruct.rvmat","Firearms\MK12\data\Handguard_destruct.rvmat","Firearms\MK12\data\Receiver_destruct.rvmat","Firearms\MK12\data\IronSight_destruct.rvmat","Firearms\MK12\data\ReceiverGrip_damage.rvmat","Firearms\MK12\data\HandguardCovers_destruct.rvmat","Firearms\MK12\data\ReceiverBolt_destruct.rvmat"}}};
				};
			};
		};
	};
};
