////////////////////////////////////////////////////////////////////
//DeRap: rails\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Mon Aug 14 16:30:08 2023 : 'file' last modified on Mon Aug 14 16:30:08 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class NULLED_Rails
	{
		units[] = {"NULLED_Rifle_Shield","NULLED_Rifle_Shield_Glass","NULLED_Zenit_b"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Supports"};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class M4_OEBttstck;
	class NULLED_Rifle_Shield: Inventory_Base
	{
		scope = 2;
		displayName = "WEAPON MOUNTED BALLISTIC SHIELD";
		descriptionShort = "LEVEL IIIA STRIKER SHIELD can be mounted on compatible picatinny rails";
		model = "Attachments\rails\Rifle_Shields\Rifle_Shield.p3d";
		rotationFlags = 17;
		reversed = 0;
		weight = 430;
		itemSize[] = {2,1};
		inventorySlot[] = {"Shield"};
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {1.3,1,1.3};
		hiddenSelections[] = {"camo","charm"};
		hiddenSelectionsTextures[] = {"Attachments\rails\Rifle_Shields\data\Plate\Plate_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 220;
					healthLevels[] = {{1,{"DZ\weapons\attachments\data\akm_accessories.rvmat"}},{0.7,{"DZ\weapons\attachments\data\akm_accessories.rvmat"}},{0.5,{"DZ\weapons\attachments\data\akm_accessories_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\akm_accessories_damage.rvmat"}},{0,{"DZ\weapons\attachments\data\akm_accessories_destruct.rvmat"}}};
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
	class NULLED_Rifle_Shield_Glass: Inventory_Base
	{
		scope = 2;
		displayName = "WEAPON MOUNTED BALLISTIC SHIELD";
		descriptionShort = "LEVEL IIIA STRIKER SHIELD can be mounted on compatible picatinny rails";
		model = "Attachments\rails\Rifle_Shields\Rifle_Shield_Glass.p3d";
		rotationFlags = 17;
		reversed = 0;
		weight = 430;
		itemSize[] = {2,1};
		inventorySlot[] = {"Shield"};
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {1.3,1,1.3};
		hiddenSelections[] = {"camo","charm"};
		hiddenSelectionsTextures[] = {"Attachments\rails\Rifle_Shields\data\Plate\Plate_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 220;
					healthLevels[] = {{1,{"DZ\weapons\attachments\data\akm_accessories.rvmat"}},{0.7,{"DZ\weapons\attachments\data\akm_accessories.rvmat"}},{0.5,{"DZ\weapons\attachments\data\akm_accessories_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\akm_accessories_damage.rvmat"}},{0,{"DZ\weapons\attachments\data\akm_accessories_destruct.rvmat"}}};
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
	class NULLED_Zenit_b: M4_OEBttstck
	{
		scope = 2;
		displayName = "B-13 rail platform";
		descriptionShort = "The B-13 rail platform mounts on the standard Dovetail mount of the AK 103, 104, 105, 74M, AKMN, Saiga MK, Saiga MK-03, Saiga 410 carbines. Provides a platform for sighting devices. ";
		model = "Attachments\rails\Zenit_b\Zenit_b.p3d";
		rotationFlags = 17;
		reversed = 0;
		weight = 430;
		itemSize[] = {2,1};
		inventorySlot[] = {"weaponHandguardAK"};
		dispersionModifier = -0.000125;
		dispersionCondition = "true";
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {1,1,1};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"dz\weapons\attachments\data\akm_accessories_black_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 220;
					healthLevels[] = {{1,{"DZ\weapons\attachments\data\akm_accessories.rvmat"}},{0.7,{"DZ\weapons\attachments\data\akm_accessories.rvmat"}},{0.5,{"DZ\weapons\attachments\data\akm_accessories_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\akm_accessories_damage.rvmat"}},{0,{"DZ\weapons\attachments\data\akm_accessories_destruct.rvmat"}}};
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
	class NULLED_DeltaPoint_Rail_Offset: M4_OEBttstck
	{
		scope = 0;
		displayName = "45 Degree Offset Accessory Rail";
		descriptionShort = "GG&G, Inc. Mount Black 45 Degree Offset Accessory Rail, Ambi-Design, 5 cross-slot mounting locations, Anti-Snag Design Picatinny GGG-1526";
		model = "Attachments\rails\Deltapoint\MRD_Offset.p3d";
		rotationFlags = 17;
		reversed = 0;
		weight = 430;
		itemSize[] = {2,1};
		inventorySlot[] = {"weaponHandguardAK"};
		dispersionModifier = -0.000125;
		dispersionCondition = "true";
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {1,1,1};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"dz\weapons\attachments\data\akm_accessories_black_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 220;
					healthLevels[] = {{1,{"DZ\weapons\attachments\data\akm_accessories.rvmat"}},{0.7,{"DZ\weapons\attachments\data\akm_accessories.rvmat"}},{0.5,{"DZ\weapons\attachments\data\akm_accessories_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\akm_accessories_damage.rvmat"}},{0,{"DZ\weapons\attachments\data\akm_accessories_destruct.rvmat"}}};
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
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyRifle_Shield: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Shield";
		model = "Attachments\rails\Rifle_Shields\Rifle_Shield.p3d";
	};
	class ProxyRifle_Shield_Glass: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Shield";
		model = "Attachments\rails\Rifle_Shields\Rifle_Shield_Glass.p3d";
	};
};
