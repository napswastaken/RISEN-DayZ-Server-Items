////////////////////////////////////////////////////////////////////
//DeRap: Nulled_Firearms\gm6_lynx\config.bin
//Produced from mikero's Dos Tools Dll version 8.12
//https://mikero.bytex.digital/Downloads
//'now' is Wed Aug 25 20:20:21 2021 : 'file' last modified on Sun Aug 22 09:59:40 2021
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class NULLED_GM6Lynx
	{
		units[] = {};
		weapons[] = {"NULLED_GM6Lynx"};
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
	class Rifle_Base;
	class NULLED_GM6Lynx_Base: Rifle_Base
	{
		scope = 0;
		weight = 13472;
		absorbency = 0;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30,25};
		PPDOFProperties[] = {};
		initSpeedMultiplier = 1.2;
		ironsightsExcludingOptics[] = {"HuntingOptic"};
		WeaponLength = 1.4478;
		chamberedRound = "";
		chamberSize = 1;
		chamberableFrom[] = {"NULLED_Ammo_127x99"};
		magazines[] = {"Mag_GM6_Lynx_8Rnd"};
		magazineSwitchTime = 0.5;
		ejectType = 1;
		recoilModifier[] = {1.5,3,1};
		swayModifier[] = {0.5,0.5,0.5};
		simpleHiddenSelections[] = {"hide_barrel"};
		drySound[] = {"dz\sounds\weapons\firearms\SKS\SKS_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\svd\svd_reload",1,1,30};
		reloadAction = "ReloadSVD";
		modes[] = {"SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"M82_Shot_SoundSet","SVD_Tail_SoundSet","SVD_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AK_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorHomeMadeTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\akm\Akm_single_0",1,1,900};
			begin2[] = {"dz\sounds\weapons\firearms\akm\Akm_single_1",1,1,900};
			begin3[] = {"dz\sounds\weapons\firearms\akm\Akm_single_2",1,1,900};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			reloadTime = 0.2;
			recoil = "recoil_mp5";
			recoilProne = "recoil_mp5_prone";
			dispersion = 0.001;
			magazineSlot = "magazine";
			beginSilenced_Pro[] = {};
			beginSilenced_HomeMade[] = {};
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {200};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 1000;
		};
	};
	class NULLED_GM6Lynx: NULLED_GM6Lynx_Base
	{
		scope = 2;
		displayName = "GM6 Lynx";
		descriptionShort = "The GM6 'Lynx' is a semi-automatic anti-material rifle. The rifle was designed to be compact, lightweight, accurate, low-recoil, portable and easily deployable for immediate use. Most rifles chambered in .50 BMG are heavy, long, bulky, heavily recoiling and are of a slowly operated bolt action. Many not even magazine fed.";
		model = "Firearms\GM6_Lynx\GM6_Lynx.p3d";
		attachments[] = {"weaponOpticsHunting","weaponWrap"};
		itemSize[] = {9,3};
		hiddenSelectionsTextures[] = {"Firearms\GM6_Lynx\data\GM6_Lynx_co.paa"};
		hiddenSelectionsMaterials[] = {"Firearms\GM6_Lynx\data\GM6_Lynx.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 500;
					healthLevels[] = {{1,{"DZ\weapons\firearms\mosin9130\Data\mosin_9130.rvmat"}},{0.7,{"DZ\weapons\firearms\mosin9130\Data\mosin_9130.rvmat"}},{0.5,{"DZ\weapons\firearms\mosin9130\Data\mosin_9130.rvmat"}},{0.3,{"DZ\weapons\firearms\mosin9130\Data\mosin_9130.rvmat"}},{0,{"DZ\weapons\firearms\mosin9130\Data\mosin_9130.rvmat"}}};
				};
			};
		};
	};
};
