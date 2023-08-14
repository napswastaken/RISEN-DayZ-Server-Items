////////////////////////////////////////////////////////////////////
//DeRap: Nulled_Firearms\ks23\config.bin
//Produced from mikero's Dos Tools Dll version 8.12
//https://mikero.bytex.digital/Downloads
//'now' is Wed Aug 25 20:20:22 2021 : 'file' last modified on Sun Aug 22 09:59:40 2021
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class KS23
	{
		units[] = {};
		weapons[] = {"NULLED_KS23M","Mp133Shotgun_PistolGrip"};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Sounds_Weapons","NULLED_Weapons_Ammunition"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoShotgun;
class cfgWeapons
{
	class Mp133Shotgun_Base;
	class NULLED_KS23_Base: Mp133Shotgun_Base
	{
		scope = 0;
		absorbency = 0;
		repairableWithKits[] = {1};
		repairCosts[] = {25};
		chamberSize = 4;
		chamberedRound = "";
		chamberableFrom[] = {"NULLED_Ammo_23x75_Shrap10","NULLED_Ammo_23x75_Shrap25","NULLED_Ammo_23x75_Star","NULLED_Ammo_23x75_Barricade"};
		magazines[] = {};
		DisplayMagazine = 0;
		PPDOFProperties[] = {};
		WeaponLength = 0.875;
		barrelArmor = 2.25;
		ejectType = 0;
		recoilModifier[] = {1.5,2.5,1.5};
		swayModifier[] = {0.5,0.5,0.5};
		cartridgeCreateTime[] = {0.55,0.82};
		reloadSkips[] = {0.26,0.4,0.53,0.64,0.735};
		drySound[] = {"dz\sounds\weapons\shotguns\Izh43\izh43_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\shotguns\mp133\mp133_reload_0",0.8,1,20};
		reloadSound[] = {"dz\sounds\weapons\shotguns\mp133\mp133_pump_0",1,1,20};
		reloadAction = "ReloadMP133";
		shotAction = "ReloadMP133Shot";
		hiddenSelections[] = {"camo"};
		modes[] = {"Single"};
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke";
				};
				class SmokeCloud2
				{
					overrideParticle = "weapon_shot_winded_smoke";
				};
				class SmokeCloud3BadlyDamaged
				{
					overrideParticle = "weapon_shot_winded_smoke";
					onlyWithinHealthLabel[] = {3,4};
				};
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_mp133_01";
					illuminateWorld = 1;
				};
				class BadlyDamagedChamberSmoke
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
					overrideDirectionPoint = "Nabojniceend";
					onlyWithinHealthLabel[] = {3,4};
				};
				class BadlyDamagedChamberSmokeRaise
				{
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "Nabojnicestart";
					onlyWithinHealthLabel[] = {3,4};
				};
			};
			class OnOverheating
			{
				maxOverheatingValue = 4;
				shotsToStartOverheating = 1;
				overheatingDecayInterval = 3;
				class SmokingBarrel
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
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"KS23_Shot_SoundSet","","KS23_InteriorTail_SoundSet"};
			begin1[] = {"",1,1,800};
			begin2[] = {"",1,1,800};
			begin3[] = {"",1,1,800};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			reloadTime = 1;
			recoil = "recoil_Mp133";
			recoilProne = "recoil_Mp133_prone";
			dispersion = 0.01;
			firespreadangle = 1.5;
			magazineSlot = "magazine";
		};
		class OpticsInfo: OpticsInfoShotgun
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {25};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
		};
	};
	class NULLED_KS23M: NULLED_KS23_Base
	{
		scope = 2;
		displayName = "KS23M";
		descriptionShort = "The KS-23 is a Russian shotgun, although because it uses a rifled barrel it is officially designated by the Russian military as a carbine. KS stands for Karabin Spetsialniy, Special Carbine. It is renowned for its large caliber, firing a 23 mm round, equating to 6.27 gauge using the British and American standards of shotgun gauges and approximately 4 gauge using the current European standards (based on the metric CIP tables), making it the largest-bore shotgun in use today.";
		model = "Firearms\KS23\KS23.p3d";
		animName = "ShotgunMp133";
		attachments[] = {"KS23_Stock","weaponWrap"};
		itemSize[] = {9,3};
		weight = 3300;
		hiddenSelectionsTextures[] = {"dz\weapons\shotguns\mp133\data\mp133_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\shotguns\mp133\data\mp133.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1,{"DZ\weapons\shotguns\Mp133\data\mp133.rvmat"}},{0.7,{"DZ\weapons\shotguns\Mp133\data\mp133.rvmat"}},{0.5,{"DZ\weapons\shotguns\Mp133\data\mp133_damage.rvmat"}},{0.3,{"DZ\weapons\shotguns\Mp133\data\mp133_damage.rvmat"}},{0,{"DZ\weapons\shotguns\Mp133\data\mp133_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mp133Shotgun_PistolGrip: Mp133Shotgun_Base
	{
		scope = 2;
		displayName = "$STR_cfgWeapons_Mp133Shotgun_PistolGrip0";
		descriptionShort = "$STR_cfgWeapons_Mp133Shotgun_PistolGrip1";
		model = "\dz\weapons\shotguns\mp133\mp133_pistol_grip.p3d";
		animName = "ShotgunMp133_Pistol_Grip";
		attachments[] = {"KS23_Stock"};
		itemSize[] = {8,3};
		weight = 2800;
		chamberSize = 4;
		reloadAction = "ReloadMP133_grip";
		shotAction = "ReloadMP133_grip_shot";
		recoilModifier[] = {1,1,1};
		swayModifier[] = {0.5,0.5,0.5};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1,{"DZ\weapons\shotguns\Mp133\data\mp133_pistol_grip.rvmat"}},{0.7,{"DZ\weapons\shotguns\Mp133\data\mp133_pistol_grip.rvmat"}},{0.5,{"DZ\weapons\shotguns\Mp133\data\mp133_pistol_grip_damage.rvmat"}},{0.3,{"DZ\weapons\shotguns\Mp133\data\mp133_pistol_grip_damage.rvmat"}},{0,{"DZ\weapons\shotguns\Mp133\data\mp133_pistol_grip_destruct.rvmat"}}};
				};
			};
		};
	};
};
class CfgSlots
{
	class Slot_KS23_Stock
	{
		name = "KS23_Stock";
		displayName = "KS23_Stock";
	};
};
