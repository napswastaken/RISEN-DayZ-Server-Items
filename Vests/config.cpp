////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Mon Aug 14 16:31:52 2023 : 'file' last modified on Mon Aug 14 16:31:52 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class NULLED_Characters_Vests
	{
		units[] = {"NULLED_6B43_Ratnik_Digital_Desert","NULLED_6B43_Ratnik_Digital_Flora","NULLED_6B43_Ratnik_Flora","NULLED_6B43_Ratnik_Black","NULLED_Gen4_IOTV_Black","NULLED_Gen4_IOTV_Green","NULLED_Gen4_IOTV_Tan","NULLED_Gen4_IOTV_Ucp","NULLED_Gen4_IOTV_Snow","NULLED_6B23_Black","NULLED_6B23_Green","NULLED_6B23_Tan","NULLED_6B23_Frog","NULLED_6B23_Killa","NULLED_6B45_Black","NULLED_6B45_Green","NULLED_6B45_Tan","NULLED_6B45_Multicam","NULLED_JPC_Vest_Black","NULLED_JPC_Vest_Multicam","NULLED_JPC_Vest_Green","NULLED_JPC_Vest_Tan","NULLED_JPC_Vest_Snow","NULLED_Cage_Vest_Black","NULLED_Cage_Vest_Green","NULLED_Cage_Vest_Tan","NULLED_Cage_Vest_Snow","NULLED_Emerson_Vest_Multicam","NULLED_Emerson_Vest_Black","NULLED_Emerson_Vest_Green","NULLED_Emerson_Vest_Snow"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters"};
	};
};
class CfgMods
{
	class NULLED_Characters_Vests
	{
		dir = "NULLED_Characters_Vests";
		type = "mod";
		dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"Vests\scripts\4_World"};
			};
		};
	};
};
class CfgVehicles
{
	class Clothing_Base;
	class Clothing: Clothing_Base{};
	class SmershVest: Clothing
	{
		inventorySlot[] = {"Hips"};
	};
	class NULLED_6B43_Ratnik_ColorBase: Clothing
	{
		scope = 0;
		displayName = "6B43 Ratnik 6A Armor";
		descriptionShort = "The 6B43 bulletproof vest of 6A Combined materials, protection class is (roughly equivalent to class IIIA) is designed for protection from light weapons bullets, fragments of grenades, mines, and melee weapons, as well as reducing the risk of after-penetration effects during combat situations.";
		model = "Vests\6B43_Ratnik\6B43_Ratnik_g.p3d";
		dexterityModifier = -3;
		dexterityCondition = "true";
		inventorySlot[] = {"Vest"};
		itemInfo[] = {"Clothing","Vest"};
		attachments[] = {};
		weight = 12000;
		itemSize[] = {4,4};
		absorbency = 0.1;
		heatIsolation = 0.1;
		repairableWithKits[] = {3};
		repairCosts[] = {100.0};
		hiddenSelections[] = {"camofemale","camomale","camoground"};
		class ClothingTypes
		{
			male = "Vests\6B43_Ratnik\6B43_Ratnik.p3d";
			female = "Vests\6B43_Ratnik\6B43_Ratnik.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"DZ\characters\vests\Data\TacticalVest2.rvmat"}},{0.75,{"DZ\characters\vests\Data\TacticalVest2.rvmat"}},{0.5,{"DZ\characters\vests\Data\TacticalVest2_damage.rvmat"}},{0.25,{"DZ\characters\vests\Data\TacticalVest2_damage.rvmat"}},{0.0,{"DZ\characters\vests\Data\TacticalVest2_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.1;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.2;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.5;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.5;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.4;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.26;
					};
				};
			};
		};
	};
	class NULLED_6B43_Ratnik_Digital_Desert: NULLED_6B43_Ratnik_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"Vests\6B43_Ratnik\data\6B43Vest_Ratnik_digital_desert_vest_co.paa","Vests\6B43_Ratnik\data\6B43Vest_Ratnik_digital_desert_vest_co.paa","Vests\6B43_Ratnik\data\6B43Vest_Ratnik_digital_desert_vest_co.paa"};
	};
	class NULLED_6B43_Ratnik_Digital_Flora: NULLED_6B43_Ratnik_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"Vests\6B43_Ratnik\data\6B43Vest_Ratnik_digital_flora_vest_co.paa","Vests\6B43_Ratnik\data\6B43Vest_Ratnik_digital_flora_vest_co.paa","Vests\6B43_Ratnik\data\6B43Vest_Ratnik_digital_flora_vest_co.paa"};
	};
	class NULLED_6B43_Ratnik_Flora: NULLED_6B43_Ratnik_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"Vests\6B43_Ratnik\data\6B43Vest_Ratnik_flora_vest_co.paa","Vests\6B43_Ratnik\data\6B43Vest_Ratnik_flora_vest_co.paa","Vests\6B43_Ratnik\data\6B43Vest_Ratnik_flora_vest_co.paa"};
	};
	class NULLED_6B43_Ratnik_Black: NULLED_6B43_Ratnik_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"Vests\6B43_Ratnik\data\6B43Vest_Ratnik_black_vest_co.paa","Vests\6B43_Ratnik\data\6B43Vest_Ratnik_black_vest_co.paa","Vests\6B43_Ratnik\data\6B43Vest_Ratnik_black_vest_co.paa"};
	};
	class NULLED_Gen4_IOTV_ColorBase: Clothing
	{
		scope = 0;
		displayName = "Gen4 IOTV Armor";
		descriptionShort = "Class 4 body armor.";
		model = "Vests\Gen4_IOTV\Gen4_IOTV_g.p3d";
		dexterityModifier = -3;
		dexterityCondition = "true";
		inventorySlot[] = {"Vest"};
		itemInfo[] = {"Clothing","Vest"};
		attachments[] = {};
		weight = 12000;
		itemSize[] = {4,4};
		absorbency = 0.1;
		heatIsolation = 0.1;
		repairableWithKits[] = {3};
		repairCosts[] = {100.0};
		hiddenSelections[] = {"camofemale","camomale","camoground"};
		class ClothingTypes
		{
			male = "Vests\Gen4_IOTV\Gen4_IOTV.p3d";
			female = "Vests\Gen4_IOTV\Gen4_IOTV.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"DZ\characters\vests\Data\TacticalVest2.rvmat"}},{0.75,{"DZ\characters\vests\Data\TacticalVest2.rvmat"}},{0.5,{"DZ\characters\vests\Data\TacticalVest2_damage.rvmat"}},{0.25,{"DZ\characters\vests\Data\TacticalVest2_damage.rvmat"}},{0.0,{"DZ\characters\vests\Data\TacticalVest2_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.2;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.25;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.5;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.5;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.4;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.4;
					};
				};
			};
		};
	};
	class NULLED_Gen4_IOTV_Black: NULLED_Gen4_IOTV_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"Vests\Gen4_IOTV\Data\IOTV_Black_co.paa","Vests\Gen4_IOTV\Data\IOTV_Black_co.paa","Vests\Gen4_IOTV\Data\IOTV_Black_co.paa"};
		color = "Black";
	};
	class NULLED_Gen4_IOTV_Green: NULLED_Gen4_IOTV_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"Vests\Gen4_IOTV\Data\IOTV_Green_co.paa","Vests\Gen4_IOTV\Data\IOTV_Green_co.paa","Vests\Gen4_IOTV\Data\IOTV_Green_co.paa"};
		color = "Green";
	};
	class NULLED_Gen4_IOTV_Tan: NULLED_Gen4_IOTV_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"Vests\Gen4_IOTV\Data\IOTV_TAN_co.paa","Vests\Gen4_IOTV\Data\IOTV_TAN_co.paa","Vests\Gen4_IOTV\Data\IOTV_TAN_co.paa"};
		color = "Tan";
	};
	class NULLED_Gen4_IOTV_Ucp: NULLED_Gen4_IOTV_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"Vests\Gen4_IOTV\Data\IOTV_UCP_co.paa","Vests\Gen4_IOTV\Data\IOTV_UCP_co.paa","Vests\Gen4_IOTV\Data\IOTV_UCP_co.paa"};
	};
	class NULLED_Gen4_IOTV_Snow: NULLED_Gen4_IOTV_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"Vests\Gen4_IOTV\Data\IOTV_Snow_co.paa","Vests\Gen4_IOTV\Data\IOTV_Snow_co.paa","Vests\Gen4_IOTV\Data\IOTV_Snow_co.paa"};
		color = "Snow";
	};
	class NULLED_6B23_ColorBase: Clothing
	{
		scope = 0;
		displayName = "6B23";
		descriptionShort = "Main armored vest for personnel of combat units of the ground forces, airborne troops, marines, etc. The vest is designed to protect vital organs from being hit by firearms, shell fragments, mines, grenades, and cold weapons, reducing the severity of armor contusion injury when performing combat missions. Armor class 3";
		model = "Vests\6B23\6B23_g.p3d";
		dexterityModifier = -3;
		dexterityCondition = "true";
		inventorySlot[] = {"Vest"};
		itemInfo[] = {"Clothing","Vest"};
		attachments[] = {};
		weight = 12000;
		itemSize[] = {4,4};
		absorbency = 0.1;
		heatIsolation = 0.1;
		repairableWithKits[] = {3};
		repairCosts[] = {25.0};
		hiddenSelections[] = {"camofemale","camomale","camoground"};
		class ClothingTypes
		{
			male = "Vests\6B23\6B23.p3d";
			female = "Vests\6B23\6B23.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 150;
					healthLevels[] = {{1.0,{"DZ\characters\vests\Data\TacticalVest2.rvmat"}},{0.75,{"DZ\characters\vests\Data\TacticalVest2.rvmat"}},{0.5,{"DZ\characters\vests\Data\TacticalVest2_damage.rvmat"}},{0.25,{"DZ\characters\vests\Data\TacticalVest2_damage.rvmat"}},{0.0,{"DZ\characters\vests\Data\TacticalVest2_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.3;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.35;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.99;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.99;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.99;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.99;
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "SmershVest_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "SmershVest_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class NULLED_6B23_Black: NULLED_6B23_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"Vests\6B23\data\6B23Vest_black_co.paa","Vests\6B23\data\6B23Vest_black_co.paa","Vests\6B23\data\6B23Vest_black_co.paa"};
		color = "Black";
	};
	class NULLED_6B23_Green: NULLED_6B23_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"Vests\6B23\data\6B23Vest_green_co.paa","Vests\6B23\data\6B23Vest_green_co.paa","Vests\6B23\data\6B23Vest_green_co.paa"};
		color = "Green";
	};
	class NULLED_6B23_Tan: NULLED_6B23_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"Vests\6B23\data\6B23Vest_tan_co.paa","Vests\6B23\data\6B23Vest_tan_co.paa","Vests\6B23\data\6B23Vest_tan_co.paa"};
		color = "Tan";
	};
	class NULLED_6B23_Frog: NULLED_6B23_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"Vests\6B23\data\6B23Vest_frog_skin_co.paa","Vests\6B23\data\6B23Vest_frog_skin_co.paa","Vests\6B23\data\6B23Vest_frog_skin_co.paa"};
		color = "Snow";
	};
	class NULLED_6B23_Killa: NULLED_6B23_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"Vests\6B23\data\6B23Vest_killa_co.paa","Vests\6B23\data\6B23Vest_killa_co.paa","Vests\6B23\data\6B23Vest_killa_co.paa"};
		class DamageSystem
		{
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.3;
					};
				};
			};
		};
	};
	class NULLED_6B45_ColorBase: Clothing
	{
		scope = 0;
		displayName = "6B45";
		descriptionShort = "";
		model = "Vests\6B45\6B45_g.p3d";
		dexterityModifier = -3;
		dexterityCondition = "true";
		inventorySlot[] = {"Vest"};
		itemInfo[] = {"Clothing","Vest"};
		attachments[] = {"VestHolster","VestGrenadeA","VestGrenadeB","VestGrenadeC","VestGrenadeD"};
		weight = 12000;
		itemSize[] = {4,4};
		absorbency = 0.1;
		heatIsolation = 0.1;
		repairableWithKits[] = {3};
		repairCosts[] = {50.0};
		hiddenSelections[] = {"camofemale","camomale","camoground"};
		class ClothingTypes
		{
			male = "Vests\6B45\6B45.p3d";
			female = "Vests\6B45\6B45.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 150;
					healthLevels[] = {{1.0,{"DZ\characters\vests\Data\TacticalVest2.rvmat"}},{0.75,{"DZ\characters\vests\Data\TacticalVest2.rvmat"}},{0.5,{"DZ\characters\vests\Data\TacticalVest2_damage.rvmat"}},{0.25,{"DZ\characters\vests\Data\TacticalVest2_damage.rvmat"}},{0.0,{"DZ\characters\vests\Data\TacticalVest2_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.3;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.35;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.25;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.26;
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "SmershVest_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "SmershVest_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class NULLED_6B45_Black: NULLED_6B45_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"Vests\6B45\data\6B45Vest_black_co.paa","Vests\6B45\data\6B45Vest_black_co.paa","Vests\6B45\data\6B45Vest_black_co.paa"};
	};
	class NULLED_6B45_Green: NULLED_6B45_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"Vests\6B45\data\6B45Vest_green_co.paa","Vests\6B45\data\6B45Vest_green_co.paa","Vests\6B45\data\6B45Vest_green_co.paa"};
	};
	class NULLED_6B45_Tan: NULLED_6B45_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"Vests\6B45\data\6B45Vest_tan_co.paa","Vests\6B45\data\6B45Vest_tan_co.paa","Vests\6B45\data\6B45Vest_tan_co.paa"};
	};
	class NULLED_6B45_Multicam: NULLED_6B45_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"Vests\6B45\data\6B45Vest_multicam_co.paa","Vests\6B45\data\6B45Vest_multicam_co.paa","Vests\6B45\data\6B45Vest_multicam_co.paa"};
	};
	class NULLED_JPC_Vest_ColorBase: Clothing
	{
		scope = 0;
		displayName = "JPC Plate Carrier";
		descriptionShort = "Slightly weaker than a vanilla plate carrier. You can mount a IFAK and Map pouch on the sides.";
		model = "Vests\JPC\JPC_G.p3d";
		inventorySlot[] = {"Vest"};
		attachments[] = {"IFAK","Map_Pouch"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Vest"};
		weight = 2400;
		itemSize[] = {4,3};
		itemsCargoSize[] = {4,2};
		quickBarBonus = 3;
		varWetMax = 0.79;
		heatIsolation = 0.75;
		repairableWithKits[] = {3};
		repairCosts[] = {25.0};
		hiddenSelections[] = {"camofemale","camomale","camoground"};
		class ClothingTypes
		{
			male = "Vests\JPC\JPC.p3d";
			female = "Vests\JPC\JPC.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\characters\vests\Data\TacticalVest2.rvmat"}},{0.75,{"DZ\characters\vests\Data\TacticalVest2.rvmat"}},{0.5,{"DZ\characters\vests\Data\TacticalVest2_damage.rvmat"}},{0.25,{"DZ\characters\vests\Data\TacticalVest2_damage.rvmat"}},{0.0,{"DZ\characters\vests\Data\TacticalVest2_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.4;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.7;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.99;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.99;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.99;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.99;
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "Shirt_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "Shirt_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class NULLED_JPC_Vest_Black: NULLED_JPC_Vest_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"Vests\JPC\data\JPC\JPC_black_co.paa","Vests\JPC\data\JPC\JPC_black_co.paa","Vests\JPC\data\JPC\JPC_black_co.paa"};
		color = "Black";
	};
	class NULLED_JPC_Vest_Multicam: NULLED_JPC_Vest_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"Vests\JPC\data\JPC\JPC_camo_co.paa","Vests\JPC\data\JPC\JPC_camo_co.paa","Vests\JPC\data\JPC\JPC_camo_co.paa"};
	};
	class NULLED_JPC_Vest_Green: NULLED_JPC_Vest_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"Vests\JPC\data\JPC\JPC_green_co.paa","Vests\JPC\data\JPC\JPC_green_co.paa","Vests\JPC\data\JPC\JPC_green_co.paa"};
		color = "Green";
	};
	class NULLED_JPC_Vest_Tan: NULLED_JPC_Vest_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"Vests\JPC\data\JPC\JPC_tan_co.paa","Vests\JPC\data\JPC\JPC_tan_co.paa","Vests\JPC\data\JPC\JPC_tan_co.paa"};
		color = "Tan";
	};
	class NULLED_JPC_Vest_Snow: NULLED_JPC_Vest_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"Vests\JPC\data\JPC\JPC_Snow_co.paa","Vests\JPC\data\JPC\JPC_Snow_co.paa","Vests\JPC\data\JPC\JPC_Snow_co.paa"};
		color = "Snow";
	};
	class NULLED_Cage_Vest_ColorBase: Clothing
	{
		scope = 0;
		displayName = "Cage Plate Carrier";
		descriptionShort = "A plate carrier that exceeds in carrying capacity with 3 built in magazine slots. Accepts 6 standard mags, 2 IFAKs, 2 Map Pouches, and a Grenade Pouch.";
		model = "Vests\Crye_Cage_Vest\Crye_Cage_Vest_g.p3d";
		inventorySlot[] = {"Vest"};
		attachments[] = {"Mag1","Mag2","Mag3","Mag_Pouch1","Mag_Pouch2","Mag_Pouch3","WalkieTalkie","IFAK1","IFAK2","Gr_Pouch","Map_Pouch1","Map_Pouch2"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Vest"};
		weight = 2400;
		itemSize[] = {4,3};
		quickBarBonus = 1;
		varWetMax = 0.79;
		heatIsolation = 0.75;
		repairableWithKits[] = {3};
		repairCosts[] = {50.0};
		hiddenSelections[] = {"camofemale","camomale","camoground"};
		class ClothingTypes
		{
			male = "Vests\Crye_Cage_Vest\Crye_Cage_Vest.p3d";
			female = "Vests\Crye_Cage_Vest\Crye_Cage_Vest.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 150;
					healthLevels[] = {{1.0,{"DZ\characters\vests\Data\TacticalVest2.rvmat"}},{0.75,{"DZ\characters\vests\Data\TacticalVest2.rvmat"}},{0.5,{"DZ\characters\vests\Data\TacticalVest2_damage.rvmat"}},{0.25,{"DZ\characters\vests\Data\TacticalVest2_damage.rvmat"}},{0.0,{"DZ\characters\vests\Data\TacticalVest2_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.35;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.99;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.99;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.99;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.99;
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "Shirt_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "Shirt_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class NULLED_Cage_Vest_Black: NULLED_Cage_Vest_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"Vests\Crye_Cage_Vest\data\CryeCageVest_black_co.paa","Vests\Crye_Cage_Vest\data\CryeCageVest_black_co.paa","Vests\Crye_Cage_Vest\data\CryeCageVest_black_co.paa"};
		color = "Black";
	};
	class NULLED_Cage_Vest_Green: NULLED_Cage_Vest_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"Vests\Crye_Cage_Vest\data\CryeCageVest_green_co.paa","Vests\Crye_Cage_Vest\data\CryeCageVest_green_co.paa","Vests\Crye_Cage_Vest\data\CryeCageVest_green_co.paa"};
		color = "Green";
	};
	class NULLED_Cage_Vest_Tan: NULLED_Cage_Vest_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"Vests\Crye_Cage_Vest\data\CryeCageVest_tan_co.paa","Vests\Crye_Cage_Vest\data\CryeCageVest_tan_co.paa","Vests\Crye_Cage_Vest\data\CryeCageVest_tan_co.paa"};
		color = "Tan";
	};
	class NULLED_Cage_Vest_Snow: NULLED_Cage_Vest_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"Vests\Crye_Cage_Vest\data\CryeCageVest_snow_co.paa","Vests\Crye_Cage_Vest\data\CryeCageVest_snow_co.paa","Vests\Crye_Cage_Vest\data\CryeCageVest_snow_co.paa"};
		color = "Snow";
	};
	class NULLED_Emerson_Vest_Base: Clothing
	{
		scope = 0;
		displayName = "Emerson Plate Carrier";
		descriptionShort = "A lightweight plate carrier capable of carrying several mag pouches, an IFAK, Grenade Pouch, Personal Radio, Chemlight, and Map Pouch. A user would survive 3 rounds of 5.56 and even a 308 to the chest.";
		model = "Vests\Emerson_6094A_Vest\NAVY_SEALS_VEST_emerson_6094a_g.p3d";
		inventorySlot[] = {"Vest"};
		attachments[] = {"Mag_Pouch1","Mag_Pouch2","Mag_Pouch3","Chemlight","WalkieTalkie","IFAK","Gr_Pouch","Map_Pouch","Pistol_Pouch4"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Vest"};
		weight = 2400;
		itemSize[] = {4,3};
		itemsCargoSize[] = {7,5,2};
		quickBarBonus = 3;
		varWetMax = 0.79;
		heatIsolation = 0.75;
		repairableWithKits[] = {3};
		repairCosts[] = {25.0};
		hiddenSelections[] = {"camofemale","camomale","camoground"};
		class ClothingTypes
		{
			male = "Vests\Emerson_6094A_Vest\NAVY_SEALS_VEST_emerson_6094a.p3d";
			female = "Vests\Emerson_6094A_Vest\NAVY_SEALS_VEST_emerson_6094a.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 150;
					healthLevels[] = {{1.0,{"DZ\characters\vests\Data\TacticalVest2.rvmat"}},{0.75,{"DZ\characters\vests\Data\TacticalVest2.rvmat"}},{0.5,{"DZ\characters\vests\Data\TacticalVest2_damage.rvmat"}},{0.25,{"DZ\characters\vests\Data\TacticalVest2_damage.rvmat"}},{0.0,{"DZ\characters\vests\Data\TacticalVest2_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.3;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.35;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.99;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.99;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.99;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.99;
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "Shirt_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "Shirt_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class NULLED_Emerson_Vest_Multicam: NULLED_Emerson_Vest_Base
	{
		scope = 2;
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"Vests\Emerson_6094A_Vest\data\emerson_co.paa","Vests\Emerson_6094A_Vest\data\emerson_co.paa","Vests\Emerson_6094A_Vest\data\emerson_co.paa"};
		color = "Tan";
	};
	class NULLED_Emerson_Vest_Black: NULLED_Emerson_Vest_Base
	{
		scope = 2;
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"Vests\Emerson_6094A_Vest\data\emerson_black_co.paa","Vests\Emerson_6094A_Vest\data\emerson_black_co.paa","Vests\Emerson_6094A_Vest\data\emerson_black_co.paa"};
		color = "Black";
	};
	class NULLED_Emerson_Vest_Green: NULLED_Emerson_Vest_Base
	{
		scope = 2;
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"Vests\Emerson_6094A_Vest\data\emerson_Green_co.paa","Vests\Emerson_6094A_Vest\data\emerson_Green_co.paa","Vests\Emerson_6094A_Vest\data\emerson_Green_co.paa"};
		color = "Green";
	};
	class NULLED_Emerson_Vest_Snow: NULLED_Emerson_Vest_Base
	{
		scope = 2;
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"Vests\Emerson_6094A_Vest\data\emerson_snow_co.paa","Vests\Emerson_6094A_Vest\data\emerson_snow_co.paa","Vests\Emerson_6094A_Vest\data\emerson_snow_co.paa"};
		color = "Snow";
	};
	class PoliceVest: Clothing
	{
		class DamageSystem
		{
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.6;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.75;
					};
				};
			};
		};
	};
	class PressVest_ColorBase: Clothing
	{
		class DamageSystem
		{
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.75;
					};
				};
			};
		};
	};
};
