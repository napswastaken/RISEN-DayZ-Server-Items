////////////////////////////////////////////////////////////////////
//DeRap: SR1MP\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Mon Aug 14 16:31:28 2023 : 'file' last modified on Mon Aug 14 16:31:28 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DZ_Pistols_1911
	{
		units[] = {};
		weapons[] = {"NULLED_SR1MP"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Pistols"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoPistol;
class cfgWeapons
{
	class Colt1911;
	class NULLED_SR1MP_Base: Colt1911
	{
		scope = 0;
		weight = 1106;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {1,0.9,10,250,4,10};
		WeaponLength = 0.634148;
		barrelArmor = 1.523;
		chamberSize = 1;
		chamberedRound = "";
		magazines[] = {"Mag_1911_7Rnd"};
		chamberableFrom[] = {"Ammo_45ACP"};
		magazineSwitchTime = 0.24;
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.3,1.3,0.8};
		drySound[] = {"dz\sounds\weapons\firearms\colt1911\Colt1911_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\colt1911\Colt1911_reload",0.8,1,20};
		hiddenSelections[] = {"camoGround"};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"Colt1911_Shot_SoundSet","Colt1911_Tail_SoundSet","Colt1911_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"Colt1911_silencerPro_SoundSet","Colt1911_silencerTail_SoundSet","Colt1911_silencerInteriorTail_SoundSet"}};
			begin1[] = {};
			begin2[] = {};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			reloadTime = 0.13;
			recoil = "recoil_1911";
			recoilProne = "recoil_1911_prone";
			dispersion = 0.0065;
			magazineSlot = "magazine";
			beginSilenced_Pro[] = {};
			beginSilenced_HomeMade[] = {};
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
		};
		class OpticsInfo: OpticsInfoPistol
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {25};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlashForward
				{
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					overrideParticle = "weapon_shot_fnx_01";
				};
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke_small";
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 1;
				maxOverheatingValue = 7;
				overheatingDecayInterval = 1;
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
	class NULLED_SR1MP: NULLED_SR1MP_Base
	{
		scope = 2;
		displayName = "SR1MP Gyurza";
		descriptionShort = "The Serdyukov semi-automatic pistol - also known as SPS and Gyurza (“Viper”), GRAU Index 6P53. Pistol designed for the Russian Federation special forces purposes by P. Serdyukov and I. Belyaev, for 9x21 mm cartridge.";
		hiddenSelections[] = {"camoGround"};
		model = "Pistols\SR1MP\SR1MP.p3d";
		attachments[] = {};
		itemSize[] = {3,2};
		hiddenSelectionsTextures[] = {"Pistols\SR1MP\data\SR1M_co.paa"};
		hiddenSelectionsMaterials[] = {"Pistols\SR1MP\data\SR1M.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"DZ\weapons\pistols\1911\data\1911.rvmat"}},{0.7,{"DZ\weapons\pistols\1911\data\1911.rvmat"}},{0.5,{"DZ\weapons\pistols\1911\data\1911_damage.rvmat"}},{0.3,{"DZ\weapons\pistols\1911\data\1911_damage.rvmat"}},{0.0,{"DZ\weapons\pistols\1911\data\1911_destruct.rvmat"}}};
				};
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxySR1MP: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "pistol";
		model = "Pistols\SR1MP\SR1MP.p3d";
	};
};
