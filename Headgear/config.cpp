////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Mon Aug 14 16:30:52 2023 : 'file' last modified on Mon Aug 14 16:30:52 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class NULLED_Characters_Headgear
	{
		units[] = {"NULLED_FastMT_Colorbase","NULLED_FastMT_Black","NULLED_FastMT_Camo","NULLED_FastMT_Green","NULLED_FastMT_Tan","NULLED_FastMT_Snow","NULLED_6b47_Colorbase","NULLED_6b47_Green","NULLED_6b47_Black","NULLED_6b47_Tan","NULLED_ACH_Covered_Colorbase","NULLED_ACH_covered_Black","NULLED_ACH_covered_Desert","NULLED_ACH_covered_Green","NULLED_ACH_covered_Tan","NULLED_ACH_covered_UCP","NULLED_Altyn_Colorbase","NULLED_Altyn_Green","NULLED_Dominator_Colorbase","NULLED_Dominator_Green","NULLED_Dominator_Grey","NULLED_Dominator_Tan","NULLED_Dominator_Woodland","NULLED_Dominator_Flecktarn","NULLED_Dominator_Urban","NULLED_Dominator_Snow","NULLED_Gentex_SPH_5_Colorbase","NULLED_Maska_Colorbase","NULLED_Maska_Green","NULLED_Maska_Black","NULLED_Maska_Killa","NULLED_Fleece_Hood_Blue","NULLED_Fleece_Hood_Green","NULLED_Fleece_Hood_Tan","NULLED_Fleece_Hood_White","NULLED_Cap_Grey","NULLED_Cap_UCP","NULLED_Cap_Tan","NULLED_Cap_Green","NULLED_Cap_Multicam","NULLED_Fabric_Hat_Black","NULLED_Fabric_Hat_Brown","NULLED_Fabric_Hat_Green","NULLED_Fleece_Hat_Black","NULLED_Fleece_Hat_Tan","NULLED_Fleece_Hat_Green","NULLED_BalaclavaMask_Black","NULLED_Boonie_Black","NULLED_Boonie_Flecktarn","NULLED_Boonie_Green","NULLED_Boonie_Multicam","NULLED_Boonie_Tan","NULLED_Boonie_Urban","NULLED_FastMT_Visor","NULLED_MandoVisor_Base","NULLED_MandoVisor_Green","NULLED_MandoVisor_Black","NULLED_MandoVisor_Tan","NULLED_MandoVisor_Snow","NULLED_OPS_CORE_SENTRY_Mandible","NULLED_SENTRY_Mandible_Green","NULLED_SENTRY_Mandible_Tan","NULLED_SENTRY_Mandible_Flecktarn","NULLED_SENTRY_Mandible_Grey","NULLED_SENTRY_Mandible_Woodland","NULLED_SENTRY_Mandible_Urban","NULLED_Light_Visor","NULLED_Fast_Mandible","NULLED_Fast_Mandible_Green","NULLED_Fast_Mandible_Black","NULLED_Fast_Mandible_Tan","NULLED_Altyn_Visor","NULLED_Fast_Chops_Base","NULLED_Fast_Chops_Green","NULLED_Fast_Chops_Black","NULLED_Fast_Chops_Tan","NULLED_Fast_Chops_Camo","NULLED_Maska_Visor","NULLED_Maska_Visor_Green","NULLED_Maska_Visor_Black","NULLED_Maska_Visor_Killa","NULLED_Combat_Headset","NULLED_Combat_Headset_Black","NULLED_Combat_Headset_Green","NULLED_Combat_Headset_Tan"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters_Headgear","DZ_Characters_Masks","Slots"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Mich2001Helmet;
	class GorkaHelmet;
	class NULLED_FastMT_Colorbase: Mich2001Helmet
	{
		scope = 2;
		displayName = "Fast MT";
		descriptionShort = "Fast MT";
		model = "Headgear\FastMT\FastMT_g.p3d";
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
		inventorySlot[] = {"Headgear"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		attachments[] = {"NVG","helmetFlashlight","Fast_Visor","Fast_Ears"};
		rotationFlags = 2;
		weight = 1200;
		itemSize[] = {4,3};
		noMask = 0;
		varWetMax = 0.249;
		heatIsolation = 0.25;
		visibilityModifier = 0.95;
		headSelectionsToHide[] = {"Clipping_Mich2001"};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\characters\headgear\data\mich2001.rvmat","DZ\characters\headgear\data\mich2001_rail.rvmat"}},{0.7,{"DZ\characters\headgear\data\mich2001.rvmat","DZ\characters\headgear\data\mich2001_rail.rvmat"}},{0.5,{"DZ\characters\headgear\data\mich2001_damage.rvmat","DZ\characters\headgear\data\mich2001_rail_damage.rvmat"}},{0.3,{"DZ\characters\headgear\data\mich2001_damage.rvmat","DZ\characters\headgear\data\mich2001_rail_damage.rvmat"}},{0.0,{"DZ\characters\headgear\data\mich2001_destruct.rvmat","DZ\characters\headgear\data\mich2001_rail_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.45;
					};
					class Blood
					{
						damage = 0.0;
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
						damage = 0.25;
					};
					class Blood
					{
						damage = 0.0;
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
						damage = 0.0;
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
						damage = 0.99;
					};
					class Blood
					{
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.99;
					};
				};
			};
		};
		class ClothingTypes
		{
			male = "Headgear\FastMT\FastMT.p3d";
			female = "Headgear\FastMT\FastMT.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "pickUpPot_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "BallisticHelmet_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class NULLED_FastMT_Black: NULLED_FastMT_Colorbase
	{
		scope = 2;
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"Headgear\FastMT\data\FastMT_Black_co.paa","Headgear\FastMT\data\FastMT_Black_co.paa","Headgear\FastMT\data\FastMT_Black_co.paa"};
		color = "Black";
	};
	class NULLED_FastMT_Camo: NULLED_FastMT_Colorbase
	{
		scope = 2;
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"Headgear\FastMT\data\FastMT_CAMO_co.paa","Headgear\FastMT\data\FastMT_CAMO_co.paa","Headgear\FastMT\data\FastMT_CAMO_co.paa"};
	};
	class NULLED_FastMT_Green: NULLED_FastMT_Colorbase
	{
		scope = 2;
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"Headgear\FastMT\data\FastMT_GREEN_co.paa","Headgear\FastMT\data\FastMT_GREEN_co.paa","Headgear\FastMT\data\FastMT_GREEN_co.paa"};
		color = "Green";
	};
	class NULLED_FastMT_Tan: NULLED_FastMT_Colorbase
	{
		scope = 2;
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"Headgear\FastMT\data\FastMT_Tan_co.paa","Headgear\FastMT\data\FastMT_Tan_co.paa","Headgear\FastMT\data\FastMT_Tan_co.paa"};
		color = "Tan";
	};
	class NULLED_FastMT_Snow: NULLED_FastMT_Colorbase
	{
		scope = 2;
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"Headgear\FastMT\data\FastMT_Snow_co.paa","Headgear\FastMT\data\FastMT_Snow_co.paa","Headgear\FastMT\data\FastMT_Snow_co.paa"};
		color = "Snow";
	};
	class NULLED_6b47_Colorbase: Mich2001Helmet
	{
		scope = 2;
		displayName = "6B47 Ratnik-BSh";
		descriptionShort = "Main Ballistic helmet of a Russian army.";
		model = "Headgear\6b47\6b47_g.p3d";
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
		inventorySlot[] = {"Headgear"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		attachments[] = {"NVG","helmetFlashlight"};
		rotationFlags = 2;
		weight = 1200;
		itemSize[] = {4,3};
		noMask = 0;
		varWetMax = 0.249;
		heatIsolation = 0.25;
		visibilityModifier = 0.95;
		headSelectionsToHide[] = {"Clipping_Mich2001"};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\characters\headgear\data\mich2001.rvmat","DZ\characters\headgear\data\mich2001_rail.rvmat"}},{0.7,{"DZ\characters\headgear\data\mich2001.rvmat","DZ\characters\headgear\data\mich2001_rail.rvmat"}},{0.5,{"DZ\characters\headgear\data\mich2001_damage.rvmat","DZ\characters\headgear\data\mich2001_rail_damage.rvmat"}},{0.3,{"DZ\characters\headgear\data\mich2001_damage.rvmat","DZ\characters\headgear\data\mich2001_rail_damage.rvmat"}},{0.0,{"DZ\characters\headgear\data\mich2001_destruct.rvmat","DZ\characters\headgear\data\mich2001_rail_destruct.rvmat"}}};
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
						damage = 0.0;
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
						damage = 0.25;
					};
					class Blood
					{
						damage = 0.0;
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
						damage = 0.0;
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
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.26;
					};
				};
			};
		};
		class ClothingTypes
		{
			male = "Headgear\6b47\6b47.p3d";
			female = "Headgear\6b47\6b47.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "pickUpPot_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "BallisticHelmet_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class NULLED_6b47_Green: NULLED_6b47_Colorbase
	{
		scope = 2;
		displayName = "6B47 Ratnik-BSh - Green";
		descriptionShort = "Main Ballistic helmet of a Russian army.";
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"Headgear\6b47\Data\Helmet_Green_co.paa","Headgear\6b47\Data\Helmet_Green_co.paa","Headgear\6b47\Data\Helmet_Green_co.paa"};
	};
	class NULLED_6b47_Black: NULLED_6b47_Colorbase
	{
		scope = 2;
		displayName = "6B47 Ratnik-BSh - Black";
		descriptionShort = "Main Ballistic helmet of a Russian army.";
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"Headgear\6b47\Data\Helmet_Black_co.paa","Headgear\6b47\Data\Helmet_Black_co.paa","Headgear\6b47\Data\Helmet_Black_co.paa"};
	};
	class NULLED_6b47_Tan: NULLED_6b47_Colorbase
	{
		scope = 2;
		displayName = "6B47 Ratnik-BSh - Tan";
		descriptionShort = "Main Ballistic helmet of a Russian army.";
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"Headgear\6b47\Data\Helmet_Tan_co.paa","Headgear\6b47\Data\Helmet_Tan_co.paa","Headgear\6b47\Data\Helmet_Tan_co.paa"};
	};
	class NULLED_ACH_Covered_Colorbase: Mich2001Helmet
	{
		scope = 2;
		displayName = "ACH_Covered";
		descriptionShort = "ACH_Covered";
		model = "Headgear\ACH_Covered\ACH_Covered_g.p3d";
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
		inventorySlot[] = {"Headgear"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		attachments[] = {"NVG","helmetFlashlight"};
		rotationFlags = 2;
		weight = 1200;
		itemSize[] = {4,3};
		noMask = 0;
		varWetMax = 0.249;
		heatIsolation = 0.25;
		visibilityModifier = 0.95;
		headSelectionsToHide[] = {"Clipping_Mich2001"};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\characters\headgear\data\mich2001.rvmat","DZ\characters\headgear\data\mich2001_rail.rvmat"}},{0.7,{"DZ\characters\headgear\data\mich2001.rvmat","DZ\characters\headgear\data\mich2001_rail.rvmat"}},{0.5,{"DZ\characters\headgear\data\mich2001_damage.rvmat","DZ\characters\headgear\data\mich2001_rail_damage.rvmat"}},{0.3,{"DZ\characters\headgear\data\mich2001_damage.rvmat","DZ\characters\headgear\data\mich2001_rail_damage.rvmat"}},{0.0,{"DZ\characters\headgear\data\mich2001_destruct.rvmat","DZ\characters\headgear\data\mich2001_rail_destruct.rvmat"}}};
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
						damage = 0.0;
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
						damage = 0.25;
					};
					class Blood
					{
						damage = 0.0;
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
						damage = 0.0;
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
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.26;
					};
				};
			};
		};
		class ClothingTypes
		{
			male = "Headgear\ACH_Covered\ACH_Covered.p3d";
			female = "Headgear\ACH_Covered\ACH_Covered.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "pickUpPot_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "BallisticHelmet_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class NULLED_ACH_covered_Black: NULLED_ACH_Covered_Colorbase
	{
		scope = 2;
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"Headgear\ACH_covered\Data\ach_black_co.paa","Headgear\ACH_covered\Data\ach_black_co.paa","Headgear\ACH_covered\Data\ach_black_co.paa"};
	};
	class NULLED_ACH_covered_Desert: NULLED_ACH_Covered_Colorbase
	{
		scope = 2;
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"Headgear\ACH_covered\Data\ach_desert_co.paa","Headgear\ACH_covered\Data\ach_desert_co.paa","Headgear\ACH_covered\Data\ach_desert_co.paa"};
	};
	class NULLED_ACH_covered_Green: NULLED_ACH_Covered_Colorbase
	{
		scope = 2;
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"Headgear\ACH_covered\Data\ach_green_co.paa","Headgear\ACH_covered\Data\ach_green_co.paa","Headgear\ACH_covered\Data\ach_green_co.paa"};
	};
	class NULLED_ACH_covered_Tan: NULLED_ACH_Covered_Colorbase
	{
		scope = 2;
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"Headgear\ACH_covered\Data\ach_tan_co.paa","Headgear\ACH_covered\Data\ach_tan_co.paa","Headgear\ACH_covered\Data\ach_tan_co.paa"};
	};
	class NULLED_ACH_covered_UCP: NULLED_ACH_Covered_Colorbase
	{
		scope = 2;
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"Headgear\ACH_covered\Data\ach_ucp_co.paa","Headgear\ACH_covered\Data\ach_ucp_co.paa","Headgear\ACH_covered\Data\ach_ucp_co.paa"};
	};
	class NULLED_Altyn_Colorbase: GorkaHelmet
	{
		scope = 2;
		displayName = "Altyn helmet";
		descriptionShort = "Altyn passed real combat tests in Afghanistan and Chechnya and is still in service with the Ministry of Internal Affairs of the Russian Federation and the army special forces. The installation of an armored visor shield is possible.";
		model = "Headgear\Altyn\Altyn_g.p3d";
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
		inventorySlot[] = {"Headgear"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		attachments[] = {"Altyn_Visor"};
		rotationFlags = 2;
		weight = 1200;
		itemSize[] = {4,3};
		noMask = 0;
		varWetMax = 0.249;
		heatIsolation = 0.25;
		visibilityModifier = 0.95;
		headSelectionsToHide[] = {"Clipping_Mich2001"};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"DZ\characters\headgear\data\mich2001.rvmat","DZ\characters\headgear\data\mich2001_rail.rvmat"}},{0.8,{"DZ\characters\headgear\data\mich2001.rvmat","DZ\characters\headgear\data\mich2001_rail.rvmat"}},{0.5,{"DZ\characters\headgear\data\mich2001_damage.rvmat","DZ\characters\headgear\data\mich2001_rail_damage.rvmat"}},{0.3,{"DZ\characters\headgear\data\mich2001_damage.rvmat","DZ\characters\headgear\data\mich2001_rail_damage.rvmat"}},{0.0,{"DZ\characters\headgear\data\mich2001_destruct.rvmat","DZ\characters\headgear\data\mich2001_rail_destruct.rvmat"}}};
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
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.15;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.1;
					};
					class Blood
					{
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.1;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.1;
					};
					class Blood
					{
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.1;
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
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.26;
					};
				};
			};
		};
		class ClothingTypes
		{
			male = "Headgear\Altyn\Altyn.p3d";
			female = "Headgear\Altyn\Altyn.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "pickUpPot_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "BallisticHelmet_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class NULLED_Altyn_Green: NULLED_Altyn_Colorbase
	{
		scope = 2;
		displayName = "Altyn helmet - Green";
		descriptionShort = "Altyn passed real combat tests in Afghanistan and Chechnya and is still in service with the Ministry of Internal Affairs of the Russian Federation and the army special forces. The installation of an armored visor shield is possible.";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"Headgear\Altyn\data\Altyn_green_ca.paa","Headgear\Altyn\data\Altyn_green_ca.paa","Headgear\Altyn\data\Altyn_green_ca.paa"};
	};
	class NULLED_Dominator_Colorbase: Mich2001Helmet
	{
		scope = 2;
		displayName = "Dominator";
		descriptionShort = "Dominator";
		model = "Headgear\Dominator\Dominator_g.p3d";
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
		inventorySlot[] = {"Headgear"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		attachments[] = {"NVG","helmetFlashlight","SENTRY_Mandible"};
		rotationFlags = 2;
		weight = 1200;
		itemSize[] = {4,3};
		noMask = 0;
		varWetMax = 0.249;
		heatIsolation = 0.25;
		visibilityModifier = 0.95;
		headSelectionsToHide[] = {"Clipping_Mich2001"};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\characters\headgear\data\mich2001.rvmat","DZ\characters\headgear\data\mich2001_rail.rvmat"}},{0.7,{"DZ\characters\headgear\data\mich2001.rvmat","DZ\characters\headgear\data\mich2001_rail.rvmat"}},{0.5,{"DZ\characters\headgear\data\mich2001_damage.rvmat","DZ\characters\headgear\data\mich2001_rail_damage.rvmat"}},{0.3,{"DZ\characters\headgear\data\mich2001_damage.rvmat","DZ\characters\headgear\data\mich2001_rail_damage.rvmat"}},{0.0,{"DZ\characters\headgear\data\mich2001_destruct.rvmat","DZ\characters\headgear\data\mich2001_rail_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.45;
					};
					class Blood
					{
						damage = 0.0;
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
						damage = 0.25;
					};
					class Blood
					{
						damage = 0.0;
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
						damage = 0.0;
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
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.26;
					};
				};
			};
		};
		class ClothingTypes
		{
			male = "Headgear\Dominator\Dominator.p3d";
			female = "Headgear\Dominator\Dominator.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "pickUpPot_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "BallisticHelmet_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class NULLED_Dominator_Green: NULLED_Dominator_Colorbase
	{
		scope = 2;
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"Headgear\Dominator\Data\Dominator2_Green_co.paa","Headgear\Dominator\Data\Dominator2_Green_co.paa","Headgear\Dominator\Data\Dominator2_Green_co.paa"};
		color = "Green";
	};
	class NULLED_Dominator_Grey: NULLED_Dominator_Colorbase
	{
		scope = 2;
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"Headgear\Dominator\Data\Dominator2_Grey_co.paa","Headgear\Dominator\Data\Dominator2_Grey_co.paa","Headgear\Dominator\Data\Dominator2_Grey_co.paa"};
		color = "Black";
	};
	class NULLED_Dominator_Tan: NULLED_Dominator_Colorbase
	{
		scope = 2;
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"Headgear\Dominator\Data\Dominator2_Tan_co.paa","Headgear\Dominator\Data\Dominator2_Tan_co.paa","Headgear\Dominator\Data\Dominator2_Tan_co.paa"};
		color = "Tan";
	};
	class NULLED_Dominator_Woodland: NULLED_Dominator_Colorbase
	{
		scope = 2;
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"Headgear\Dominator\Data\Dominator2_WD_co.paa","Headgear\Dominator\Data\Dominator2_WD_co.paa","Headgear\Dominator\Data\Dominator2_WD_co.paa"};
	};
	class NULLED_Dominator_Flecktarn: NULLED_Dominator_Colorbase
	{
		scope = 2;
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"Headgear\Dominator\Data\Dominator2_Flecktarn_co.paa","Headgear\Dominator\Data\Dominator2_Flecktarn_co.paa","Headgear\Dominator\Data\Dominator2_Flecktarn_co.paa"};
	};
	class NULLED_Dominator_Urban: NULLED_Dominator_Colorbase
	{
		scope = 2;
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"Headgear\Dominator\Data\Dominator2_Urban_co.paa","Headgear\Dominator\Data\Dominator2_Urban_co.paa","Headgear\Dominator\Data\Dominator2_Urban_co.paa"};
	};
	class NULLED_Dominator_Snow: NULLED_Dominator_Colorbase
	{
		scope = 2;
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"Headgear\Dominator\Data\Dominator2_Urban_co.paa","Headgear\Dominator\Data\Dominator2_Urban_co.paa","Headgear\Dominator\Data\Dominator2_Urban_co.paa"};
		color = "Snow";
	};
	class NULLED_Gentex_SPH_5_Colorbase: Mich2001Helmet
	{
		scope = 2;
		displayName = "Gentex_SPH_5";
		descriptionShort = "Gentex_SPH_5";
		model = "Headgear\Gentex_SPH_5\Gentex_SPH_5_Open.p3d";
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
		inventorySlot[] = {"Headgear"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		attachments[] = {"NVG","helmetFlashlight"};
		rotationFlags = 2;
		weight = 1200;
		itemSize[] = {4,3};
		noMask = 0;
		varWetMax = 0.249;
		heatIsolation = 0.25;
		visibilityModifier = 0.95;
		headSelectionsToHide[] = {"Clipping_Mich2001"};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\characters\headgear\data\mich2001.rvmat","DZ\characters\headgear\data\mich2001_rail.rvmat"}},{0.7,{"DZ\characters\headgear\data\mich2001.rvmat","DZ\characters\headgear\data\mich2001_rail.rvmat"}},{0.5,{"DZ\characters\headgear\data\mich2001_damage.rvmat","DZ\characters\headgear\data\mich2001_rail_damage.rvmat"}},{0.3,{"DZ\characters\headgear\data\mich2001_damage.rvmat","DZ\characters\headgear\data\mich2001_rail_damage.rvmat"}},{0.0,{"DZ\characters\headgear\data\mich2001_destruct.rvmat","DZ\characters\headgear\data\mich2001_rail_destruct.rvmat"}}};
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
						damage = 0.0;
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
						damage = 0.25;
					};
					class Blood
					{
						damage = 0.0;
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
						damage = 0.0;
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
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.26;
					};
				};
			};
		};
		class ClothingTypes
		{
			male = "Headgear\Gentex_SPH_5\Gentex_SPH_5_Open.p3d";
			female = "Headgear\Gentex_SPH_5\Gentex_SPH_5_Open.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "pickUpPot_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "BallisticHelmet_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class NULLED_Maska_Colorbase: GorkaHelmet
	{
		scope = 2;
		displayName = "Maska 1Sch helmet";
		descriptionShort = "Protective helmet Maska-1 appeared in service in 1991, as a replacement for the Sphere helmet. Class Level 6. Ricochet chance Medium";
		model = "Headgear\zsh1_m2\zsh1_m2_g.p3d";
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
		inventorySlot[] = {"Headgear"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		attachments[] = {"Maska_Visor"};
		rotationFlags = 2;
		weight = 1200;
		itemSize[] = {4,3};
		noMask = 0;
		varWetMax = 0.249;
		heatIsolation = 0.25;
		visibilityModifier = 0.95;
		headSelectionsToHide[] = {"Clipping_Mich2001"};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\characters\headgear\data\mich2001.rvmat","DZ\characters\headgear\data\mich2001_rail.rvmat"}},{0.7,{"DZ\characters\headgear\data\mich2001.rvmat","DZ\characters\headgear\data\mich2001_rail.rvmat"}},{0.5,{"DZ\characters\headgear\data\mich2001_damage.rvmat","DZ\characters\headgear\data\mich2001_rail_damage.rvmat"}},{0.3,{"DZ\characters\headgear\data\mich2001_damage.rvmat","DZ\characters\headgear\data\mich2001_rail_damage.rvmat"}},{0.0,{"DZ\characters\headgear\data\mich2001_destruct.rvmat","DZ\characters\headgear\data\mich2001_rail_destruct.rvmat"}}};
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
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.1;
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
						damage = 0.0;
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
						damage = 0.0;
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
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.26;
					};
				};
			};
		};
		class ClothingTypes
		{
			male = "Headgear\zsh1_m2\zsh1_m2.p3d";
			female = "Headgear\zsh1_m2\zsh1_m2.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "pickUpPot_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "BallisticHelmet_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class NULLED_Maska_Green: NULLED_Maska_Colorbase
	{
		scope = 2;
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"Headgear\zsh1_m2\data\lambert1_co.paa","Headgear\zsh1_m2\data\lambert1_co.paa","Headgear\zsh1_m2\data\lambert1_co.paa"};
		color = "Green";
	};
	class NULLED_Maska_Black: NULLED_Maska_Colorbase
	{
		scope = 2;
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"Headgear\zsh1_m2\data\lambert1_black_co.paa","Headgear\zsh1_m2\data\lambert1_black_co.paa","Headgear\zsh1_m2\data\lambert1_black_co.paa"};
		color = "Black";
	};
	class NULLED_Maska_Killa: NULLED_Maska_Colorbase
	{
		scope = 2;
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"Headgear\zsh1_m2\data\lambert1_killa_co.paa","Headgear\zsh1_m2\data\lambert1_killa_co.paa","Headgear\zsh1_m2\data\lambert1_killa_co.paa"};
	};
	class BalaclavaMask_ColorBase;
	class NULLED_Fleece_Hood_ColorBase: BalaclavaMask_ColorBase
	{
		displayName = "Fleece Hood";
		descriptionShort = "A Fleece Hood, Keeps you warm on a cold night.";
		model = "Headgear\Fleece_Hood\Fleece_Hood_g.p3d";
		inventorySlot[] = {"Headgear"};
		itemInfo[] = {"Clothing","Headgear"};
		rotationFlags = 1;
		weight = 130;
		itemSize[] = {3,2};
		ragQuantity = 1;
		varWetMax = 1.0;
		heatIsolation = 1;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		headSelectionsToHide[] = {"Clipping_Balaclava"};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\characters\masks\data\Balaclava.rvmat"}},{0.7,{"DZ\characters\masks\data\Balaclava.rvmat"}},{0.5,{"DZ\characters\masks\data\Balaclava_damage.rvmat"}},{0.3,{"DZ\characters\masks\data\Balaclava_damage.rvmat"}},{0.0,{"DZ\characters\masks\data\Balaclava_destruct.rvmat"}}};
				};
			};
		};
		class ClothingTypes
		{
			male = "Headgear\Fleece_Hood\Fleece_Hood.p3d";
			female = "Headgear\Fleece_Hood\Fleece_Hood.p3d";
		};
		class Protection
		{
			biological = 0.25;
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
	class NULLED_Fleece_Hood_Blue: NULLED_Fleece_Hood_ColorBase
	{
		scope = 2;
		displayName = "Fleece Hood - Blue";
		descriptionShort = "A Blue Fleece Hood, Keeps you warm on a cold night.";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"Headgear\Fleece_Hood\data\Hood_Blue_co.paa","Headgear\Fleece_Hood\data\Hood_Blue_co.paa","Headgear\Fleece_Hood\data\Hood_Blue_co.paa"};
	};
	class NULLED_Fleece_Hood_Green: NULLED_Fleece_Hood_ColorBase
	{
		scope = 2;
		displayName = "Fleece Hood - Green";
		descriptionShort = "A Green Fleece Hood, Keeps you warm on a cold night.";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"Headgear\Fleece_Hood\data\Hood_Green_co.paa","Headgear\Fleece_Hood\data\Hood_Green_co.paa","Headgear\Fleece_Hood\data\Hood_Green_co.paa"};
	};
	class NULLED_Fleece_Hood_Tan: NULLED_Fleece_Hood_ColorBase
	{
		scope = 2;
		displayName = "Fleece Hood - Tan";
		descriptionShort = "A Tan Fleece Hood, Keeps you warm on a cold night.";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"Headgear\Fleece_Hood\data\Hood_Tan_co.paa","Headgear\Fleece_Hood\data\Hood_Tan_co.paa","Headgear\Fleece_Hood\data\Hood_Tan_co.paa"};
	};
	class NULLED_Fleece_Hood_White: NULLED_Fleece_Hood_ColorBase
	{
		scope = 2;
		displayName = "Fleece Hood - White";
		descriptionShort = "A White Fleece Hood, Keeps you warm on a cold night.";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"Headgear\Fleece_Hood\data\Hood_White_co.paa","Headgear\Fleece_Hood\data\Hood_White_co.paa","Headgear\Fleece_Hood\data\Hood_White_co.paa"};
	};
	class NULLED_Cap_ColorBase: BalaclavaMask_ColorBase
	{
		displayName = "USEC baseball cap";
		descriptionShort = "United Security baseball cap";
		model = "Headgear\Cap\cap_g.p3d";
		inventorySlot[] = {"Headgear"};
		itemInfo[] = {"Clothing","Headgear"};
		rotationFlags = 1;
		weight = 130;
		itemSize[] = {3,2};
		ragQuantity = 1;
		varWetMax = 1.0;
		heatIsolation = 1;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		headSelectionsToHide[] = {"Clipping_Balaclava"};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\characters\masks\data\Balaclava.rvmat"}},{0.7,{"DZ\characters\masks\data\Balaclava.rvmat"}},{0.5,{"DZ\characters\masks\data\Balaclava_damage.rvmat"}},{0.3,{"DZ\characters\masks\data\Balaclava_damage.rvmat"}},{0.0,{"DZ\characters\masks\data\Balaclava_destruct.rvmat"}}};
				};
			};
		};
		class ClothingTypes
		{
			male = "Headgear\Cap\cap.p3d";
			female = "Headgear\Cap\cap.p3d";
		};
		class Protection
		{
			biological = 0.25;
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
	class NULLED_Cap_Grey: NULLED_Cap_ColorBase
	{
		scope = 2;
		displayName = "USEC baseball cap";
		descriptionShort = "United Security baseball cap with a pattern labeled on the tag: Grey.";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"Headgear\Cap\data\Cap_Grey_co.paa","Headgear\Cap\data\Cap_Grey_co.paa","Headgear\Cap\data\Cap_Grey_co.paa"};
	};
	class NULLED_Cap_UCP: NULLED_Cap_ColorBase
	{
		scope = 2;
		displayName = "USEC baseball cap";
		descriptionShort = "United Security baseball cap with a pattern labeled on the tag: UCP.";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"Headgear\Cap\data\Cap_UCP_co.paa","Headgear\Cap\data\Cap_UCP_co.paa","Headgear\Cap\data\Cap_UCP_co.paa"};
	};
	class NULLED_Cap_Tan: NULLED_Cap_ColorBase
	{
		scope = 2;
		displayName = "USEC baseball cap";
		descriptionShort = "United Security baseball cap with a pattern labeled on the tag: Tan.";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"Headgear\Cap\data\Cap_Tan_co.paa","Headgear\Cap\data\Cap_Tan_co.paa","Headgear\Cap\data\Cap_Tan_co.paa"};
	};
	class NULLED_Cap_Green: NULLED_Cap_ColorBase
	{
		scope = 2;
		displayName = "USEC baseball cap";
		descriptionShort = "United Security baseball cap with a pattern labeled on the tag: Green.";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"Headgear\Cap\data\Cap_Green_co.paa","Headgear\Cap\data\Cap_Green_co.paa","Headgear\Cap\data\Cap_Green_co.paa"};
	};
	class NULLED_Cap_Multicam: NULLED_Cap_ColorBase
	{
		scope = 2;
		displayName = "USEC baseball cap";
		descriptionShort = "United Security baseball cap with a pattern labeled on the tag: Multicam.";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"Headgear\Cap\data\Cap_Multicam_co.paa","Headgear\Cap\data\Cap_Multicam_co.paa","Headgear\Cap\data\Cap_Multicam_co.paa"};
	};
	class NULLED_Fleece_Hat_ColorBase: BalaclavaMask_ColorBase
	{
		displayName = "";
		descriptionShort = "";
		model = "Headgear\Fleece_Hat\Fleece_Hat_g.p3d";
		inventorySlot[] = {"Headgear"};
		itemInfo[] = {"Clothing","Headgear"};
		rotationFlags = 1;
		weight = 130;
		itemSize[] = {3,2};
		ragQuantity = 1;
		varWetMax = 1.0;
		heatIsolation = 1;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		headSelectionsToHide[] = {"Clipping_Balaclava"};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\characters\masks\data\Balaclava.rvmat"}},{0.7,{"DZ\characters\masks\data\Balaclava.rvmat"}},{0.5,{"DZ\characters\masks\data\Balaclava_damage.rvmat"}},{0.3,{"DZ\characters\masks\data\Balaclava_damage.rvmat"}},{0.0,{"DZ\characters\masks\data\Balaclava_destruct.rvmat"}}};
				};
			};
		};
		class ClothingTypes
		{
			male = "Headgear\Fleece_Hat\Fleece_Hat.p3d";
			female = "Headgear\Fleece_Hat\Fleece_Hat.p3d";
		};
		class Protection
		{
			biological = 0.25;
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
	class NULLED_Fabric_Hat_Black: NULLED_Fleece_Hat_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.85;
		displayName = "Fabric Hat Black";
		descriptionShort = "A Black Fabric Hat, Keeps you warm on a cold night.";
		hiddenSelectionsTextures[] = {"Headgear\Fleece_Hat\data\Fabric\Fabric_Black_co.paa","Headgear\Fleece_Hat\data\Fabric\Fabric_Black_co.paa","Headgear\Fleece_Hat\data\Fabric\Fabric_Black_co.paa"};
		hiddenSelectionsMaterials[] = {"Headgear\Fleece_Hat\data\Fabric\Fabric.rvmat","Headgear\Fleece_Hat\data\Fabric\Fabric.rvmat","Headgear\Fleece_Hat\data\Fabric\Fabric.rvmat"};
	};
	class NULLED_Fabric_Hat_Brown: NULLED_Fleece_Hat_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.85;
		displayName = "Fabric Hat Brown";
		descriptionShort = "A Brown Fabric Hat, Keeps you warm on a cold night.";
		hiddenSelectionsTextures[] = {"Headgear\Fleece_Hat\data\Fabric\Fabric_Brown_co.paa","Headgear\Fleece_Hat\data\Fabric\Fabric_Brown_co.paa","Headgear\Fleece_Hat\data\Fabric\Fabric_Brown_co.paa"};
		hiddenSelectionsMaterials[] = {"Headgear\Fleece_Hat\data\Fabric\Fabric.rvmat","Headgear\Fleece_Hat\data\Fabric\Fabric.rvmat","Headgear\Fleece_Hat\data\Fabric\Fabric.rvmat"};
	};
	class NULLED_Fabric_Hat_Green: NULLED_Fleece_Hat_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.85;
		displayName = "Fabric Hat Green";
		descriptionShort = "A Green Fabric Hat, Keeps you warm on a cold night.";
		hiddenSelectionsTextures[] = {"Headgear\Fleece_Hat\data\Fabric\Fabric_Green_co.paa","Headgear\Fleece_Hat\data\Fabric\Fabric_Green_co.paa","Headgear\Fleece_Hat\data\Fabric\Fabric_Green_co.paa"};
		hiddenSelectionsMaterials[] = {"Headgear\Fleece_Hat\data\Fabric\Fabric.rvmat","Headgear\Fleece_Hat\data\Fabric\Fabric.rvmat","Headgear\Fleece_Hat\data\Fabric\Fabric.rvmat"};
	};
	class NULLED_Fleece_Hat_Black: NULLED_Fleece_Hat_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.85;
		displayName = "Fleece Hat Black";
		descriptionShort = "A Black Fleece Hat, Keeps you warm on a cold night.";
		hiddenSelectionsTextures[] = {"Headgear\Fleece_Hat\data\Fleece\Fleece_Black_co.paa","Headgear\Fleece_Hat\data\Fleece\Fleece_Black_co.paa","Headgear\Fleece_Hat\data\Fleece\Fleece_Black_co.paa"};
		hiddenSelectionsMaterials[] = {"Headgear\Fleece_Hat\data\Fleece\Fleece.rvmat","Headgear\Fleece_Hat\data\Fleece\Fleece.rvmat","Headgear\Fleece_Hat\data\Fleece\Fleece.rvmat"};
	};
	class NULLED_Fleece_Hat_Tan: NULLED_Fleece_Hat_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.85;
		displayName = "Fleece Hat Tan";
		descriptionShort = "A Brown Fleece Hat, Keeps you warm on a cold night.";
		hiddenSelectionsTextures[] = {"Headgear\Fleece_Hat\data\Fleece\Fleece_Tan_co.paa","Headgear\Fleece_Hat\data\Fleece\Fleece_Tan_co.paa","Headgear\Fleece_Hat\data\Fleece\Fleece_Tan_co.paa"};
		hiddenSelectionsMaterials[] = {"Headgear\Fleece_Hat\data\Fleece\Fleece.rvmat","Headgear\Fleece_Hat\data\Fleece\Fleece.rvmat","Headgear\Fleece_Hat\data\Fleece\Fleece.rvmat"};
	};
	class NULLED_Fleece_Hat_Green: NULLED_Fleece_Hat_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.85;
		displayName = "Fleece Hat Green";
		descriptionShort = "A Brown Fleece Hat, Keeps you warm on a cold night.";
		hiddenSelectionsTextures[] = {"Headgear\Fleece_Hat\data\Fleece\Fleece_Green_co.paa","Headgear\Fleece_Hat\data\Fleece\Fleece_Green_co.paa","Headgear\Fleece_Hat\data\Fleece\Fleece_Green_co.paa"};
		hiddenSelectionsMaterials[] = {"Headgear\Fleece_Hat\data\Fleece\Fleece.rvmat","Headgear\Fleece_Hat\data\Fleece\Fleece.rvmat","Headgear\Fleece_Hat\data\Fleece\Fleece.rvmat"};
	};
	class NULLED_BalaclavaMask_ColorBase: BalaclavaMask_ColorBase
	{
		displayName = "Balaclava";
		descriptionShort = "Balaclava";
		model = "Headgear\Balaclava\Balaclava_g.p3d";
		inventorySlot[] = {"Mask"};
		itemInfo[] = {"Clothing","Mask"};
		rotationFlags = 1;
		weight = 130;
		itemSize[] = {3,2};
		ragQuantity = 1;
		varWetMax = 1.0;
		heatIsolation = 1;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		headSelectionsToHide[] = {"Clipping_Balaclava"};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\characters\masks\data\Balaclava.rvmat"}},{0.7,{"DZ\characters\masks\data\Balaclava.rvmat"}},{0.5,{"DZ\characters\masks\data\Balaclava_damage.rvmat"}},{0.3,{"DZ\characters\masks\data\Balaclava_damage.rvmat"}},{0.0,{"DZ\characters\masks\data\Balaclava_destruct.rvmat"}}};
				};
			};
		};
		class ClothingTypes
		{
			male = "Headgear\Balaclava\Balaclava.p3d";
			female = "Headgear\Balaclava\Balaclava.p3d";
		};
		class Protection
		{
			biological = 0.25;
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
	class NULLED_BalaclavaMask_Black: NULLED_BalaclavaMask_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"Headgear\Balaclava\data\Balaclava_black_co.paa","Headgear\Balaclava\data\Balaclava_black_co.paa","Headgear\Balaclava\data\Balaclava_black_co.paa"};
	};
	class NULLED_Boonie_ColorBase: BalaclavaMask_ColorBase
	{
		displayName = "Door Kicker Boonie hat";
		descriptionShort = "Old well-worn, priceless Boonie hat, it is believed that it opens any doors in this world for its owner, but that is actually not the case. You still need a key to open key rooms.";
		model = "Headgear\Boonie\Boonie_g.p3d";
		inventorySlot[] = {"Headgear"};
		itemInfo[] = {"Clothing","Headgear"};
		rotationFlags = 1;
		weight = 130;
		itemSize[] = {3,2};
		ragQuantity = 1;
		varWetMax = 1.0;
		heatIsolation = 1;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		headSelectionsToHide[] = {"Clipping_Balaclava"};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\characters\masks\data\Balaclava.rvmat"}},{0.7,{"DZ\characters\masks\data\Balaclava.rvmat"}},{0.5,{"DZ\characters\masks\data\Balaclava_damage.rvmat"}},{0.3,{"DZ\characters\masks\data\Balaclava_damage.rvmat"}},{0.0,{"DZ\characters\masks\data\Balaclava_destruct.rvmat"}}};
				};
			};
		};
		class ClothingTypes
		{
			male = "Headgear\Boonie\Boonie.p3d";
			female = "Headgear\Boonie\Boonie.p3d";
		};
		class Protection
		{
			biological = 0.25;
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
	class NULLED_Boonie_Black: NULLED_Boonie_ColorBase
	{
		scope = 2;
		displayName = "Door Kicker Boonie hat - Black";
		descriptionShort = "Old well-worn, priceless Boonie hat, it is believed that it opens any doors in this world for its owner.";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"Headgear\Boonie\data\Bonnie_Hat_Black_co.paa","Headgear\Boonie\data\Bonnie_Hat_Black_co.paa","Headgear\Boonie\data\Bonnie_Hat_Black_co.paa"};
	};
	class NULLED_Boonie_Flecktarn: NULLED_Boonie_ColorBase
	{
		scope = 2;
		displayName = "Fleece Hood - Flecktarn";
		descriptionShort = "Old well-worn, priceless Boonie hat, it is believed that it opens any doors in this world for its owner.";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"Headgear\Boonie\data\Bonnie_Hat_Flecktarn_co.paa","Headgear\Boonie\data\Bonnie_Hat_Flecktarn_co.paa","Headgear\Boonie\data\Bonnie_Hat_Flecktarn_co.paa"};
	};
	class NULLED_Boonie_Green: NULLED_Boonie_ColorBase
	{
		scope = 2;
		displayName = "Door Kicker Boonie hat - Green";
		descriptionShort = "Old well-worn, priceless Boonie hat, it is believed that it opens any doors in this world for its owner.";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"Headgear\Boonie\data\Bonnie_Hat_Green_co.paa","Headgear\Boonie\data\Bonnie_Hat_Green_co.paa","Headgear\Boonie\data\Bonnie_Hat_Green_co.paa"};
	};
	class NULLED_Boonie_Multicam: NULLED_Boonie_ColorBase
	{
		scope = 2;
		displayName = "Door Kicker Boonie hat - Multicam";
		descriptionShort = "Old well-worn, priceless Boonie hat, it is believed that it opens any doors in this world for its owner.";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"Headgear\Boonie\data\Bonnie_Hat_Multicam_co.paa","Headgear\Boonie\data\Bonnie_Hat_Multicam_co.paa","Headgear\Boonie\data\Bonnie_Hat_Multicam_co.paa"};
	};
	class NULLED_Boonie_Tan: NULLED_Boonie_ColorBase
	{
		scope = 2;
		displayName = "Door Kicker Boonie hat - Tan";
		descriptionShort = "Old well-worn, priceless Boonie hat, it is believed that it opens any doors in this world for its owner.";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"Headgear\Boonie\data\Bonnie_Hat_Tan_co.paa","Headgear\Boonie\data\Bonnie_Hat_Tan_co.paa","Headgear\Boonie\data\Bonnie_Hat_Tan_co.paa"};
	};
	class NULLED_Boonie_Urban: NULLED_Boonie_ColorBase
	{
		scope = 2;
		displayName = "Door Kicker Boonie hat - Urban";
		descriptionShort = "Old well-worn, priceless Boonie hat, it is believed that it opens any doors in this world for its owner.";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"Headgear\Boonie\data\Bonnie_Hat_Urban_co.paa","Headgear\Boonie\data\Bonnie_Hat_Urban_co.paa","Headgear\Boonie\data\Bonnie_Hat_Urban_co.paa"};
	};
	class DirtBikeHelmet_Mouthguard;
	class NULLED_FastMT_Visor: DirtBikeHelmet_Mouthguard
	{
		scope = 2;
		displayName = "Fast MT Visor";
		descriptionShort = "Fast MT Visor";
		model = "Headgear\Helmet_Accessories\Visor\Visor.p3d";
		rotationFlags = 34;
		itemSize[] = {3,1};
		inventorySlot[] = {"Fast_Visor"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\characters\headgear\data\mich2001.rvmat","DZ\characters\headgear\data\mich2001_rail.rvmat"}},{0.7,{"DZ\characters\headgear\data\mich2001.rvmat","DZ\characters\headgear\data\mich2001_rail.rvmat"}},{0.5,{"DZ\characters\headgear\data\mich2001_damage.rvmat","DZ\characters\headgear\data\mich2001_rail_damage.rvmat"}},{0.3,{"DZ\characters\headgear\data\mich2001_damage.rvmat","DZ\characters\headgear\data\mich2001_rail_damage.rvmat"}},{0.0,{"DZ\characters\headgear\data\mich2001_destruct.rvmat","DZ\characters\headgear\data\mich2001_rail_destruct.rvmat"}}};
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
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.1;
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
						damage = 0.0;
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
						damage = 0.0;
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
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.26;
					};
				};
			};
		};
	};
	class NULLED_MandoVisor_Base: DirtBikeHelmet_Mouthguard
	{
		scope = 2;
		displayName = "Fast MT Mando Visor";
		descriptionShort = "Fast MT Visor";
		model = "Headgear\Helmet_Accessories\Mando\MandoVisor.p3d";
		hiddenSelections[] = {"camoground"};
		rotationFlags = 34;
		itemSize[] = {3,1};
		inventorySlot[] = {"Fast_Visor"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\characters\headgear\data\mich2001.rvmat","DZ\characters\headgear\data\mich2001_rail.rvmat"}},{0.7,{"DZ\characters\headgear\data\mich2001.rvmat","DZ\characters\headgear\data\mich2001_rail.rvmat"}},{0.5,{"DZ\characters\headgear\data\mich2001_damage.rvmat","DZ\characters\headgear\data\mich2001_rail_damage.rvmat"}},{0.3,{"DZ\characters\headgear\data\mich2001_damage.rvmat","DZ\characters\headgear\data\mich2001_rail_damage.rvmat"}},{0.0,{"DZ\characters\headgear\data\mich2001_destruct.rvmat","DZ\characters\headgear\data\mich2001_rail_destruct.rvmat"}}};
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
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.26;
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
						damage = 0.0;
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
						damage = 0.0;
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
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.26;
					};
				};
			};
		};
	};
	class NULLED_MandoVisor_Green: NULLED_MandoVisor_Base
	{
		scope = 2;
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"Headgear\Helmet_Accessories\Mando\data\Helmet_ODgreen_co.paa","Headgear\Helmet_Accessories\Mando\data\Helmet_ODgreen_co.paa"};
		color = "Green";
	};
	class NULLED_MandoVisor_Black: NULLED_MandoVisor_Base
	{
		scope = 2;
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"Headgear\Helmet_Accessories\Mando\data\Helmet_lightdark_co.paa","Headgear\Helmet_Accessories\Mando\data\Helmet_lightdark_co.paa"};
		color = "Black";
	};
	class NULLED_MandoVisor_Tan: NULLED_MandoVisor_Base
	{
		scope = 2;
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"Headgear\Helmet_Accessories\Mando\data\Helmet_tan_co","Headgear\Helmet_Accessories\Mando\data\Helmet_tan_co.paa"};
		color = "Tan";
	};
	class NULLED_MandoVisor_Snow: NULLED_MandoVisor_Base
	{
		scope = 2;
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"Headgear\Helmet_Accessories\Mando\data\Helmet_tan_co","Headgear\Helmet_Accessories\Mando\data\Helmet_tan_co.paa"};
		color = "Snow";
	};
	class NULLED_OPS_CORE_SENTRY_Mandible: DirtBikeHelmet_Mouthguard
	{
		scope = 2;
		displayName = "OPS-CORE SENTRY Mandible";
		descriptionShort = "OPS-CORE SENTRY Mandible";
		model = "Headgear\Helmet_Accessories\ACH_Mandible\ACH_Mandible.p3d";
		hiddenSelections[] = {"camoground","zbytek"};
		rotationFlags = 34;
		itemSize[] = {3,1};
		inventorySlot[] = {"SENTRY_Mandible"};
		attachments[] = {"SENTRY_Visor"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\characters\headgear\data\mich2001.rvmat","DZ\characters\headgear\data\mich2001_rail.rvmat"}},{0.7,{"DZ\characters\headgear\data\mich2001.rvmat","DZ\characters\headgear\data\mich2001_rail.rvmat"}},{0.5,{"DZ\characters\headgear\data\mich2001_damage.rvmat","DZ\characters\headgear\data\mich2001_rail_damage.rvmat"}},{0.3,{"DZ\characters\headgear\data\mich2001_damage.rvmat","DZ\characters\headgear\data\mich2001_rail_damage.rvmat"}},{0.0,{"DZ\characters\headgear\data\mich2001_destruct.rvmat","DZ\characters\headgear\data\mich2001_rail_destruct.rvmat"}}};
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
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.26;
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
						damage = 0.0;
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
						damage = 0.0;
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
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.26;
					};
				};
			};
		};
	};
	class NULLED_SENTRY_Mandible_Green: NULLED_OPS_CORE_SENTRY_Mandible
	{
		scope = 2;
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"Headgear\Helmet_Accessories\ACH_Mandible\data\ACH_Mandible_Green_co.paa","Headgear\Helmet_Accessories\ACH_Mandible\data\ACH_Mandible_Green_co.paa","Headgear\Helmet_Accessories\ACH_Mandible\data\ACH_Mandible_Green_co.paa"};
	};
	class NULLED_SENTRY_Mandible_Tan: NULLED_OPS_CORE_SENTRY_Mandible
	{
		scope = 2;
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"Headgear\Helmet_Accessories\ACH_Mandible\data\ACH_Mandible_Tan_co.paa","Headgear\Helmet_Accessories\ACH_Mandible\data\ACH_Mandible_Tan_co.paa","Headgear\Helmet_Accessories\ACH_Mandible\data\ACH_Mandible_Tan_co.paa"};
	};
	class NULLED_SENTRY_Mandible_Flecktarn: NULLED_OPS_CORE_SENTRY_Mandible
	{
		scope = 2;
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"Headgear\Helmet_Accessories\ACH_Mandible\data\ACH_Mandible_Flecktarn_co.paa","Headgear\Helmet_Accessories\ACH_Mandible\data\ACH_Mandible_Flecktarn_co.paa","Headgear\Helmet_Accessories\ACH_Mandible\data\ACH_Mandible_Flecktarn_co.paa"};
	};
	class NULLED_SENTRY_Mandible_Grey: NULLED_OPS_CORE_SENTRY_Mandible
	{
		scope = 2;
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"Headgear\Helmet_Accessories\ACH_Mandible\data\ACH_Mandible_Grey_co.paa","Headgear\Helmet_Accessories\ACH_Mandible\data\ACH_Mandible_Grey_co.paa","Headgear\Helmet_Accessories\ACH_Mandible\data\ACH_Mandible_Grey_co.paa"};
	};
	class NULLED_SENTRY_Mandible_Woodland: NULLED_OPS_CORE_SENTRY_Mandible
	{
		scope = 2;
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"Headgear\Helmet_Accessories\ACH_Mandible\data\ACH_Mandible_WD_co.paa","Headgear\Helmet_Accessories\ACH_Mandible\data\ACH_Mandible_WD_co.paa","Headgear\Helmet_Accessories\ACH_Mandible\data\ACH_Mandible_WD_co.paa"};
	};
	class NULLED_SENTRY_Mandible_Urban: NULLED_OPS_CORE_SENTRY_Mandible
	{
		scope = 2;
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"Headgear\Helmet_Accessories\ACH_Mandible\data\ACH_Mandible_Urban_co.paa","Headgear\Helmet_Accessories\ACH_Mandible\data\ACH_Mandible_Urban_co.paa","Headgear\Helmet_Accessories\ACH_Mandible\data\ACH_Mandible_Urban_co.paa"};
	};
	class NULLED_Light_Visor: DirtBikeHelmet_Mouthguard
	{
		scope = 2;
		displayName = "Light Visor";
		descriptionShort = "Light Visor";
		model = "Headgear\Helmet_Accessories\Light_Visor\Light_Visor.p3d";
		rotationFlags = 34;
		itemSize[] = {3,1};
		inventorySlot[] = {"Fast_Visor"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\characters\headgear\data\mich2001.rvmat","DZ\characters\headgear\data\mich2001_rail.rvmat"}},{0.7,{"DZ\characters\headgear\data\mich2001.rvmat","DZ\characters\headgear\data\mich2001_rail.rvmat"}},{0.5,{"DZ\characters\headgear\data\mich2001_damage.rvmat","DZ\characters\headgear\data\mich2001_rail_damage.rvmat"}},{0.3,{"DZ\characters\headgear\data\mich2001_damage.rvmat","DZ\characters\headgear\data\mich2001_rail_damage.rvmat"}},{0.0,{"DZ\characters\headgear\data\mich2001_destruct.rvmat","DZ\characters\headgear\data\mich2001_rail_destruct.rvmat"}}};
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
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.26;
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
						damage = 0.0;
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
						damage = 0.0;
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
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.26;
					};
				};
			};
		};
	};
	class NULLED_Fast_Mandible: DirtBikeHelmet_Mouthguard
	{
		scope = 2;
		displayName = "Fast MT Mandible";
		descriptionShort = "Fast MT Mandible";
		model = "Headgear\Helmet_Accessories\Mandible\Mandible.p3d";
		hiddenSelections[] = {"camoground","zbytek"};
		rotationFlags = 34;
		itemSize[] = {3,1};
		inventorySlot[] = {"Fast_Ears"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\characters\headgear\data\mich2001.rvmat","DZ\characters\headgear\data\mich2001_rail.rvmat"}},{0.7,{"DZ\characters\headgear\data\mich2001.rvmat","DZ\characters\headgear\data\mich2001_rail.rvmat"}},{0.5,{"DZ\characters\headgear\data\mich2001_damage.rvmat","DZ\characters\headgear\data\mich2001_rail_damage.rvmat"}},{0.3,{"DZ\characters\headgear\data\mich2001_damage.rvmat","DZ\characters\headgear\data\mich2001_rail_damage.rvmat"}},{0.0,{"DZ\characters\headgear\data\mich2001_destruct.rvmat","DZ\characters\headgear\data\mich2001_rail_destruct.rvmat"}}};
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
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.26;
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
						damage = 0.0;
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
						damage = 0.0;
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
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.26;
					};
				};
			};
		};
	};
	class NULLED_Fast_Mandible_Green: NULLED_Fast_Mandible
	{
		scope = 2;
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"Headgear\Helmet_Accessories\Mandible\data\Mandible_Green_co.paa","Headgear\Helmet_Accessories\Mandible\data\Mandible_Green_co.paa"};
	};
	class NULLED_Fast_Mandible_Black: NULLED_Fast_Mandible
	{
		scope = 2;
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"Headgear\Helmet_Accessories\Mandible\data\Mandible_Black_co.paa","Headgear\Helmet_Accessories\Mandible\data\Mandible_Black_co.paa"};
	};
	class NULLED_Fast_Mandible_Tan: NULLED_Fast_Mandible
	{
		scope = 2;
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"Headgear\Helmet_Accessories\Mandible\data\Mandible_Tan_co.paa","Headgear\Helmet_Accessories\Mandible\data\Mandible_Tan_co.paa"};
	};
	class NULLED_Altyn_Visor: Inventory_Base
	{
		scope = 2;
		displayName = "Altyn face shield";
		descriptionShort = "Special armored face shield for heavy helmet Altyn. Increases the chances of surviving the impacts of bullets and shrapnel.";
		model = "Headgear\Altyn\Visor\Altyn_Visor.p3d";
		rotationFlags = 34;
		itemSize[] = {3,1};
		inventorySlot[] = {"Altyn_Visor"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.0,{"DZ\characters\headgear\data\mich2001.rvmat","DZ\characters\headgear\data\mich2001_rail.rvmat"}},{0.7,{"DZ\characters\headgear\data\mich2001.rvmat","DZ\characters\headgear\data\mich2001_rail.rvmat"}},{0.5,{"DZ\characters\headgear\data\mich2001_damage.rvmat","DZ\characters\headgear\data\mich2001_rail_damage.rvmat"}},{0.3,{"DZ\characters\headgear\data\mich2001_damage.rvmat","DZ\characters\headgear\data\mich2001_rail_damage.rvmat"}},{0.0,{"DZ\characters\headgear\data\mich2001_destruct.rvmat","DZ\characters\headgear\data\mich2001_rail_destruct.rvmat"}}};
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
						damage = 0.2;
					};
					class Shock
					{
						damage = 0.5;
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
						damage = 0.5;
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
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.25;
					};
				};
				class FragGrenade
				{
					class Shock
					{
						damage = 0.26;
					};
				};
			};
		};
	};
	class NULLED_Fast_Chops_Base: DirtBikeHelmet_Mouthguard
	{
		scope = 2;
		displayName = "Fast MT Chops";
		descriptionShort = "Fast MT Chops";
		model = "Headgear\Helmet_Accessories\Chops\Chops.p3d";
		hiddenSelections[] = {"camoground"};
		rotationFlags = 34;
		itemSize[] = {2,1};
		inventorySlot[] = {"Fast_Ears"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\characters\headgear\data\mich2001.rvmat","DZ\characters\headgear\data\mich2001_rail.rvmat"}},{0.7,{"DZ\characters\headgear\data\mich2001.rvmat","DZ\characters\headgear\data\mich2001_rail.rvmat"}},{0.5,{"DZ\characters\headgear\data\mich2001_damage.rvmat","DZ\characters\headgear\data\mich2001_rail_damage.rvmat"}},{0.3,{"DZ\characters\headgear\data\mich2001_damage.rvmat","DZ\characters\headgear\data\mich2001_rail_damage.rvmat"}},{0.0,{"DZ\characters\headgear\data\mich2001_destruct.rvmat","DZ\characters\headgear\data\mich2001_rail_destruct.rvmat"}}};
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
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.26;
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
						damage = 0.0;
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
						damage = 0.0;
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
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.26;
					};
				};
			};
		};
	};
	class NULLED_Fast_Chops_Green: NULLED_Fast_Chops_Base
	{
		scope = 2;
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"Headgear\FastMT\data\FastMT_Green_co.paa"};
	};
	class NULLED_Fast_Chops_Black: NULLED_Fast_Chops_Base
	{
		scope = 2;
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"Headgear\FastMT\data\FastMT_Black_co.paa"};
	};
	class NULLED_Fast_Chops_Tan: NULLED_Fast_Chops_Base
	{
		scope = 2;
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"Headgear\FastMT\data\FastMT_Tan_co.paa"};
	};
	class NULLED_Fast_Chops_Camo: NULLED_Fast_Chops_Base
	{
		scope = 2;
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"Headgear\FastMT\data\FastMT_Camo_co.paa"};
	};
	class NULLED_Maska_Visor: DirtBikeHelmet_Mouthguard
	{
		scope = 2;
		displayName = "Maska 1Sch face shield";
		descriptionShort = "Special faceshield for Maska 1Sch helmet. Level 6, Ricochet chance Medium";
		model = "Headgear\zsh1_m2\Proxies\zsh1_m2_mask.p3d";
		hiddenSelections[] = {"camoground","zbytek"};
		rotationFlags = 34;
		itemSize[] = {3,3};
		inventorySlot[] = {"Maska_Visor"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\characters\headgear\data\mich2001.rvmat","DZ\characters\headgear\data\mich2001_rail.rvmat"}},{0.7,{"DZ\characters\headgear\data\mich2001.rvmat","DZ\characters\headgear\data\mich2001_rail.rvmat"}},{0.5,{"DZ\characters\headgear\data\mich2001_damage.rvmat","DZ\characters\headgear\data\mich2001_rail_damage.rvmat"}},{0.3,{"DZ\characters\headgear\data\mich2001_damage.rvmat","DZ\characters\headgear\data\mich2001_rail_damage.rvmat"}},{0.0,{"DZ\characters\headgear\data\mich2001_destruct.rvmat","DZ\characters\headgear\data\mich2001_rail_destruct.rvmat"}}};
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
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.26;
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
						damage = 0.0;
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
						damage = 0.0;
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
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.26;
					};
				};
			};
		};
	};
	class NULLED_Maska_Visor_Green: NULLED_Maska_Visor
	{
		scope = 2;
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"Headgear\zsh1_m2\data\lambert1_co.paa","Headgear\zsh1_m2\data\lambert1_co.paa","Headgear\zsh1_m2\data\lambert1_co.paa"};
		color = "Green";
	};
	class NULLED_Maska_Visor_Black: NULLED_Maska_Visor
	{
		scope = 2;
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"Headgear\zsh1_m2\data\lambert1_black_co.paa","Headgear\zsh1_m2\data\lambert1_black_co.paa","Headgear\zsh1_m2\data\lambert1_black_co.paa"};
		color = "Black";
	};
	class NULLED_Maska_Visor_Killa: NULLED_Maska_Visor
	{
		scope = 2;
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"Headgear\zsh1_m2\data\lambert1_killa_co.paa","Headgear\zsh1_m2\data\lambert1_killa_co.paa","Headgear\zsh1_m2\data\lambert1_killa_co.paa"};
	};
	class NULLED_Combat_Headset: DirtBikeHelmet_Mouthguard
	{
		scope = 2;
		displayName = "Fast MT Headset";
		descriptionShort = "Fast MT Headset";
		model = "Headgear\Helmet_Accessories\Combat_Headset\Helmet\Helmet_Headset.p3d";
		hiddenSelections[] = {"camoground"};
		rotationFlags = 34;
		itemSize[] = {2,2};
		inventorySlot[] = {"Fast_Ears"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\characters\headgear\data\mich2001.rvmat","DZ\characters\headgear\data\mich2001_rail.rvmat"}},{0.7,{"DZ\characters\headgear\data\mich2001.rvmat","DZ\characters\headgear\data\mich2001_rail.rvmat"}},{0.5,{"DZ\characters\headgear\data\mich2001_damage.rvmat","DZ\characters\headgear\data\mich2001_rail_damage.rvmat"}},{0.3,{"DZ\characters\headgear\data\mich2001_damage.rvmat","DZ\characters\headgear\data\mich2001_rail_damage.rvmat"}},{0.0,{"DZ\characters\headgear\data\mich2001_destruct.rvmat","DZ\characters\headgear\data\mich2001_rail_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.99;
					};
					class Blood
					{
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.99;
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
						damage = 0.0;
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
						damage = 0.0;
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
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.26;
					};
				};
			};
		};
	};
	class NULLED_Combat_Headset_Black: NULLED_Combat_Headset
	{
		scope = 2;
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"Headgear\Helmet_Accessories\Combat_Headset\Helmet\data\Headphones_Black_co.paa"};
	};
	class NULLED_Combat_Headset_Green: NULLED_Combat_Headset
	{
		scope = 2;
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"Headgear\Helmet_Accessories\Combat_Headset\Helmet\data\Headphones_green_co.paa"};
	};
	class NULLED_Combat_Headset_Tan: NULLED_Combat_Headset
	{
		scope = 2;
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"Headgear\Helmet_Accessories\Combat_Headset\Helmet\data\Headphones_tan_co.paa"};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class proxyVisor: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Fast_Visor"};
		model = "Headgear\Helmet_Accessories\Visor\Visor.p3d";
	};
	class proxyzsh1_m2_mask: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Maska_Visor"};
		model = "Headgear\zsh1_m2\Proxies\zsh1_m2_mask.p3d";
	};
	class proxyAltyn_Visor: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Altyn_Visor"};
		model = "Headgear\Altyn\Visor\Altyn_Visor.p3d";
	};
	class proxyMandible: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Fast_Ears"};
		model = "Headgear\Helmet_Accessories\Mandible\Mandible.p3d";
	};
	class proxyHeadset: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Fast_Ears"};
		model = "Headgear\Helmet_Accessories\Combat_Headset\Helmet\Helmet_Headset.p3d";
	};
	class proxyChops: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Fast_Ears"};
		model = "Headgear\Helmet_Accessories\Chops\Chops.p3d";
	};
	class proxyACH_Mandible: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"SENTRY_Mandible"};
		model = "Headgear\Helmet_Accessories\ACH_Mandible\ACH_Mandible.p3d";
	};
	class proxyLight_Visor: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Fast_Visor"};
		model = "Headgear\Helmet_Accessories\Light_Visor\Light_Visor.p3d";
	};
};
