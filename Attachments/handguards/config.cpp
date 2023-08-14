////////////////////////////////////////////////////////////////////
//DeRap: handguards\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Mon Aug 14 16:30:06 2023 : 'file' last modified on Mon Aug 14 16:30:06 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class NULLED_Weapons_Supports
	{
		units[] = {"NULLED_MCX_Handguard","NULLED_Quad_Rail_Handguard_P90","NULLED_MLOK_Handguard_P90"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Supports"};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class M4_RISHndgrd;
	class M4_MPHndgrd;
	class NULLED_MCX_Handguard: Inventory_Base
	{
		scope = 2;
		displayName = "MCX Hanguard";
		descriptionShort = "FN Quad Rail for P90 or PS90";
		model = "Attachments\support\MCX_handgaurd.p3d";
		rotationFlags = 17;
		reversed = 0;
		weight = 470;
		itemSize[] = {2,1};
		inventorySlot = "weaponHandguardMCX";
		attachments[] = {"weaponOptics","weaponWrap","Bipod"};
		dispersionModifier = -0.000125;
		dispersionCondition = "true";
		recoilModifier[] = {0.8,0.8,0.8};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.15,0.15,0.15,1.0,CO)"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\data\m4_ris.rvmat"}},{0.7,{"DZ\weapons\attachments\data\m4_ris.rvmat"}},{0.5,{"DZ\weapons\attachments\data\m4_ris_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\m4_ris_damage.rvmat"}},{0.0,{"DZ\weapons\attachments\data\m4_ris_destruct.rvmat"}}};
				};
			};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class NULLED_Quad_Rail_Handguard_P90: Inventory_Base
	{
		scope = 2;
		displayName = "Quad Rail Handguard";
		descriptionShort = "FN Quad Rail for P90 or PS90";
		model = "Attachments\handguards\Quad_Rail_Handguard.p3d";
		rotationFlags = 17;
		reversed = 0;
		weight = 470;
		itemSize[] = {2,1};
		inventorySlot = "weaponHandguardP90";
		attachments[] = {"weaponOptics","weaponWrap","Bipod"};
		dispersionModifier = -0.000125;
		dispersionCondition = "true";
		recoilModifier[] = {0.8,0.8,0.8};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.15,0.15,0.15,1.0,CO)"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\data\m4_ris.rvmat"}},{0.7,{"DZ\weapons\attachments\data\m4_ris.rvmat"}},{0.5,{"DZ\weapons\attachments\data\m4_ris_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\m4_ris_damage.rvmat"}},{0.0,{"DZ\weapons\attachments\data\m4_ris_destruct.rvmat"}}};
				};
			};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class NULLED_MLOK_Handguard_P90: Inventory_Base
	{
		scope = 2;
		displayName = "MLOK Handguard";
		descriptionShort = "The handguard mounts to the P90 with included hardware and no modifications to the firearm are required. Does not mount to the barrel. Fits all three versions of the P90 (standard, tri-rail and the USG).";
		model = "Attachments\handguards\CMR30_MLOK.p3d";
		rotationFlags = 17;
		reversed = 0;
		weight = 470;
		itemSize[] = {2,1};
		inventorySlot = "weaponHandguardP90";
		dispersionModifier = -0.000125;
		dispersionCondition = "true";
		recoilModifier[] = {0.8,0.8,0.8};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.15,0.15,0.15,1.0,CO)"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\data\m4_ris.rvmat"}},{0.7,{"DZ\weapons\attachments\data\m4_ris.rvmat"}},{0.5,{"DZ\weapons\attachments\data\m4_ris_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\m4_ris_damage.rvmat"}},{0.0,{"DZ\weapons\attachments\data\m4_ris_destruct.rvmat"}}};
				};
			};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1.0;
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
	class ProxyCMR30_MLOK: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponHandguardP90";
		model = "Attachments\handguards\CMR30_MLOK.p3d";
	};
	class ProxyQuad_Rail_Handguard: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponHandguardP90";
		model = "Attachments\handguards\Quad_Rail_Handguard.p3d";
	};
	class ProxyMCX_handgaurd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponHandguardMCX";
		model = "Attachments\support\MCX_handgaurd.p3d";
	};
};
class CfgSlots
{
	class Slot_weaponHandguardP90
	{
		name = "weaponHandguardP90";
		displayName = "weaponHandguardP90";
	};
};
