////////////////////////////////////////////////////////////////////
//DeRap: support\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Mon Aug 14 16:30:09 2023 : 'file' last modified on Mon Aug 14 16:30:09 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class NULLED_Weapons_Supports
	{
		units[] = {"NULLED_AK_MagpulHndgrd","NULLED_AK_MPBttstck","NULLED_Fortis_Lever_Bttstck","NULLED_MCX_Bttstck","NULLED_AEK_Stock","NULLED_HoneyBadger_Stock","PRS_Bttstck","PRS_Bttstck_Black","PRS_Bttstck_Tan","UBR_Bttstck","UBR_Bttstck_Black","UBR_Bttstck_Tan"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Supports"};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class NULLED_AK_MagpulHndgrd: Inventory_Base
	{
		scope = 2;
		displayName = "Magpul AK Handguard";
		descriptionShort = "Magpul AK Handguard";
		model = "\Attachments\support\Magpul_AK\Magpul_AK_Hndgrd.p3d";
		rotationFlags = 17;
		reversed = 0;
		weight = 550;
		itemSize[] = {2,1};
		inventorySlot[] = {"weaponHandguardAK"};
		dispersionModifier = -0.00015;
		dispersionCondition = "true";
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {1,1,1};
		hasRailFunctionality = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1,{"DZ\weapons\attachments\data\akm_wood.rvmat"}},{0.7,{"DZ\weapons\attachments\data\akm_wood.rvmat"}},{0.5,{"DZ\weapons\attachments\data\akm_wood_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\akm_wood_damage.rvmat"}},{0,{"DZ\weapons\attachments\data\akm_wood_destruct.rvmat"}}};
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
	class NULLED_AK_MPBttstck: Inventory_Base
	{
		scope = 2;
		displayName = "Magpul AK Buttstock";
		descriptionShort = "Magpul AK Buttstock";
		model = "\Attachments\support\Magpul_AK\Magpul_AK.p3d";
		rotationFlags = 17;
		reversed = 0;
		inventorySlot[] = {"weaponButtstockAK"};
		weight = 530;
		itemSize[] = {3,1};
		dispersionModifier = -0.0002;
		dispersionCondition = "true";
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {1,1,1};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1,{"DZ\weapons\attachments\data\akm_wood.rvmat"}},{0.7,{"DZ\weapons\attachments\data\akm_wood.rvmat"}},{0.5,{"DZ\weapons\attachments\data\akm_wood_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\akm_wood_damage.rvmat"}},{0,{"DZ\weapons\attachments\data\akm_wood_destruct.rvmat"}}};
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
	class NULLED_Fortis_Lever_Bttstck: Inventory_Base
	{
		scope = 2;
		displayName = "Fortis Lever Buttstock";
		descriptionShort = "Introducing our newest part - our aluminum buttstock, the Fortis LA™. It's an all aluminum Lever Action (LA) stock that utilizes mil-spec buffer tubes. That's right - slip off the plastic stock and upgrade your rifle immediately. The lever action is what clamps down onto the buffer tube so there's no rattle or movement and our patent pending design is one of a kind.";
		model = "Attachments\support\Fortis_Lever_Buttstock\Fortis_Lever_Buttstock.p3d";
		rotationFlags = 17;
		reversed = 0;
		inventorySlot[] = {"weaponButtstockM4"};
		weight = 450;
		itemSize[] = {2,1};
		dispersionModifier = -0.00025;
		dispersionCondition = "true";
		dexterityModifier = 100;
		dexterityCondition = "true";
		recoilModifier[] = {0.7,0.7,0.7};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1,{"DZ\weapons\attachments\data\m4_stock3.rvmat"}},{0.7,{"DZ\weapons\attachments\data\m4_stock3.rvmat"}},{0.5,{"DZ\weapons\attachments\data\m4_stock3_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\m4_stock3_damage.rvmat"}},{0,{"DZ\weapons\attachments\data\m4_stock3_destruct.rvmat"}}};
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
	class NULLED_MCX_Bttstck: Inventory_Base
	{
		scope = 2;
		displayName = "MCX Buttstock";
		descriptionShort = "";
		model = "Attachments\support\MCX_Stock.p3d";
		rotationFlags = 17;
		reversed = 0;
		inventorySlot[] = {"weaponButtstockMCX"};
		weight = 450;
		itemSize[] = {2,1};
		dispersionModifier = -0.00025;
		dispersionCondition = "true";
		dexterityModifier = 100;
		dexterityCondition = "true";
		recoilModifier[] = {0.7,0.7,0.7};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1,{"DZ\weapons\attachments\data\m4_stock3.rvmat"}},{0.7,{"DZ\weapons\attachments\data\m4_stock3.rvmat"}},{0.5,{"DZ\weapons\attachments\data\m4_stock3_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\m4_stock3_damage.rvmat"}},{0,{"DZ\weapons\attachments\data\m4_stock3_destruct.rvmat"}}};
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
	class NULLED_AEK_Stock: Inventory_Base
	{
		scope = 2;
		displayName = "AEK Stock";
		descriptionShort = "";
		model = "Attachments\support\AEK_Stock\AEK_Stock.p3d";
		rotationFlags = 17;
		reversed = 0;
		inventorySlot = "AEK_Stock";
		weight = 530;
		itemSize[] = {3,1};
		recoilModifier[] = {0.8,0.8,0.8};
		dispersionModifier = -0.0002;
		dispersionCondition = "true";
	};
	class NULLED_HoneyBadger_Stock: Inventory_Base
	{
		scope = 2;
		displayName = "AEK Stock";
		descriptionShort = "";
		model = "Attachments\support\HoneyBadger_Stock\HoneyBadger_Stock.p3d";
		rotationFlags = 17;
		reversed = 0;
		inventorySlot = "HoneyBadger_Stock";
		weight = 530;
		itemSize[] = {3,1};
		recoilModifier[] = {0.8,0.8,0.8};
		dispersionModifier = -0.0002;
		dispersionCondition = "true";
	};
	class PRS_Bttstck: Inventory_Base
	{
		scope = 2;
		displayName = "PRS Gen3 Buttstock";
		descriptionShort = "The PRS GEN3 is a field precision stock for AR15/M16 and AR10/SR25 platforms, featuring tool-less length of pull and cheek piece height adjustment.";
		model = "Firearms\RSASS\RSASSButtstock.p3d";
		rotationFlags = 17;
		reversed = 0;
		inventorySlot[] = {"weaponButtstockM4"};
		weight = 530;
		itemSize[] = {3,1};
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {1,1,1};
		dispersionModifier = -0.0002;
		dispersionCondition = "true";
		hiddenSelections[] = {"zybtek","camo"};
		hiddenSelectionsMaterials[] = {""};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\support\data\FAL_stock_oe.rvmat"}},{0.6,{"DZ\weapons\attachments\support\data\FAL_stock_oe.rvmat"}},{0.5,{"DZ\weapons\attachments\support\data\FAL_stock_oe_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\support\data\FAL_stock_oe_damage.rvmat"}},{0.0,{"DZ\weapons\attachments\support\data\FAL_stock_oe_destruct.rvmat"}}};
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
	class PRS_Bttstck_Black: PRS_Bttstck
	{
		hiddenSelectionsTextures[] = {"Firearms\RSASS\data\Black_co.paa","Firearms\RSASS\data\Black_co.paa"};
	};
	class PRS_Bttstck_Tan: PRS_Bttstck
	{
		hiddenSelectionsTextures[] = {"Firearms\RSASS\data\Tan_co.paa","Firearms\RSASS\data\Tan_co.paa"};
	};
	class UBR_Bttstck: Inventory_Base
	{
		scope = 2;
		displayName = "UBR Gen3 Buttstock";
		descriptionShort = "The UBR GEN3 is a field precision stock for AR15/M16 and AR10/SR25 platforms, featuring tool-less length of pull and cheek piece height adjustment.";
		model = "Attachments\support\Magpul_UBR\Magpul_UBR.p3d";
		rotationFlags = 17;
		reversed = 0;
		inventorySlot[] = {"weaponButtstockM4"};
		weight = 530;
		itemSize[] = {3,1};
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {1,1,1};
		dispersionModifier = -0.0002;
		dispersionCondition = "true";
		hiddenSelections[] = {"zybtek","camo"};
		hiddenSelectionsMaterials[] = {""};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\support\data\FAL_stock_oe.rvmat"}},{0.6,{"DZ\weapons\attachments\support\data\FAL_stock_oe.rvmat"}},{0.5,{"DZ\weapons\attachments\support\data\FAL_stock_oe_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\support\data\FAL_stock_oe_damage.rvmat"}},{0.0,{"DZ\weapons\attachments\support\data\FAL_stock_oe_destruct.rvmat"}}};
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
	class UBR_Bttstck_Black: UBR_Bttstck
	{
		hiddenSelectionsTextures[] = {"Attachments\support\Magpul_UBR\data\Stock_UBR_black_co.paa","Attachments\support\Magpul_UBR\data\Stock_UBR_black_co.paa"};
	};
	class UBR_Bttstck_Tan: UBR_Bttstck
	{
		hiddenSelectionsTextures[] = {"Attachments\support\Magpul_UBR\data\Stock_UBR_tan_co.paa","Attachments\support\Magpul_UBR\data\Stock_UBR_tan_co.paa"};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyFortis_Lever_Buttstock: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponButtstockM4";
		model = "Attachments\support\Fortis_Lever_Buttstock\Fortis_Lever_Buttstock.p3d";
	};
	class ProxyMCX_Stock: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponButtstockMCX";
		model = "Attachments\support\MCX_Stock.p3d";
	};
	class ProxyAEK_Stock: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "AEK_Stock";
		model = "Attachments\support\AEK_Stock\AEK_Stock.p3d";
	};
	class ProxyHoneyBadger_Stock: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "HoneyBadger_Stock";
		model = "Attachments\support\HoneyBadger_Stock\HoneyBadger_Stock.p3d";
	};
};
