////////////////////////////////////////////////////////////////////
//DeRap: Muzzle\DVLSuppressor\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Mon Aug 14 16:30:07 2023 : 'file' last modified on Mon Aug 14 16:30:07 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class NULLED_DVL_Suppressor
	{
		units[] = {"NULLED_DVL_Suppressor"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms"};
	};
};
class cfgVehicles
{
	class ItemSuppressor;
	class NULLED_DVL_Suppressor: ItemSuppressor
	{
		scope = 2;
		displayName = "DVL Suppressor";
		descriptionShort = "DVL Suppressor";
		model = "Attachments\Muzzle\DVLSuppressor\DVLSuppressor.p3d";
		rotationFlags = 17;
		reversed = 0;
		weight = 300;
		itemSize[] = {4,1};
		itemModelLength = 0.406;
		barrelArmor = 5000;
		inventorySlot[] = {"weaponMuzzleDVL"};
		simulation = "ItemSuppressor";
		dispersionModifier = -0.0001;
		noiseShootModifier = -0.9;
		dispersionCondition = "true";
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {1,1,1};
		selectionFireAnim = "zasleh";
		soundIndex = 1;
		muzzlePos = "usti hlavne";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{""}},{0.7,{""}},{0.5,{""}},{0.3,{""}},{0.0,{""}}};
				};
			};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_fnx_02";
					onlyWithinHealthLabel[] = {0,3};
				};
				class Ruined
				{
					onlyWithinHealthLabel[] = {4,4};
					illuminateWorld = 1;
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 3;
				maxOverheatingValue = 10;
				overheatingDecayInterval = 1;
				class SmokeTrail
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0,0.1,0};
					onlyWithinOverheatLimits[] = {0,1};
					onlyWithinRainLimits[] = {0.2,1};
				};
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyDVLSuppressor: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"weaponMuzzleDVL"};
		model = "Attachments\Muzzle\DVLSuppressor\DVLSuppressor.p3d";
	};
};
class CfgSlots
{
	class Slot_weaponMuzzleDVL
	{
		name = "weaponMuzzleDVL";
		displayName = "Suppressor";
		ghostIcon = "supressor";
	};
};
