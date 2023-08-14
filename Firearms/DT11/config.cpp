////////////////////////////////////////////////////////////////////
//DeRap: Nulled_Firearms\DT11\config.bin
//Produced from mikero's Dos Tools Dll version 8.12
//https://mikero.bytex.digital/Downloads
//'now' is Wed Aug 25 20:20:20 2021 : 'file' last modified on Sun Aug 22 09:59:39 2021
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DT11
	{
		units[] = {};
		weapons[] = {"NULLED_DT11"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","NULLED_Weapons_Ammunition"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class Muzzle_Base;
class OpticsInfoRifle;
class cfgWeapons
{
	class Rifle_Base;
	class DT11_Base: Rifle_Base
	{
		scope = 0;
		weight = 2820;
		itemSize[] = {9,3};
		absorbency = 0.0;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30.0,25.0};
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_12gaPellets","Ammo_12gaSlug","Ammo_12gaRubberSlug","Ammo_12gaBeanbag"};
		magazines[] = {};
		DisplayMagazine = 0;
		PPDOFProperties[] = {};
		WeaponLength = 0.85;
		muzzles[] = {"this","SecondMuzzle"};
		ejectType = 3;
		recoilModifier[] = {1,1.8,1};
		swayModifier[] = {0.5,0.5,0.5};
		drySound[] = {"dz\sounds\weapons\shotguns\Izh43\izh43_dry",0.5,1,20};
		reloadAction = "ReloadB95";
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\B95\b95_reload2",0.8,1,20};
		reloadSound[] = {"",0.05623413,1,20};
		shotAction = "";
		tooltip = "_text = _this call fnc_generateTooltip;_text";
		hiddenSelections[] = {"camoGround"};
		simpleHiddenSelections[] = {"bullet","bullet2","hide_barrel"};
		modes[] = {"Single","Burst"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"DT11_Shot_SoundSet","B95_Tail_SoundSet","B95_InteriorTail_SoundSet"};
			reloadTime = 0.1;
			dispersion = 0.001;
			magazineSlot = "magazine";
		};
		class Burst: Mode_Burst
		{
			soundSetShot[] = {"DT11_Shot_SoundSet","B95_Tail_SoundSet","B95_InteriorTail_SoundSet"};
			reloadTime = 0.1;
			dispersion = 0.001;
			magazineSlot = "magazine";
		};
		class SecondMuzzle: Muzzle_Base
		{
			chamberSize = 1;
			muzzlePos = "usti hlavne_2";
			muzzleEnd = "konec hlavne_2";
			cartridgePos = "nabojnicestart_2";
			cartridgeVel = "nabojniceend_2";
			modes[] = {"Single","Burst"};
			magazines[] = {};
			chamberableFrom[] = {"Ammo_12gaPellets","Ammo_12gaSlug","Ammo_12gaRubberSlug","Ammo_12gaBeanbag"};
			barrelArmor = 1000.0;
			initSpeedMultiplier = 1.0;
			irDistance = 0.0;
			irLaserPos = "laser pos";
			irLaserEnd = "laser dir";
			drySound[] = {"dz\sounds\weapons\shotguns\Izh43\izh43_dry",0.005623413,1};
			soundBullet[] = {};
			class Single: Mode_SemiAuto
			{
				soundSetShot[] = {"DT11_Shot_SoundSet","B95_Tail_SoundSet","B95_InteriorTail_SoundSet"};
				reloadTime = 0.1;
				dispersion = 0.001;
				magazineSlot = "magazine";
			};
			class Burst: Mode_Burst
			{
				soundSetShot[] = {"DT11_Shot_SoundSet","B95_Tail_SoundSet","B95_InteriorTail_SoundSet"};
				reloadTime = 0.1;
				dispersion = 0.001;
				magazineSlot = "magazine";
			};
			class OpticsInfo: OpticsInfoRifle
			{
				memoryPointCamera = "eye";
				modelOptics = "-";
				distanceZoomMin = 50;
				distanceZoomMax = 200;
				discreteDistance[] = {50,100,200};
				discreteDistanceInitIndex = 0;
			};
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			modelOptics = "-";
			distanceZoomMin = 50;
			distanceZoomMax = 200;
			discreteDistance[] = {50,100,200};
			discreteDistanceInitIndex = 0;
		};
	};
	class NULLED_DT11: DT11_Base
	{
		scope = 2;
		displayName = "Beretta DT11";
		descriptionShort = "The Beretta DT11 is a double barrel shotgun chambered in 12 gauge";
		model = "Firearms\DT11\DT11.p3d";
		attachments[] = {"weaponWrap"};
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\B95\data\b95_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\B95\data\b95.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"DZ\weapons\firearms\B95\Data\b95.rvmat"}},{0.7,{"DZ\weapons\firearms\B95\Data\b95.rvmat"}},{0.5,{"DZ\weapons\firearms\B95\Data\b95_damage.rvmat"}},{0.3,{"DZ\weapons\firearms\B95\Data\b95_damage.rvmat"}},{0.0,{"DZ\weapons\firearms\B95\Data\b95_destruct.rvmat"}}};
				};
			};
		};
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke";
					muzzleIndex = 0;
				};
				class SmokeCloud_2
				{
					overrideParticle = "weapon_shot_winded_smoke";
					overridePoint = "Usti hlavne_2";
					muzzleIndex = 1;
				};
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_winch70_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
				};
				class MuzzleFlash_2
				{
					overrideParticle = "weapon_shot_winch70_01";
					overridePoint = "Usti hlavne_2";
					illuminateWorld = 1;
					muzzleIndex = 1;
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 1;
				maxOverheatingValue = 3;
				overheatingDecayInterval = 4;
				class BarrelSmoke
				{
					overrideParticle = "smoking_barrel_small";
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
};
