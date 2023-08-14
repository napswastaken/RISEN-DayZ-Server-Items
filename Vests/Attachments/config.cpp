////////////////////////////////////////////////////////////////////
//DeRap: Attachments\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Mon Aug 14 16:31:52 2023 : 'file' last modified on Mon Aug 14 16:31:52 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class NULLED_Attachments
	{
		units[] = {"NULLED_Mag_Pouch_Black","NULLED_Mag_Pouch_Green","NULLED_Mag_Pouch_Tan","NULLED_Mag_Pouch_Multicam","NULLED_Mag_Pouch_Snow","NULLED_PISTOL_POUCH_Black","NULLED_PISTOL_POUCH_Green","NULLED_PISTOL_POUCH_Tan","NULLED_PISTOL_POUCH_Multicam","NULLED_PISTOL_POUCH_Snow","NULLED_Drop_Pouch_Black","NULLED_Drop_Pouch_Green","NULLED_Drop_Pouch_Tan","NULLED_Drop_Pouch_Multicam","NULLED_Drop_Pouch_Snow","NULLED_Sheath_Black","NULLED_Sheath_Green","NULLED_IFAK_Black","NULLED_IFAK_Green","NULLED_IFAK_Tan","NULLED_IFAK_multicam","NULLED_IFAK_Snow","NULLED_gr_pouch_Black","NULLED_gr_pouch_Green","NULLED_gr_pouch_Tan","NULLED_gr_pouch_Multicam","NULLED_gr_pouch_Snow","NULLED_map_pouch_Black","NULLED_map_pouch_Green","NULLED_map_pouch_Tan","NULLED_map_pouch_Snow","NULLED_Tactical_Pouch_Black","NULLED_Tactical_Pouch_Green","NULLED_Tactical_Pouch_Tan","NULLED_Tactical_Pouch_Snow","NULLED_Holster_Black","NULLED_Holster_Green","NULLED_Holster_Tan","NULLED_Holster_Woods"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Gear_Containers","Slots","DZ_Weapons_Firearms"};
	};
};
class CfgMods
{
	class NULLED_Attachments
	{
		dir = "NULLED_Attachments";
		type = "mod";
		dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"Vests\Attachments\scripts\4_World"};
			};
		};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class Clothing;
	class Container_Base;
	class NULLED_Mag_Pouch_ColorBase: Container_Base
	{
		displayName = "Universal Mag Pouch";
		descriptionShort = "Universal Mag Pouch. Fits most standard mags. Attaches to Warbelts, Emerson Plate Carriers, and Cage Plate Carriers. Report any mags that don't fit and that you believe should in our discord please.";
		model = "\Vests\Attachments\Mag_pouch\magpouch.p3d";
		inventorySlot[] = {"Mag_Pouch1","Mag_Pouch2","Mag_Pouch3"};
		hiddenSelections[] = {"camoground"};
		attachments[] = {"Mag","Pistol_Pouch1"};
		weight = 50;
		itemSize[] = {1,1};
		itemsCargoSize[] = {0,0};
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		allowOwnedCargoManipulation = 1;
		randomQuantity = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"DZ\characters\vests\Data\BallisticVest.rvmat"}},{0.7,{"DZ\characters\vests\Data\BallisticVest.rvmat"}},{0.5,{"DZ\characters\vests\Data\BallisticVest_damage.rvmat"}},{0.3,{"DZ\characters\vests\Data\BallisticVest_damage.rvmat"}},{0.0,{"DZ\characters\vests\Data\BallisticVest_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet = "pickUpCourierBag_Light_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpCourierBag_SoundSet";
					id = 797;
				};
			};
		};
	};
	class NULLED_Mag_Pouch_Black: NULLED_Mag_Pouch_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\Vests\Attachments\mag_pouch\data\Mag_pouch_Black_co.paa"};
		color = "Black";
	};
	class NULLED_Mag_Pouch_Green: NULLED_Mag_Pouch_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\Vests\Attachments\mag_pouch\data\Mag_pouch_Green_co.paa"};
		color = "Green";
	};
	class NULLED_Mag_Pouch_Tan: NULLED_Mag_Pouch_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\Vests\Attachments\mag_pouch\data\Mag_pouch_Tan_co.paa"};
		color = "Tan";
	};
	class NULLED_Mag_Pouch_Multicam: NULLED_Mag_Pouch_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\Vests\Attachments\mag_pouch\data\Mag_pouch_Multicam_co.paa"};
	};
	class NULLED_Mag_Pouch_Snow: NULLED_Mag_Pouch_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\Vests\Attachments\mag_pouch\data\Mag_pouch_Snow_co.paa"};
		color = "Snow";
	};
	class NULLED_PISTOL_POUCH_ColorBase: Container_Base
	{
		displayName = "Universal Pistol Pouch";
		descriptionShort = "Universal Pistol Pouch. Attaches to Mag Pouches.";
		model = "\Vests\Attachments\pistol_pouch\PISTOL_POUCH.p3d";
		inventorySlot[] = {"Mag_Pouch1","Mag_Pouch2","Mag_Pouch3","Pistol_Pouch1","Pistol_Pouch4"};
		hiddenSelections[] = {"camoground"};
		attachments[] = {"Pistol_Mag"};
		weight = 50;
		itemSize[] = {1,1};
		itemsCargoSize[] = {0,0};
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		allowOwnedCargoManipulation = 1;
		randomQuantity = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"DZ\characters\vests\Data\BallisticVest.rvmat"}},{0.7,{"DZ\characters\vests\Data\BallisticVest.rvmat"}},{0.5,{"DZ\characters\vests\Data\BallisticVest_damage.rvmat"}},{0.3,{"DZ\characters\vests\Data\BallisticVest_damage.rvmat"}},{0.0,{"DZ\characters\vests\Data\BallisticVest_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet = "pickUpCourierBag_Light_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpCourierBag_SoundSet";
					id = 797;
				};
			};
		};
	};
	class NULLED_PISTOL_POUCH_Black: NULLED_PISTOL_POUCH_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\Vests\Attachments\pistol_pouch\data\PISTOL_POUCH_Black_co.paa"};
		color = "Black";
	};
	class NULLED_PISTOL_POUCH_Green: NULLED_PISTOL_POUCH_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\Vests\Attachments\pistol_pouch\data\PISTOL_POUCH_Green_co.paa"};
		color = "Green";
	};
	class NULLED_PISTOL_POUCH_Tan: NULLED_PISTOL_POUCH_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\Vests\Attachments\pistol_pouch\data\PISTOL_POUCH_Tan_co.paa"};
		color = "Tan";
	};
	class NULLED_PISTOL_POUCH_Multicam: NULLED_PISTOL_POUCH_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\Vests\Attachments\pistol_pouch\data\PISTOL_POUCH_Multicam_co.paa"};
	};
	class NULLED_PISTOL_POUCH_Snow: NULLED_PISTOL_POUCH_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\Vests\Attachments\pistol_pouch\data\PISTOL_POUCH_Multicam_co.paa"};
		color = "Snow";
	};
	class NULLED_Drop_Pouch_ColorBase: Container_Base
	{
		displayName = "Drop Pouch";
		descriptionShort = "Empty mags pouch. Attaches to WarBelts.";
		model = "\Vests\Attachments\Drop_pouch\Drop_pouch.p3d";
		inventorySlot[] = {"Drop_Pouch"};
		hiddenSelections[] = {"camoground"};
		itemSize[] = {2,2};
		itemsCargoSize[] = {3,3};
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		allowOwnedCargoManipulation = 1;
		randomQuantity = 2;
		weight = 100;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"DZ\characters\vests\Data\BallisticVest.rvmat"}},{0.7,{"DZ\characters\vests\Data\BallisticVest.rvmat"}},{0.5,{"DZ\characters\vests\Data\BallisticVest_damage.rvmat"}},{0.3,{"DZ\characters\vests\Data\BallisticVest_damage.rvmat"}},{0.0,{"DZ\characters\vests\Data\BallisticVest_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet = "pickUpCourierBag_Light_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpCourierBag_SoundSet";
					id = 797;
				};
			};
		};
	};
	class NULLED_Drop_Pouch_Black: NULLED_Drop_Pouch_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\Vests\Attachments\drop_pouch\data\EM_pouch_Black_co.paa"};
		color = "Black";
	};
	class NULLED_Drop_Pouch_Green: NULLED_Drop_Pouch_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\Vests\Attachments\drop_pouch\data\EM_pouch_Green_co.paa"};
		color = "Green";
	};
	class NULLED_Drop_Pouch_Tan: NULLED_Drop_Pouch_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\Vests\Attachments\drop_pouch\data\EM_pouch_Tan_co.paa"};
		color = "Tan";
	};
	class NULLED_Drop_Pouch_Multicam: NULLED_Drop_Pouch_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\Vests\Attachments\drop_pouch\data\EM_pouch_Multicam_co.paa"};
	};
	class NULLED_Drop_Pouch_Snow: NULLED_Drop_Pouch_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\Vests\Attachments\drop_pouch\data\EM_pouch_Snow_co.paa"};
		color = "Snow";
	};
	class NULLED_Sheath_ColorBase: Clothing
	{
		displayName = "Sheath";
		descriptionShort = "Knife Sheath. Attaches to belts.";
		model = "\Vests\Attachments\Sheath\Sheath.p3d";
		hiddenSelections[] = {"camoground"};
		inventorySlot[] = {"Belt_Back"};
		attachments[] = {"Knife"};
		repairableWithKits[] = {3};
		repairCosts[] = {25};
		weight = 110;
		absorbency = 0.1;
		heatIsolation = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"DZ\characters\vests\Data\BallisticVest.rvmat"}},{0.7,{"DZ\characters\vests\Data\BallisticVest.rvmat"}},{0.5,{"DZ\characters\vests\Data\BallisticVest_damage.rvmat"}},{0.3,{"DZ\characters\vests\Data\BallisticVest_damage.rvmat"}},{0.0,{"DZ\characters\vests\Data\BallisticVest_destruct.rvmat"}}};
				};
			};
		};
	};
	class NULLED_Sheath_Black: NULLED_Sheath_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\Vests\Attachments\Sheath\data\Sheath_Black_co.paa"};
	};
	class NULLED_Sheath_Green: NULLED_Sheath_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\Vests\Attachments\Sheath\data\Sheath_Green_co.paa"};
	};
	class NULLED_IFAK_ColorBase: Inventory_Base
	{
		displayName = "IFAK";
		descriptionShort = "First aid kit. Using this will give you 40HP instantly";
		model = "\Vests\Attachments\IFAK\IFAK.p3d";
		inventorySlot[] = {"IFAK","IFAK1","IFAK2"};
		hiddenSelections[] = {"camoground"};
		itemSize[] = {3,3};
		weight = 100;
		rotationFlags = 17;
		isMeleeWeapon = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"DZ\gear\medical\data\transfusion_kit.rvmat"}},{0.7,{"DZ\gear\medical\data\transfusion_kit.rvmat"}},{0.5,{"DZ\gear\medical\data\transfusion_kit_damage.rvmat"}},{0.3,{"DZ\gear\medical\data\transfusion_kit_damage.rvmat"}},{0.0,{"DZ\gear\medical\data\transfusion_kit_destruct.rvmat"}}};
				};
			};
		};
	};
	class NULLED_IFAK_Black: NULLED_IFAK_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\Vests\Attachments\ifak\data\ifak_Black_co.paa"};
		color = "Black";
	};
	class NULLED_IFAK_Green: NULLED_IFAK_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\Vests\Attachments\ifak\data\ifak_Green_co.paa"};
		color = "Green";
	};
	class NULLED_IFAK_Tan: NULLED_IFAK_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\Vests\Attachments\ifak\data\ifak_Tan_co.paa"};
		color = "Tan";
	};
	class NULLED_IFAK_multicam: NULLED_IFAK_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\Vests\Attachments\ifak\data\ifak_Multicam_co.paa"};
	};
	class NULLED_IFAK_Snow: NULLED_IFAK_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\Vests\Attachments\ifak\data\ifak_Multicam_co.paa"};
		color = "Snow";
	};
	class NULLED_gr_pouch_ColorBase: Container_Base
	{
		displayName = "Grenade Pouch";
		descriptionShort = "Fits a grenade inside, attaches to Emerson and Cage Plate Carriers.";
		model = "\Vests\Attachments\gr_pouch\gr_pouch.p3d";
		hiddenSelections[] = {"camoground"};
		inventorySlot[] = {"GR_Pouch"};
		itemsCargoSize[] = {0,0};
		weight = 100;
		attachments[] = {"VestGrenadeA"};
		repairableWithKits[] = {3};
		allowOwnedCargoManipulation = 1;
		itemSize[] = {2,2};
		repairCosts[] = {25};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"DZ\characters\vests\Data\BallisticVest.rvmat"}},{0.7,{"DZ\characters\vests\Data\BallisticVest.rvmat"}},{0.5,{"DZ\characters\vests\Data\BallisticVest_damage.rvmat"}},{0.3,{"DZ\characters\vests\Data\BallisticVest_damage.rvmat"}},{0.0,{"DZ\characters\vests\Data\BallisticVest_destruct.rvmat"}}};
				};
			};
		};
	};
	class NULLED_gr_pouch_Black: NULLED_gr_Pouch_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\Vests\Attachments\gr_pouch\data\gr_pouch_Black_co.paa"};
		color = "Black";
	};
	class NULLED_gr_pouch_Green: NULLED_gr_Pouch_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\Vests\Attachments\gr_pouch\data\gr_pouch_Green_co.paa"};
		color = "Green";
	};
	class NULLED_gr_pouch_Tan: NULLED_gr_Pouch_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\Vests\Attachments\gr_pouch\data\gr_pouch_Tan_co.paa"};
		color = "Tan";
	};
	class NULLED_gr_pouch_Multicam: NULLED_gr_Pouch_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"Vests\Attachments\gr_pouch\data\GR_POUCH_Multicam_co.paa"};
	};
	class NULLED_gr_pouch_Snow: NULLED_gr_Pouch_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"Vests\Attachments\gr_pouch\data\GR_POUCH_Snow_co.paa"};
		color = "Snow";
	};
	class NULLED_map_pouch_ColorBase: Container_Base
	{
		displayName = "Map Pouch";
		descriptionShort = "Pouch to carry extra goodies cuz you don't need a map when you can just press M. Fits on JPC, Emerson, and Cage Rigss.";
		model = "\Vests\Attachments\map_pouch\map_pouch.p3d";
		hiddenSelections[] = {"camoground"};
		inventorySlot[] = {"map_pouch","map_pouch1","map_pouch2"};
		repairableWithKits[] = {3};
		weight = 100;
		repairCosts[] = {25};
		itemSize[] = {3,3};
		allowOwnedCargoManipulation = 1;
		itemsCargoSize[] = {3,3};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"DZ\characters\vests\Data\BallisticVest.rvmat"}},{0.7,{"DZ\characters\vests\Data\BallisticVest.rvmat"}},{0.5,{"DZ\characters\vests\Data\BallisticVest_damage.rvmat"}},{0.3,{"DZ\characters\vests\Data\BallisticVest_damage.rvmat"}},{0.0,{"DZ\characters\vests\Data\BallisticVest_destruct.rvmat"}}};
				};
			};
		};
	};
	class NULLED_map_pouch_Black: NULLED_map_Pouch_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\Vests\Attachments\map_pouch\data\map_pouch_Black_co.paa"};
		color = "Black";
	};
	class NULLED_map_pouch_Green: NULLED_map_Pouch_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\Vests\Attachments\map_pouch\data\map_pouch_Green_co.paa"};
		color = "Green";
	};
	class NULLED_map_pouch_Tan: NULLED_map_Pouch_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\Vests\Attachments\map_pouch\data\map_pouch_Tan_co.paa"};
		color = "Tan";
	};
	class NULLED_map_pouch_Snow: NULLED_map_Pouch_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\Vests\Attachments\map_pouch\data\map_pouch_Snow_co.paa"};
		color = "Snow";
	};
	class NULLED_Tactical_Pouch_ColorBase: Container_Base
	{
		displayName = "Tactical Pouch";
		descriptionShort = "Tactical Pouch";
		model = "\Vests\Attachments\TacticalPouch\TacticalPouch.p3d";
		hiddenSelections[] = {"camoground"};
		inventorySlot[] = {"map_pouch","map_pouch1","map_pouch2"};
		weight = 250;
		itemSize[] = {4,3};
		itemsCargoSize[] = {5,4};
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		allowOwnedCargoManipulation = 1;
		randomQuantity = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1,{"DZ\characters\vests\Data\BallisticVest.rvmat"}},{0.7,{"DZ\characters\vests\Data\BallisticVest.rvmat"}},{0.5,{"DZ\characters\vests\Data\BallisticVest_damage.rvmat"}},{0.3,{"DZ\characters\vests\Data\BallisticVest_damage.rvmat"}},{0,{"DZ\characters\vests\Data\BallisticVest_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet = "pickUpCourierBag_Light_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpCourierBag_SoundSet";
					id = 797;
				};
			};
		};
	};
	class NULLED_Tactical_Pouch_Black: NULLED_Tactical_Pouch_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\Vests\Attachments\TacticalPouch\data\tacticalpouch_black_co.paa"};
		color = "Black";
	};
	class NULLED_Tactical_Pouch_Green: NULLED_Tactical_Pouch_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\Vests\Attachments\tacticalpouch\data\tacticalpouch_Green_co.paa"};
		color = "Green";
	};
	class NULLED_Tactical_Pouch_Tan: NULLED_Tactical_Pouch_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\Vests\Attachments\tacticalpouch\data\tacticalpouch_Tan_co.paa"};
		color = "Tan";
	};
	class NULLED_Tactical_Pouch_Snow: NULLED_Tactical_Pouch_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\Vests\Attachments\tacticalpouch\data\tacticalpouch_Snow_co.paa"};
		color = "Snow";
	};
	class NULLED_Holster_ColorBase: Clothing
	{
		displayName = "Holster";
		descriptionShort = "Pistol Holster.";
		model = "\Vests\Attachments\Holster\Holster.p3d";
		hiddenSelections[] = {"camoground"};
		inventorySlot[] = {"Belt_Right"};
		repairableWithKits[] = {3};
		repairCosts[] = {25};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"DZ\characters\vests\Data\BallisticVest.rvmat"}},{0.7,{"DZ\characters\vests\Data\BallisticVest.rvmat"}},{0.5,{"DZ\characters\vests\Data\BallisticVest_damage.rvmat"}},{0.3,{"DZ\characters\vests\Data\BallisticVest_damage.rvmat"}},{0.0,{"DZ\characters\vests\Data\BallisticVest_destruct.rvmat"}}};
				};
			};
		};
	};
	class NULLED_Holster_Black: NULLED_Holster_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\Vests\Attachments\Holster\data\Holster_Black_co.paa"};
	};
	class NULLED_Holster_Green: NULLED_Holster_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\Vests\Attachments\Holster\data\Holster_Green_co.paa"};
	};
	class NULLED_Holster_Tan: NULLED_Holster_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\Vests\Attachments\Holster\data\Holster_Tan_co.paa"};
	};
	class NULLED_Holster_Woods: NULLED_Holster_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\Vests\Attachments\Holster\data\Holster_Wood_co.paa"};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class proxyDrop_pouch: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Drop_Pouch"};
		model = "\Vests\Attachments\Drop_pouch\Drop_pouch.p3d";
	};
	class proxyifak: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"IFAK"};
		model = "\Vests\Attachments\ifak\ifak.p3d";
	};
	class proxyMap_pouch: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Map_Pouch"};
		model = "\Vests\Attachments\Map_pouch\Map_pouch.p3d";
	};
	class proxygr_pouch: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Gr_Pouch"};
		model = "\Vests\Attachments\GR_POUCH\gr_pouch.p3d";
	};
	class proxymagpouch_uni1: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Mag_Pouch1"};
		model = "Vests\Attachments\Mag_pouch\magpouch_uni1.p3d";
	};
	class proxymagpouch_uni2: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Mag_Pouch2"};
		model = "Vests\Attachments\Mag_pouch\magpouch_uni2.p3d";
	};
	class proxymagpouch_uni3: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Mag_Pouch3"};
		model = "Vests\Attachments\Mag_pouch\magpouch_uni3.p3d";
	};
	class proxypistolpouch_uni1: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Pistol_Pouch1"};
		model = "Vests\Attachments\pistol_pouch\pistolpouch_uni1.p3d";
	};
	class proxypistolpouch_uni4: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Pistol_Pouch4"};
		model = "Vests\Attachments\pistol_pouch\pistolpouch_uni4.p3d";
	};
	class proxyHolster: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Belt_Right"};
		model = "\Vests\Attachments\Holster\Holster.p3d";
	};
	class proxysheath: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Belt_Back"};
		model = "\Vests\Attachments\Sheath\sheath.p3d";
	};
	class proxyMag_uni: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Mag"};
		model = "\Vests\Attachments\Mag_uni\Mag_uni.p3d";
	};
	class proxyMag_uni1: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Mag1"};
		model = "\Vests\Attachments\Mag_uni\Mag_uni1.p3d";
	};
	class proxyMag_uni2: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Mag2"};
		model = "\Vests\Attachments\Mag_uni\Mag_uni2.p3d";
	};
	class proxyMag_uni3: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Mag3"};
		model = "\Vests\Attachments\Mag_uni\Mag_uni3.p3d";
	};
	class proxyPistol_Mag_uni: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Pistol_Mag"};
		model = "\Vests\Attachments\Pistol_Mag_uni\Pistol_Mag_uni.p3d";
	};
	class proxyIFAK_uni1: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"IFAK1"};
		model = "\Vests\Attachments\IFAK_uni\IFAK_uni1.p3d";
	};
	class proxyIFAK_uni2: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"IFAK2"};
		model = "\Vests\Attachments\IFAK_uni\IFAK_uni2.p3d";
	};
	class proxyIFAK_uni3: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"IFAK3"};
		model = "\Vests\Attachments\IFAK_uni\IFAK_uni3.p3d";
	};
	class proxyMap_pouch_uni1: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Map_Pouch1"};
		model = "\Vests\Attachments\Map_pouch_uni\map_pouch_uni1.p3d";
	};
	class proxyMap_pouch_uni2: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Map_Pouch2"};
		model = "\Vests\Attachments\Map_pouch_uni\map_pouch_uni2.p3d";
	};
	class proxyWeapon_uni1: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Weapon01"};
		model = "\Vests\Attachments\Weapon_uni\weapon_uni1.p3d";
	};
};
