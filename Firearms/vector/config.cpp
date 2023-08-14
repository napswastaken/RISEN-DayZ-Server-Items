////////////////////////////////////////////////////////////////////
//DeRap: Nulled_Firearms\vector\config.bin
//Produced from mikero's Dos Tools Dll version 8.12
//https://mikero.bytex.digital/Downloads
//'now' is Wed Aug 25 20:20:31 2021 : 'file' last modified on Sun Aug 22 09:59:44 2021
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Vector
	{
		units[] = {};
		weapons[] = {"NULLED_Vector"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms"};
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
	class NULLED_Vector_Base: Rifle_Base
	{
		scope = 0;
		weight = 2200;
		absorbency = 0;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30,25};
		PPDOFProperties[] = {};
		simpleHiddenSelections[] = {"hide_barrel","folding_raised","folding_lowered"};
		ironsightsExcludingOptics[] = {"M4_CarryHandleOptic","BUISOptic","M68Optic","M4_T3NRDSOptic","ReflexOptic"};
		WeaponLength = 0.64353;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_45ACP"};
		magazines[] = {"Mag_Vector_30Rnd","Mag_Vector_13Rnd"};
		magazineSwitchTime = 0.45;
		ejectType = 1;
		recoilModifier[] = {0.7,0.6,0.7};
		swayModifier[] = {0.5,0.5,0.5};
		drySound[] = {"DZ\sounds\weapons\firearms\ump45\UMP45_dry",0.5,1,20};
		reloadMagazineSound[] = {"",0.8,1,30};
		reloadAction = "ReloadUMP";
		hiddenSelections[] = {"camo"};
		modes[] = {"FullAuto","SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"UMP45_Shot_SoundSet","UMP45_Tail_SoundSet","UMP45_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"UMP45_silencerPro_SoundSet","UMP45_silencerTail_SoundSet","UMP45_silencerInteriorTail_SoundSet"},{"UMP45_silencerHomeMade_SoundSet","UMP45_silencerHomeMadeTail_SoundSet","UMP45_silencerInteriorHomeMadeTail_SoundSet"}};
			begin1[] = {"",1,1,700};
			begin2[] = {"",1,1,700};
			begin3[] = {"",1,1,700};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			reloadTime = 0.05;
			recoil = "Vector";
			recoilProne = "Vector";
			dispersion = 0.003;
			magazineSlot = "magazine";
			beginSilenced_Pro[] = {"",1,1,75};
			beginSilenced_HomeMade[] = {"",1,1,100};
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"UMP45_Shot_SoundSet","UMP45_Tail_SoundSet","UMP45_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"UMP45_silencerPro_SoundSet","UMP45_silencerTail_SoundSet","UMP45_silencerInteriorTail_SoundSet"},{"UMP45_silencerHomeMade_SoundSet","UMP45_silencerHomeMadeTail_SoundSet","UMP45_silencerInteriorHomeMadeTail_SoundSet"}};
			begin1[] = {"",1,1,700};
			begin2[] = {"",1,1,700};
			begin3[] = {"",1,1,700};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			reloadTime = 0.054545;
			recoil = "VectorRecoil";
			recoilProne = "VectorRecoil";
			dispersion = 0.003;
			magazineSlot = "magazine";
			beginSilenced_Pro[] = {"",1,1,75};
			beginSilenced_HomeMade[] = {"",1,1,100};
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_ump45_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
				};
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke_small";
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
				shotsToStartOverheating = 5;
				maxOverheatingValue = 20;
				overheatingDecayInterval = 1;
				class SmokingBarrel1
				{
					ignoreIfSuppressed = 1;
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0,0.3};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot1
				{
					ignoreIfSuppressed = 1;
					overrideParticle = "smoking_barrel";
					positionOffset[] = {0.1,0,0};
					onlyWithinOverheatLimits[] = {0.3,0.9};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot2
				{
					ignoreIfSuppressed = 1;
					overrideParticle = "smoking_barrel_heavy";
					positionOffset[] = {0.1,0,0};
					onlyWithinOverheatLimits[] = {0.9,1};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.1,0.05,0};
					onlyWithinOverheatLimits[] = {0,0.5};
					onlyWithinRainLimits[] = {0.2,1};
				};
				class SmokingBarrelHotSteam2
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.13,0.05,0};
					onlyWithinOverheatLimits[] = {0.5,1};
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
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
			discreteDistance[] = {25};
			discreteDistanceInitIndex = 0;
		};
	};
	class NULLED_Vector: NULLED_Vector_Base
	{
		scope = 2;
		displayName = "TDI KRISS Vector Gen.2 .45 ACP submachinegun";
		descriptionShort = "The KRISS Vector SMG is the ideal choice for law enforcement and military seeking a controllable, compact, weapon system for close quarter combat environments. The low bore axis and Super V recoil mitigation system allow for the most controllable select-fire operation, or fast semi-automatic follow up shots.";
		model = "Firearms\Vector\Vector.p3d";
		attachments[] = {"weaponWrap","weaponOptics","weaponFlashlight","pistolMuzzle"};
		itemSize[] = {6,3};
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\UMP45\data\ump45_co.paa"};
		hiddenSelectionsMaterials[] = {"DZ\weapons\firearms\UMP45\data\ump45.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1,{"DZ\weapons\firearms\UMP45\data\ump45.rvmat"}},{0.7,{"DZ\weapons\firearms\UMP45\data\ump45.rvmat"}},{0.5,{"DZ\weapons\firearms\UMP45\data\ump45_damage.rvmat"}},{0.3,{"DZ\weapons\firearms\UMP45\data\ump45_damage.rvmat"}},{0,{"DZ\weapons\firearms\UMP45\data\ump45_destruct.rvmat"}}};
				};
			};
		};
	};
};
