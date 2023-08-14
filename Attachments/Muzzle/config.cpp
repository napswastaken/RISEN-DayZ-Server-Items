////////////////////////////////////////////////////////////////////
//DeRap: Muzzle\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Mon Aug 14 16:30:07 2023 : 'file' last modified on Mon Aug 14 16:30:07 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class NULLED_Weapons_Muzzles
	{
		units[] = {"NULLED_Surefire_SOCOM338_Suppressor","NULLED_Surefire_SFM338_MuzzleBrake","NULLED_Timberwolf_MuzzleBrake","NULLED_Timberwolf_Supressor","NULLED_408calSuppressor_snow","NULLED_408calSuppressor_desert","NULLED_408calSuppressor_black","NULLED_AEK_Muzzle","NULLED_Osprey45"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Muzzles"};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class ItemBarrel: Inventory_Base{};
	class MP5_Compensator;
	class ItemSuppressor;
	class NULLED_Surefire_SOCOM338_Suppressor: ItemSuppressor
	{
		scope = 2;
		displayName = "SOCOM338 TI SUPPRESSOR";
		descriptionShort = "The SOCOM338-Ti for .338 Lapua sniper rifles is a combat-ready suppressor hewn from high-grade titanium, one of the world’s lightest and most durable materials.";
		inventorySlot = "338_Muzzle";
		itemModelLength = 1.0;
		muzzlePos = "usti hlavne";
		itemSize[] = {3,1};
		model = "Attachments\Muzzle\Surefire_SOCOM338\Surefire_SOCOM338.p3d";
		simulation = "ItemSuppressor";
		noiseShootModifier = -1.8;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 45;
				};
			};
		};
	};
	class NULLED_Surefire_SFM338_MuzzleBrake: ItemSuppressor
	{
		scope = 2;
		displayName = "Surefire SFM338 MuzzleBrake";
		descriptionShort = "SureFire SFMB muzzle brake suppressor adapters greatly reduce both recoil impulse and muzzle rise so that your weapon tracks straight back, keeping you on target for faster shot-to-shot recovery.";
		model = "Attachments\Muzzle\Surefire_SFM338\Surefire_SFM338.p3d";
		soundIndex = 0;
		rotationFlags = 17;
		reversed = 0;
		weight = 150;
		itemSize[] = {1,1};
		itemModelLength = 0.089;
		lootCategory = "Attachments";
		lootTag[] = {"Military_east","Military_west","Police","Civilian"};
		inventorySlot = "338_Muzzle";
		dispersionModifier = -0.00025;
		dispersionCondition = "true";
		recoilModifier[] = {0.6,0.6,0.6};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 45;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\data\mosin_compensator.rvmat"}},{0.6,{"DZ\weapons\attachments\data\mosin_compensator.rvmat"}},{0.5,{"DZ\weapons\attachments\data\mosin_compensator_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\mosin_compensator_damage.rvmat"}},{0,{"DZ\weapons\attachments\data\mosin_compensator_destruct.rvmat"}}};
				};
			};
		};
	};
	class NULLED_Timberwolf_MuzzleBrake: ItemSuppressor
	{
		scope = 2;
		displayName = "Timberwolf MuzzleBrake";
		descriptionShort = "";
		model = "Attachments\Muzzle\TimberWolf\Timberwolf_MuzzleBrake.p3d";
		soundIndex = 0;
		rotationFlags = 17;
		reversed = 0;
		weight = 150;
		itemSize[] = {1,1};
		itemModelLength = 0.089;
		lootCategory = "Attachments";
		lootTag[] = {"Military_east","Military_west","Police","Civilian"};
		inventorySlot = "Timberwolf_Muzzle";
		dispersionModifier = -0.00025;
		dispersionCondition = "true";
		recoilModifier[] = {0.6,0.6,0.6};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 45;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\data\mosin_compensator.rvmat"}},{0.6,{"DZ\weapons\attachments\data\mosin_compensator.rvmat"}},{0.5,{"DZ\weapons\attachments\data\mosin_compensator_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\mosin_compensator_damage.rvmat"}},{0,{"DZ\weapons\attachments\data\mosin_compensator_destruct.rvmat"}}};
				};
			};
		};
	};
	class NULLED_Timberwolf_Supressor: ItemSuppressor
	{
		scope = 2;
		displayName = "Timberwolf Supressor";
		descriptionShort = "Timberwolf Supressor";
		inventorySlot = "Timberwolf_Muzzle";
		itemModelLength = 1.0;
		muzzlePos = "usti hlavne";
		itemSize[] = {1,3};
		model = "Attachments\Muzzle\TimberWolf\Timberwolf_Supressor.p3d";
		simulation = "ItemSuppressor";
		noiseShootModifier = -1.8;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 45;
				};
			};
		};
	};
	class NULLED_408calSuppressor: ItemSuppressor
	{
		displayName = ".408 Suppressor - Silver";
		descriptionShort = ".408 Suppressor";
		inventorySlot = "408Muzzle";
		itemModelLength = 0.089;
		muzzlePos = "usti hlavne";
		itemSize[] = {1,3};
		model = "Attachments\Muzzle\408Muzzel\408_suppressor.p3d";
		simulation = "ItemSuppressor";
		noiseShootModifier = -1.8;
		hiddenSelections[] = {"camo"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 45;
				};
			};
		};
	};
	class NULLED_408calSuppressor_snow: NULLED_408calSuppressor
	{
		scope = 2;
		displayName = ".408 Suppressor - Snow";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Attachments\Muzzle\408Muzzel\data\Suppressor_snow_co.paa"};
	};
	class NULLED_408calSuppressor_desert: NULLED_408calSuppressor
	{
		scope = 2;
		displayName = ".408 Suppressor - Desert";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Attachments\Muzzle\408Muzzel\data\50cal_desert_Suppressor_co.paa.paa"};
	};
	class NULLED_408calSuppressor_black: NULLED_408calSuppressor
	{
		scope = 2;
		displayName = ".408 Suppressor - Black";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Attachments\Muzzle\408Muzzel\data\Suppressor_black_co.paa"};
	};
	class NULLED_AEK_Muzzle: ItemSuppressor
	{
		scope = 2;
		displayName = "AEK Muzzlebreak";
		descriptionShort = "";
		model = "Attachments\Muzzle\AEKMuzzle\AEK_Muzzlebreak.p3d";
		soundIndex = 0;
		rotationFlags = 17;
		reversed = 0;
		weight = 150;
		itemSize[] = {1,1};
		itemModelLength = 0.089;
		lootCategory = "Attachments";
		lootTag[] = {"Military_east","Military_west","Police","Civilian"};
		inventorySlot = "AEK_Muzzlebreak";
		dispersionModifier = -0.00025;
		dispersionCondition = "true";
		recoilModifier[] = {0.6,0.6,0.6};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 45;
					healthLevels[] = {{1,{"DZ\weapons\attachments\data\mosin_compensator.rvmat"}},{0.7,{"DZ\weapons\attachments\data\mosin_compensator.rvmat"}},{0.5,{"DZ\weapons\attachments\data\mosin_compensator_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\mosin_compensator_damage.rvmat"}},{0,{"DZ\weapons\attachments\data\mosin_compensator_destruct.rvmat"}}};
				};
			};
		};
	};
	class NULLED_Osprey45: ItemSuppressor
	{
		scope = 2;
		displayName = "Osprey45";
		descriptionShort = "Following in its Osprey 9 brother’s footsteps, the SilencerCo Osprey 45 is a distinct-looking pistol can that sports a monocore baffle design. Embracing an offset (or eccentric) appearance that looks great on some square-slide weapons, this polygonal suppressor is as effective as it is unique. Headquartered in utopian Utah, SilencerCo engineers are known for thinking outside the box, and their Osprey line of cans follows that creative trail. Holding the mentality of producing quality units while also listening to the firearm community, this team has you covered suppressor-wise.";
		model = "Attachments\Muzzle\Osprey45\OSPREY45.p3d";
		rotationFlags = 17;
		reversed = 0;
		weight = 70;
		itemSize[] = {3,1};
		itemModelLength = 0.176;
		lootCategory = "Attachments";
		lootTag[] = {"Military_east","Military_west","Police","Civilian"};
		inventorySlot[] = {"pistolMuzzle"};
		simulation = "ItemSuppressor";
		noiseShootModifier = -0.9;
		barrelArmor = 600;
		recoilModifier[] = {0.8,0.8,0.8};
		selectionFireAnim = "zasleh";
		soundIndex = 1;
		muzzlePos = "usti hlavne";
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
				shotsToStartOverheating = 2;
				maxOverheatingValue = 10;
				overheatingDecayInterval = 1;
				class SmokingBarrel
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0,0.1,0};
					onlyWithinRainLimits[] = {0.2,1};
				};
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5;
					healthLevels[] = {{1,{"DZ\weapons\attachments\data\gemtech.rvmat"}},{0.7,{"DZ\weapons\attachments\data\gemtech.rvmat"}},{0.5,{"DZ\weapons\attachments\data\gemtech_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\gemtech_damage.rvmat"}},{0,{"DZ\weapons\attachments\data\gemtech_destruct.rvmat"}}};
				};
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyOsprey45: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "pistolMuzzle";
		model = "Attachments\Muzzle\Osprey45\Osprey45.p3d";
	};
	class ProxyTimberwolf_MuzzleBrake: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Timberwolf_Muzzle";
		model = "Attachments\Muzzle\TimberWolf\Timberwolf_MuzzleBrake.p3d";
	};
	class ProxyTimberwolf_Supressor: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Timberwolf_Muzzle";
		model = "Attachments\Muzzle\TimberWolf\Timberwolf_Supressor.p3d";
	};
	class Proxy50cal_suppressor: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "408Muzzle";
		model = "Attachments\Muzzle\408Muzzel\408_suppressor.p3d";
	};
	class ProxySurefire_SFM338: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "338_Muzzle";
		model = "Attachments\Muzzle\Surefire_SFM338\Surefire_SFM338.p3d";
	};
	class ProxySurefire_SOCOM338: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "338_Muzzle";
		model = "Attachments\Muzzle\Surefire_SOCOM338\Surefire_SOCOM338.p3d";
	};
};
