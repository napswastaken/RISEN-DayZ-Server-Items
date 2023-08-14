////////////////////////////////////////////////////////////////////
//DeRap: Nulled_Firearms\sr25\config.bin
//Produced from mikero's Dos Tools Dll version 8.12
//https://mikero.bytex.digital/Downloads
//'now' is Wed Aug 25 20:20:30 2021 : 'file' last modified on Sun Aug 22 09:59:43 2021
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class NULLED_SR25
	{
		units[] = {};
		weapons[] = {"NULLED_SR25"};
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
	class Rifle_Base;
	class NULLED_SR25_Base: Rifle_Base
	{
		scope = 0;
		weight = 3700;
		absorbency = 0;
		repairableWithKits[] = {5,1};
		initSpeedMultiplier = 1.0;
		repairCosts[] = {30,25};
		PPDOFProperties[] = {};
		ironsightsExcludingOptics[] = {"M4_CarryHandleOptic","BUISOptic","M68Optic","M4_T3NRDSOptic","ReflexOptic","ACOGOptic"};
		WeaponLength = 0.814784;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_308Win"};
		magazines[] = {"mag_SR25_20Rnd"};
		magazineSwitchTime = 0.5;
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {0.5,0.5,0.5};
		simpleHiddenSelections[] = {"hide_barrel","camogrip","camohandguard","camoreceiver","camostock","camosight","zasleh"};
		drySound[] = {"dz\sounds\weapons\firearms\m4a1\m4_dry",0.5,1,20};
		reloadAction = "ReloadFal";
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\m4a1\m4_reload_0",0.8,1,20};
		hiddenSelections[] = {"camo"};
		modes[] = {"SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"NULLED_AR15_Shot_SoundSet","","FNFAL_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"NULLED_AR15_silencer_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorHomeMadeTail_SoundSet"}};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			reloadTime = 0.085714;
			recoil = "recoil_fal";
			recoilProne = "recoil_fal_prone";
			dispersion = 0.0;
			magazineSlot = "magazine";
			soundBeginExt[] = {{"beginSilenced_Pro1",0.5,"beginSilenced_Pro2",0.5},{"beginSilenced_HomeMade",1}};
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
	};
	class NULLED_SR25: NULLED_SR25_Base
	{
		scope = 2;
		displayName = "Knight's Armament Company SR-25";
		descriptionShort = "The SR-25 Precision Rifle is the latest evolution of the precision 7.62mm NATO semi-automatic rifle. An ambidextrous bolt release, selector, and magazine release offers the left-handed user the ergonomic advantages inherent to AR15 based controls, as well as giving right-handed users alternate methods of manipulation to increase efficiency of movement. The Drop-In 2-Stage Trigger serves as an aid to long range precision marksmanship. The E2 bolt and gas system provides superior reliability in function whether suppressed or unsuppressed.";
		model = "Firearms\SR25\SR25.p3d";
		hiddenSelectionsTextures[] = {"Firearms\SR25\data\SR25_co.paa"};
		hiddenSelectionsMaterials[] = {"Firearms\SR25\data\SR25.rvmat"};
		attachments[] = {"weaponOptics","weaponFlashlight","weaponOpticsHunting","weaponWrap","weaponMuzzleM4"};
		itemSize[] = {8,3};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1,{"DZ\weapons\firearms\fal\Data\fal.rvmat"}},{0.7,{"DZ\weapons\firearms\fal\Data\fal.rvmat"}},{0.5,{"DZ\weapons\firearms\fal\Data\fal_damage.rvmat"}},{0.3,{"DZ\weapons\firearms\fal\Data\fal_damage.rvmat"}},{0,{"DZ\weapons\firearms\fal\Data\fal_destruct.rvmat"}}};
				};
			};
		};
	};
};
