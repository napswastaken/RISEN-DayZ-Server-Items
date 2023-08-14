////////////////////////////////////////////////////////////////////
//DeRap: Configs\Config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Mon Aug 14 16:29:49 2023 : 'file' last modified on Tue Aug 03 07:00:49 2021
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class AdvancedAttachmentConfigs
	{
		units[] = {"PistolCompensatorSuppressor","MuzzleAR","MuzzleAK","MuzzlePistol","RifleLight","PistolLight","AKStockConversion","M4_DDBttstck_Black","M4_DDBttstck_FDE","M4_DDBttstck_OD","M4_SIBttstck_Black","M4_SIBttstck_FDE","M4_SIBttstck_OD","M4_VTBttstck_Black","M4_VTBttstck_FDE","M4_VTBttstck_OD","M4_FTBttstck_Black","M4_FTBttstck_FDE","M4_FTBttstck_OD","M4_MXBttstck_Black","M4_MXBttstck_FDE","M4_MXBttstck_OD","M4_MK4HndGrd_Black","M4_MK4HndGrd_DDC","M4_MK4HndGrd_OD","M4_MKIIHndGrd_Black","M4_MKIIHndGrd_FDE","M4_MKIIHndGrd_OD","AK_RS47HndGrd_Black","AK_RS47HndGrd_Tan","AK_RS47HndGrd_OD","ForegripIMI_Black","ForegripIMI_FDE","ForegripIMI_Grey","ForegripIMI_OD"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class cfgslots
{
	class Slot_Foregrip
	{
		name = "Foregrip";
		displayName = "Foregrip";
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxySlot_Foregrip: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Foregrip"};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class ItemSuppressor: Inventory_Base{};
	class PistolCompensatorSuppressor: ItemSuppressor
	{
		scope = 2;
		displayName = "SilencerCo Osprey";
		descriptionShort = "The SilencerCo Osprey 45 is a multi caliber suppressor built for centerfire pistols. Its polygonal shape allows for this 8-inch, 11.1 ounce suppressor to provide optimal sound suppression due to its increased internal volume. Due to its build it has a slight compensation effect.";
		model = "Attachments\Data\SuppressorCompensatorPistol\SuppressorCompensatorPistol.p3d";
		rotationFlags = 17;
		reversed = 0;
		weight = 150;
		itemSize[] = {1,3};
		itemModelLength = 0.1;
		lootCategory = "Attachments";
		inventorySlot[] = {"pistolMuzzle"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5;
				};
			};
		};
		dispersionModifier = -0.0001;
		dispersionCondition = "true";
		barrelArmor = 500;
		recoilModifier[] = {0.90000004,0.8,0.90000004};
		swayModifier[] = {1.1,1.1,1.1};
		soundIndex = 1;
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
			};
		};
	};
	class MuzzleAR: ItemSuppressor
	{
		scope = 2;
		displayName = "Vendetta precision AR Muzzle Brake";
		descriptionShort = "The VP-09 is the perfect combination of looks and reliability. It reduces recoil and eliminates muzzle rise. The brake is crafted with an ultra-high corrosion resistant titanium and protected by an AlTiN coating, increasing longevity and durability.";
		model = "Attachments\Data\MuzzleBreakAR\MuzzleBreakAR.p3d";
		rotationFlags = 17;
		reversed = 0;
		weight = 73;
		itemSize[] = {1,2};
		itemModelLength = 0.02;
		lootCategory = "Attachments";
		inventorySlot[] = {"weaponMuzzleM4"};
		dispersionModifier = -0.0001;
		dispersionCondition = "true";
		barrelArmor = 500;
		recoilModifier[] = {0.8,0.6,0.8};
		swayModifier[] = {1.1,1.1,1.1};
		soundIndex = 0;
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
			};
		};
	};
	class MuzzleAK: ItemSuppressor
	{
		scope = 2;
		displayName = "Zenit DTK-1 7.62x39 & 5.45x39 muzzle brake";
		descriptionShort = "Muzzle brake compensator DTK-1 by Zenit is designed for installation on 7.62x39 and 5.45x39 AK-based weapon systems. Reduces recoil and counters the barrel climb. The crown on the DTK nose is meant for breaking of tempered glass.";
		model = "Attachments\Data\MuzzleBreakAK\MuzzleBreakAK.p3d";
		rotationFlags = 17;
		reversed = 0;
		weight = 73;
		itemSize[] = {1,2};
		itemModelLength = 0.02;
		lootCategory = "Attachments";
		inventorySlot[] = {"weaponMuzzleAK"};
		dispersionModifier = -0.0001;
		dispersionCondition = "true";
		barrelArmor = 600;
		recoilModifier[] = {0.8,0.6,0.8};
		swayModifier[] = {1.1,1.1,1.1};
		soundIndex = 0;
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
			};
		};
	};
	class MuzzlePistol: ItemSuppressor
	{
		scope = 2;
		displayName = "Rex Silentium GunFighter Muzzle Brake";
		descriptionShort = "Large ports of the GunFighter muzzle device are designed to provide a maximum amount of recoil reduction and muzzle rise compensation. The first slot is pointed upward and works as a muzzle rise compensator. The following two ports are designed to redirect the gasses to the sides and upwards thus mitigating the felt recoil and also aiding the muzzle flip compensation. The flat profile of the brake won’t let it interfere with the iron sights of handguns.";
		model = "Attachments\Data\MuzzleBreakPistol\MuzzleBreakPistol.p3d";
		rotationFlags = 17;
		reversed = 0;
		weight = 73;
		itemSize[] = {1,2};
		itemModelLength = 0.02;
		lootCategory = "Attachments";
		inventorySlot[] = {"pistolMuzzle"};
		dispersionModifier = -0.0001;
		dispersionCondition = "true";
		barrelArmor = 600;
		recoilModifier[] = {0.8,0.6,0.8};
		swayModifier[] = {1.1,1.1,1.1};
		soundIndex = 0;
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
			};
		};
	};
	class Switchable_Base;
	class RifleLight: Switchable_Base
	{
		scope = 2;
		displayName = "Rifle Flashlight";
		descriptionShort = "A high lumen flashlight set to attach to any picatinny rail mount system";
		model = "Attachments\Data\RifleLight\RifleLight.p3d";
		rotationFlags = 17;
		reversed = 1;
		weight = 80;
		itemSize[] = {2,1};
		swayModifier[] = {1.1,1.1,1.1};
		inventorySlot[] = {"weaponFlashlight","helmetFlashlight"};
		hiddenSelections[] = {"riflelight","riflelight_lens"};
		hiddenSelectionsTextures[] = {"Attachments\Data\RifleLight\textures\RifleLight_co.paa","Attachments\Data\RifleLight\textures\RifleLight_Lens_co.paa"};
		hiddenSelectionsMaterials[] = {"Attachments\Data\RifleLight\textures\RifleLight.rvmat","Attachments\Data\RifleLight\textures\RifleLight_Lens.rvmat"};
		class EnergyManager
		{
			hasIcon = 1;
			autoSwitchOffWhenInCargo = 1;
			energyUsagePerSecond = 0.01;
			plugType = 1;
			attachmentAction = 1;
			updateInterval = 40;
		};
	};
	class PistolLight: Switchable_Base
	{
		scope = 2;
		displayName = "Pistol Flashlight";
		descriptionShort = "A high lumen flashlight set to attach to any pistol rail mount system";
		model = "Attachments\Data\PistolLight\PistolLight.p3d";
		rotationFlags = 17;
		reversed = 1;
		weight = 80;
		itemSize[] = {1,1};
		swayModifier[] = {1.1,1.1,1.1};
		inventorySlot[] = {"pistolFlashlight"};
		hiddenSelections[] = {"PistolLight","PistolLight_lens"};
		hiddenSelectionsTextures[] = {"Attachments\Data\PistolLight\textures\PistolLight_co.paa","Attachments\Data\PistolLight\textures\PistolLight_Lens_co.paa"};
		hiddenSelectionsMaterials[] = {"Attachments\Data\PistolLight\textures\PistolLight.rvmat","Attachments\Data\PistolLight\textures\PistolLight_Lens.rvmat"};
		class EnergyManager
		{
			hasIcon = 1;
			autoSwitchOffWhenInCargo = 1;
			energyUsagePerSecond = 0.01;
			plugType = 1;
			attachmentAction = 1;
			updateInterval = 40;
		};
	};
	class AKStockConversion: Inventory_Base
	{
		scope = 2;
		displayName = "AR15 Adapter for AK74/AKM";
		descriptionShort = "Simple adapter for AK style firearms to allow attachment of AR15 style stocks";
		model = "Attachments\Data\AKStockConversion\AKStockConversion.p3d";
		rotationFlags = 17;
		reversed = 0;
		inventorySlot[] = {"weaponButtstockAK"};
		attachments[] = {"weaponButtstockM4"};
		weight = 50;
		itemSize[] = {2,1};
		dispersionModifier = -0.0002;
		dispersionCondition = "true";
		recoilModifier[] = {0.95,0.95,0.95};
		swayModifier[] = {0.95,0.95,0.95};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Attachments\Data\AKStockConversion\Textures\AKStockConversion_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
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
	class M4Bttstck_Base: Inventory_Base
	{
		Scope = 0;
		rotationFlags = 17;
		reversed = 0;
		inventorySlot[] = {"weaponButtstockM4"};
		itemSize[] = {2,1};
		dispersionModifier = -0.00025;
		dispersionCondition = "true";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 220;
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
	class M4_DDBttstck_Black: M4Bttstck_Base
	{
		scope = 2;
		displayName = "Daniel Defense AR15 Collapsible Buttstock";
		descriptionShort = "The Daniel Defense adjustable buttstock is constructed of a proprietary blend of glass infused polymers and finished off with soft touch rubber overmolding in strategic points.  The new buttstock is precision formed for mil-spec receiver extensions to have very little forward or lateral play that is so common in many other buttstocks.  This eliminates the need for a tensioning device or friction lock.";
		model = "Attachments\Data\DDBttstck\DDBttstck.p3d";
		weight = 300;
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {0.8,0.8,0.8};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Attachments\Data\DDBttstck\Textures\Stock_DD_Black_co.paa"};
	};
	class M4_DDBttstck_FDE: M4_DDBttstck_Black
	{
		hiddenSelectionsTextures[] = {"Attachments\Data\DDBttstck\Textures\Stock_DD_FDE_co.paa"};
	};
	class M4_DDBttstck_OD: M4_DDBttstck_Black
	{
		hiddenSelectionsTextures[] = {"Attachments\Data\DDBttstck\Textures\Stock_DD_OD_co.paa"};
	};
	class M4_SIBttstck_Black: M4Bttstck_Base
	{
		scope = 2;
		displayName = "Strike Industries Viper Mod1";
		descriptionShort = "Strike Industries drop-in replacement buttstock for AR/15/M16 carbine using mil-spec sized receiver extension tubes. Features Slide on rubber replacement buttstock as well as QD sling mounting points integrated on both sides in positions for optimum usage.";
		model = "Attachments\Data\SIBttstck\SIBttstck.p3d";
		weight = 100;
		recoilModifier[] = {0.85,0.85,0.85};
		swayModifier[] = {0.95,0.95,0.95};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Attachments\Data\SIBttstck\Textures\Stock_SI_Black_co.paa"};
	};
	class M4_SIBttstck_FDE: M4_SIBttstck_Black
	{
		hiddenSelectionsTextures[] = {"Attachments\Data\SIBttstck\Textures\Stock_SI_FDE_co.paa"};
	};
	class M4_SIBttstck_OD: M4_SIBttstck_Black
	{
		hiddenSelectionsTextures[] = {"Attachments\Data\SIBttstck\Textures\Stock_SI_OD_co.paa"};
	};
	class M4_VTBttstck_Black: M4Bttstck_Base
	{
		scope = 2;
		displayName = "VLTOR IMOD";
		descriptionShort = "Designed from lessons taken from the modern battlefield, the IMOD stock provides a highly practical and functional design. In addition, the stock is constructed from the finest materials, making it capable of withstanding the most rugged demands. The IMOD stock kit is the perfect start to any AR-15 build.";
		model = "Attachments\Data\VTBttstck\VTBttstck.p3d";
		weight = 100;
		recoilModifier[] = {0.75,0.75,0.75};
		swayModifier[] = {0.7,0.7,0.7};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Attachments\Data\VTBttstck\Textures\Stock_VT_Black_co.paa"};
	};
	class M4_VTBttstck_FDE: M4_VTBttstck_Black
	{
		hiddenSelectionsTextures[] = {"Attachments\Data\VTBttstck\Textures\Stock_VT_FDE_co.paa"};
	};
	class M4_VTBttstck_OD: M4_VTBttstck_Black
	{
		hiddenSelectionsTextures[] = {"Attachments\Data\VTBttstck\Textures\Stock_VT_OD_co.paa"};
	};
	class M4_FTBttstck_Black: M4Bttstck_Base
	{
		scope = 2;
		displayName = "Fortis LA Stock";
		descriptionShort = "an all aluminum Lever Action (LA) stock that utilizes mil-spec buffer tubes.";
		model = "Attachments\Data\FTBttstck\FTBttstck.p3d";
		weight = 100;
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {0.75,0.75,0.75};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Attachments\Data\FTBttstck\Textures\Stock_FT_Black_co.paa"};
	};
	class M4_FTBttstck_FDE: M4_FTBttstck_Black
	{
		hiddenSelectionsTextures[] = {"Attachments\Data\FTBttstck\Textures\Stock_FT_Tan_co.paa"};
	};
	class M4_FTBttstck_OD: M4_FTBttstck_Black
	{
		hiddenSelectionsTextures[] = {"Attachments\Data\FTBttstck\Textures\Stock_FT_OD_co.paa"};
	};
	class M4_MXBttstck_Black: M4Bttstck_Base
	{
		scope = 2;
		displayName = "Maxim CQB Gen 7 Stock For AR-15";
		descriptionShort = "The Gen 7 is a CQB stock built for comfort and durability for real-world use. No buttons to push, just pull the stock to deploy. At its most collapsed position, this CQB stock only adds 5.35” to your AR15. At full extension, the Maxim CQB stock is the length of an extended carbine stock. And with 4 total positions you can adjust for maximum comfort and multiple scenarios.";
		model = "Attachments\Data\MXBttstck\MXBttstck.p3d";
		weight = 50;
		recoilModifier[] = {0.9,0.9,0.9};
		swayModifier[] = {0.65,0.65,0.65};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Attachments\Data\MXBttstck\Textures\Stock_MX_Black_co.paa"};
	};
	class M4_MXBttstck_FDE: M4_MXBttstck_Black
	{
		hiddenSelectionsTextures[] = {"Attachments\Data\MXBttstck\Textures\Stock_MX_Tan_co.paa"};
	};
	class M4_MXBttstck_OD: M4_MXBttstck_Black
	{
		hiddenSelectionsTextures[] = {"Attachments\Data\MXBttstck\Textures\Stock_MX_OD_co.paa"};
	};
	class M4_MK4HndGrd_Black: Inventory_Base
	{
		scope = 2;
		displayName = "Geissele Modular Rail MK4";
		descriptionShort = "The Super Modular Rail (SMR) MK4 M-LOK™ is Geissele’s ultra-rugged M-LOK option. These rails are purpose-built and feature integrated M1913 picatinny rail sections at the fore of the rail in the 3, 6 and 9 o’clock positions. Maximum venting for heat dissipation also dramatically reduces the rail's overall weight, while maintaining its same strong and rigid platform.";
		model = "Attachments\Data\MK4HndGrd\MK4HndGrd.p3d";
		rotationFlags = 17;
		reversed = 0;
		weight = 550;
		itemSize[] = {2,1};
		inventorySlot[] = {"weaponHandguardM4"};
		attachments[] = {"Foregrip"};
		hasRailFunctionality = 1;
		dispersionModifier = -0.000125;
		dispersionCondition = "true";
		recoilModifier[] = {0.78,0.78,0.78};
		swayModifier[] = {0.9,0.9,0.9};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Attachments\Data\MK4HndGrd\Textures\HndGrd_MK4_black_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
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
	class M4_MK4HndGrd_DDC: M4_MK4HndGrd_Black
	{
		hiddenSelectionsTextures[] = {"Attachments\Data\MK4HndGrd\Textures\HndGrd_MK4_DDC_co.paa"};
	};
	class M4_MK4HndGrd_OD: M4_MK4HndGrd_Black
	{
		hiddenSelectionsTextures[] = {"Attachments\Data\MK4HndGrd\Textures\HndGrd_MK4_OD_co.paa"};
	};
	class M4_MKIIHndGrd_Black: Inventory_Base
	{
		scope = 2;
		displayName = "LWRC MKII-B Arm-R Rail";
		descriptionShort = "This three piece rail kit is made from 6065 series aluminum that is Type III mil-spec hardcoat anodized.";
		model = "Attachments\Data\MKIIHndGrd\MKIIHndGrd.p3d";
		rotationFlags = 17;
		reversed = 0;
		weight = 550;
		itemSize[] = {2,1};
		inventorySlot[] = {"weaponHandguardM4"};
		attachments[] = {"Foregrip"};
		hasRailFunctionality = 1;
		dispersionModifier = -0.000125;
		dispersionCondition = "true";
		recoilModifier[] = {0.78,0.78,0.78};
		swayModifier[] = {0.9,0.9,0.9};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Attachments\Data\MKIIHndGrd\Textures\MKIIHndGrd_Black_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
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
	class M4_MKIIHndGrd_FDE: M4_MKIIHndGrd_Black
	{
		hiddenSelectionsTextures[] = {"Attachments\Data\MKIIHndGrd\Textures\MKIIHndGrd_FDE_co.paa"};
	};
	class M4_MKIIHndGrd_OD: M4_MKIIHndGrd_Black
	{
		hiddenSelectionsTextures[] = {"Attachments\Data\MKIIHndGrd\Textures\MKIIHndGrd_OD_co.paa"};
	};
	class AK_RS47HndGrd_Black: Inventory_Base
	{
		scope = 2;
		displayName = "CAA RS47 Handguard";
		descriptionShort = "The RS47 foregrip, manufactured by Command Arms with light polymer, fits the majority of rifles and carbines built on the base of AK. Equipped with two short and two long rail mounts for installing additional devices.";
		model = "Attachments\Data\RS47HndGrd\RS47HndGrd.p3d";
		rotationFlags = 17;
		reversed = 0;
		weight = 430;
		itemSize[] = {2,1};
		inventorySlot[] = {"weaponHandguardAK"};
		attachments[] = {"Foregrip"};
		hasRailFunctionality = 1;
		dispersionModifier = -0.000125;
		dispersionCondition = "true";
		recoilModifier[] = {0.78,0.78,0.78};
		swayModifier[] = {0.9,0.9,0.9};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Attachments\Data\RS47HndGrd\Textures\RS47_Black_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
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
	class AK_RS47HndGrd_Tan: AK_RS47HndGrd_Black
	{
		hiddenSelectionsTextures[] = {"Attachments\Data\RS47HndGrd\Textures\RS47_Tan_co.paa"};
	};
	class AK_RS47HndGrd_OD: AK_RS47HndGrd_Black
	{
		hiddenSelectionsTextures[] = {"Attachments\Data\RS47HndGrd\Textures\RS47_OD_co.paa"};
	};
	class ForegripIMI_Black: Inventory_Base
	{
		scope = 2;
		displayName = "IMI Defense FSG2";
		descriptionShort = "The IMI Defense FSG2 –Front Support Grip is an upgraded version of the FSG1 featuring textured rubberized surfaces that give the operator enhanced grip-ability, ergonomic firing position, and rifle control. It is a lightweight, highly durable fore grip that is ergonomically optimized to reduce muscle fatigue, speed target acquisition, lower the recoil and increase rifle control.";
		model = "Attachments\Data\ForegripIMI\ForegripIMI.p3d";
		rotationFlags = 17;
		reversed = 0;
		weight = 430;
		itemSize[] = {2,1};
		inventorySlot[] = {"Foregrip","FGRIP","snafuar15afg"};
		hasRailFunctionality = 1;
		dispersionModifier = -0.000125;
		dispersionCondition = "true";
		recoilModifier[] = {0.85,0.85,0.85};
		swayModifier[] = {0.8,0.8,0.8};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Attachments\Data\ForegripIMI\Textures\ForegripIMI_Black_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
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
	class ForegripIMI_FDE: ForegripIMI_Black
	{
		hiddenSelectionsTextures[] = {"Attachments\Data\ForegripIMI\Textures\ForegripIMI_FDE_co.paa"};
	};
	class ForegripIMI_Grey: ForegripIMI_Black
	{
		hiddenSelectionsTextures[] = {"Attachments\Data\ForegripIMI\Textures\ForegripIMI_Grey_co.paa"};
	};
	class ForegripIMI_OD: ForegripIMI_Black
	{
		hiddenSelectionsTextures[] = {"Attachments\Data\ForegripIMI\Textures\ForegripIMI_OD_co.paa"};
	};
};
