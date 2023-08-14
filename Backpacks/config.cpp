////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Mon Aug 14 16:30:15 2023 : 'file' last modified on Mon Aug 14 16:30:15 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Characters_Backpacks
	{
		units[] = {"NULLED_Tactical_Backpack_Multicam","NULLED_Tactical_Backpack_Black","NULLED_Tactical_Backpack_Green","NULLED_Tactical_Backpack_Tan","NULLED_Tactical_Backpack_Wood","NULLED_Fieldpack_Multicam","NULLED_ScoutPack_Tan","NULLED_Camelbak_Black","NULLED_Camelbak_Green","NULLED_Camelbak_Multicam","NULLED_Camelbak_Tan","PRESIDIO_Assault_Multicam","Raid_6SH118_Black","Raid_6SH118_Green","Raid_6SH118_Tan","Raid_6SH118_Khaki","Raid_6SH118_Sand","Raid_6SH118_Digital","Moab_Black","Moab_Blue","Moab_Flecktarn","Moab_Multicam","Moab_Green","Moab_Tan","Moab_WoodLand","Raccoon65_Green","Raccoon65_Black","Raccoon65_Tan","Gun_Bag_Green","Gun_Bag_Black","Gun_Bag_Tan","Gun_Bag_Snow","PegasusBackPack_Green","PegasusBackPack_Tan","PegasusBackPack_Black"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Characters","DZ_Characters_Backpacks"};
	};
};
class cfgVehicles
{
	class Clothing_Base;
	class Clothing: Clothing_Base{};
	class AliceBag_ColorBase;
	class MountainBag_ColorBase;
	class TaloonBag_ColorBase;
	class NULLED_Tactical_Backpack_ColorBase: TaloonBag_ColorBase
	{
		displayName = "Field Pack";
		descriptionShort = "One advantage of the Field Pack is that its compact dimensions make the wearer's silhouette stand out far less compared to its larger counterparts. In all other aspects however, it isn't all too different from the Tactical Backpack aside from the reduced capacity.";
		model = "Backpacks\TacticalBackpack\TacticalBackpack_g.p3d";
		inventorySlot[] = {"Back"};
		attachments[] = {"Chemlight","WalkieTalkie"};
		itemInfo[] = {"Clothing","Back"};
		rotationFlags = 16;
		weight = 1300;
		itemSize[] = {4,5};
		itemsCargoSize[] = {8,9};
		varWetMax = 0.79;
		heatIsolation = 0.5;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		soundAttType = "Outdoor";
		randomQuantity = 3;
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class ClothingTypes
		{
			male = "Backpacks\TacticalBackpack\TacticalBackpack.p3d";
			female = "Backpacks\TacticalBackpack\TacticalBackpack.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 120;
					healthLevels[] = {{1.0,{"DZ\Characters\backpacks\data\taloon.rvmat"}},{0.6,{"DZ\Characters\backpacks\data\taloon.rvmat"}},{0.5,{"DZ\Characters\backpacks\data\taloon_damage.rvmat"}},{0.3,{"DZ\Characters\backpacks\data\taloon_damage.rvmat"}},{0.0,{"DZ\Characters\backpacks\data\taloon_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet = "pickUpBackPack_Plastic_Light_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpBackPack_Plastic_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "taloonbag_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class NULLED_Tactical_Backpack_Multicam: NULLED_Tactical_Backpack_ColorBase
	{
		scope = 2;
		displayName = "Tactical Backpack - Multicam";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"Backpacks\TacticalBackpack\data\Tactical_Backpack_MC_co.paa","Backpacks\TacticalBackpack\data\Tactical_Backpack_MC_co.paa","Backpacks\TacticalBackpack\data\Tactical_Backpack_MC_co.paa"};
	};
	class NULLED_Tactical_Backpack_Black: NULLED_Tactical_Backpack_ColorBase
	{
		scope = 2;
		displayName = "Tactical Backpack - Black";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"Backpacks\TacticalBackpack\data\Tactical_Backpack_Black_co.paa","Backpacks\TacticalBackpack\data\Tactical_Backpack_Black_co.paa","Backpacks\TacticalBackpack\data\Tactical_Backpack_Black_co.paa"};
	};
	class NULLED_Tactical_Backpack_Green: NULLED_Tactical_Backpack_ColorBase
	{
		scope = 2;
		displayName = "Tactical Backpack - Green";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"Backpacks\TacticalBackpack\data\Tactical_Backpack_Green_co.paa","Backpacks\TacticalBackpack\data\Tactical_Backpack_Green_co.paa","Backpacks\TacticalBackpack\data\Tactical_Backpack_Green_co.paa"};
	};
	class NULLED_Tactical_Backpack_Tan: NULLED_Tactical_Backpack_ColorBase
	{
		scope = 2;
		displayName = "Tactical Backpack - Tan";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"Backpacks\TacticalBackpack\data\Tactical_Backpack_Tan_co.paa","Backpacks\TacticalBackpack\data\Tactical_Backpack_Tan_co.paa","Backpacks\TacticalBackpack\data\Tactical_Backpack_Tan_co.paa"};
	};
	class NULLED_Tactical_Backpack_Wood: NULLED_Tactical_Backpack_ColorBase
	{
		scope = 2;
		displayName = "Tactical Backpack - Woodland";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"Backpacks\TacticalBackpack\data\Tactical_Backpack_WD_co.paa","Backpacks\TacticalBackpack\data\Tactical_Backpack_WD_co.paa","Backpacks\TacticalBackpack\data\Tactical_Backpack_WD_co.paa"};
	};
	class NULLED_Fieldpack_ColorBase: TaloonBag_ColorBase
	{
		displayName = "Field Pack";
		descriptionShort = "One advantage of the Field Pack is that its compact dimensions make the wearer's silhouette stand out far less compared to its larger counterparts. In all other aspects however, it isn't all too different from the Tactical Backpack aside from the reduced capacity.";
		model = "Backpacks\Fieldpack\Fieldpack_g.p3d";
		inventorySlot[] = {"Back"};
		attachments[] = {"Chemlight","WalkieTalkie"};
		itemInfo[] = {"Clothing","Back"};
		rotationFlags = 16;
		weight = 1300;
		itemSize[] = {4,5};
		itemsCargoSize[] = {8,8};
		varWetMax = 0.79;
		heatIsolation = 0.5;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		soundAttType = "Outdoor";
		randomQuantity = 3;
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class ClothingTypes
		{
			male = "Backpacks\Fieldpack\Fieldpack.p3d";
			female = "Backpacks\Fieldpack\Fieldpack.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 120;
					healthLevels[] = {{1.0,{"DZ\Characters\backpacks\data\taloon.rvmat"}},{0.6,{"DZ\Characters\backpacks\data\taloon.rvmat"}},{0.5,{"DZ\Characters\backpacks\data\taloon_damage.rvmat"}},{0.3,{"DZ\Characters\backpacks\data\taloon_damage.rvmat"}},{0.0,{"DZ\Characters\backpacks\data\taloon_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet = "pickUpBackPack_Plastic_Light_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpBackPack_Plastic_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "taloonbag_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class NULLED_Fieldpack_Multicam: NULLED_Fieldpack_ColorBase
	{
		scope = 2;
		displayName = "Field Pack - Multicam";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"Backpacks\Fieldpack\data\field_co.paa","Backpacks\Fieldpack\data\field_co.paa","Backpacks\Fieldpack\data\field_co.paa"};
	};
	class NULLED_ScoutPack_ColorBase: TaloonBag_ColorBase
	{
		displayName = "Scout Pack";
		descriptionShort = "Scout pack used for observation.";
		model = "Backpacks\scoutpack\scoutpack_g.p3d";
		inventorySlot[] = {"Back"};
		attachments[] = {"Chemlight","WalkieTalkie"};
		itemInfo[] = {"Clothing","Back"};
		rotationFlags = 16;
		weight = 1300;
		itemSize[] = {4,5};
		itemsCargoSize[] = {8,9};
		varWetMax = 0.79;
		heatIsolation = 0.5;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		soundAttType = "Outdoor";
		randomQuantity = 3;
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class ClothingTypes
		{
			male = "Backpacks\scoutpack\scoutpack.p3d";
			female = "Backpacks\scoutpack\scoutpack.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 120;
					healthLevels[] = {{1.0,{"DZ\Characters\backpacks\data\taloon.rvmat"}},{0.6,{"DZ\Characters\backpacks\data\taloon.rvmat"}},{0.5,{"DZ\Characters\backpacks\data\taloon_damage.rvmat"}},{0.3,{"DZ\Characters\backpacks\data\taloon_damage.rvmat"}},{0.0,{"DZ\Characters\backpacks\data\taloon_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet = "pickUpBackPack_Plastic_Light_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpBackPack_Plastic_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "taloonbag_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class NULLED_ScoutPack_Tan: NULLED_ScoutPack_ColorBase
	{
		scope = 2;
		displayName = "Scout Pack - Tan";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"Backpacks\scoutpack\data\scout_co.paa","Backpacks\scoutpack\data\scout_co.paa","Backpacks\scoutpack\data\scout_co.paa"};
	};
	class NULLED_Camelbak_ColorBase: MountainBag_ColorBase
	{
		displayName = "Camelbak";
		descriptionShort = "Camelbak";
		model = "Backpacks\Camelbak\Camelbak_g.p3d";
		inventorySlot[] = {"Back"};
		attachments[] = {"Chemlight","WalkieTalkie"};
		itemInfo[] = {"Clothing","Back"};
		rotationFlags = 16;
		itemSize[] = {5,5};
		itemsCargoSize[] = {10,12};
		weight = 2300;
		absorbency = 0.2;
		heatIsolation = 0.13;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		soundAttType = "Outdoor";
		randomQuantity = 4;
		hiddenSelections[] = {"camofemale","camomale","camoground"};
		hiddenSelectionsTextures[] = {};
		class ClothingTypes
		{
			male = "Backpacks\Camelbak\Camelbak.p3d";
			female = "Backpacks\Camelbak\Camelbak.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 120;
					healthLevels[] = {{1.0,{"DZ\Characters\backpacks\data\mountain.rvmat"}},{0.6,{"DZ\Characters\backpacks\data\mountain.rvmat"}},{0.5,{"DZ\Characters\backpacks\data\mountain_damage.rvmat"}},{0.3,{"DZ\Characters\backpacks\data\mountain_damage.rvmat"}},{0.0,{"DZ\Characters\backpacks\data\mountain_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet = "pickUpBackPack_Plastic_Light_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpBackPack_Plastic_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "taloonbag_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class NULLED_Camelbak_Black: NULLED_Camelbak_ColorBase
	{
		scope = 2;
		displayName = "Camelbak - Black";
		hiddenSelectionsTextures[] = {"Backpacks\Camelbak\data\Camel_Black_co.paa","Backpacks\Camelbak\data\Camel_Black_co.paa","Backpacks\Camelbak\data\Camel_Black_co.paa"};
	};
	class NULLED_Camelbak_Green: NULLED_Camelbak_ColorBase
	{
		scope = 2;
		displayName = "Camelbak - Black";
		hiddenSelectionsTextures[] = {"Backpacks\Camelbak\data\Camel_Green_co.paa","Backpacks\Camelbak\data\Camel_Green_co.paa","Backpacks\Camelbak\data\Camel_Green_co.paa"};
	};
	class NULLED_Camelbak_Multicam: NULLED_Camelbak_ColorBase
	{
		scope = 2;
		displayName = "Camelbak - Black";
		hiddenSelectionsTextures[] = {"Backpacks\Camelbak\data\Camel_Multicam_co.paa","Backpacks\Camelbak\data\Camel_Multicam_co.paa","Backpacks\Camelbak\data\Camel_Multicam_co.paa"};
	};
	class NULLED_Camelbak_Tan: NULLED_Camelbak_ColorBase
	{
		scope = 2;
		displayName = "Camelbak - Black";
		hiddenSelectionsTextures[] = {"Backpacks\Camelbak\data\Camel_Tan_co.paa","Backpacks\Camelbak\data\Camel_Tan_co.paa","Backpacks\Camelbak\data\Camel_Tan_co.paa"};
	};
	class PRESIDIO_Assault_ColorBase: TaloonBag_ColorBase
	{
		displayName = "Assault Pack";
		descriptionShort = "Easy to wear and able to store a decent amount of gear and ammunition";
		model = "Backpacks\PRESIDIO_Assault\PRESIDIO_Assault_g.p3d";
		inventorySlot[] = {"Back"};
		attachments[] = {"Chemlight","WalkieTalkie"};
		itemInfo[] = {"Clothing","Back"};
		rotationFlags = 16;
		weight = 1300;
		itemSize[] = {4,5};
		itemsCargoSize[] = {8,8};
		varWetMax = 0.79;
		heatIsolation = 0.5;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		soundAttType = "Outdoor";
		randomQuantity = 3;
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class ClothingTypes
		{
			male = "Backpacks\PRESIDIO_Assault\PRESIDIO_Assault.p3d";
			female = "Backpacks\PRESIDIO_Assault\PRESIDIO_Assault.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 120;
					healthLevels[] = {{1.0,{"DZ\Characters\backpacks\data\taloon.rvmat"}},{0.6,{"DZ\Characters\backpacks\data\taloon.rvmat"}},{0.5,{"DZ\Characters\backpacks\data\taloon_damage.rvmat"}},{0.3,{"DZ\Characters\backpacks\data\taloon_damage.rvmat"}},{0.0,{"DZ\Characters\backpacks\data\taloon_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet = "pickUpBackPack_Plastic_Light_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpBackPack_Plastic_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "taloonbag_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class PRESIDIO_Assault_Multicam: PRESIDIO_Assault_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"Backpacks\PRESIDIO_Assault\data\PRESIDIO_Multicam_co.paa","Backpacks\PRESIDIO_Assault\data\PRESIDIO_Multicam_co.paa","Backpacks\PRESIDIO_Assault\data\PRESIDIO_Multicam_co.paa"};
	};
	class Raid_6SH118_ColorBase: MountainBag_ColorBase
	{
		displayName = "6SH118 raid backpack";
		descriptionShort = "The raid backpack 6Sh118 is a set of combat equipment of the 2nd generation Ratnik gear kit. The 6Sh118 tactical army backpack is a modernization of the model of the raid backpack called 6B38 Permyachka. The raid 6Sh118 backpack is an element of individual military equipment of military personnel, designed to carry fire support equipment, weapons, ammunition, elements of mountain equipment, as well as his personal belongings. The backpack can be used during combat operations, during long transitions and raid events.";
		model = "Backpacks\6sh118\Raid_Bag_g.p3d";
		inventorySlot[] = {"Back"};
		attachments[] = {"Chemlight","WalkieTalkie"};
		itemInfo[] = {"Clothing","Back"};
		rotationFlags = 16;
		itemSize[] = {5,7};
		itemsCargoSize[] = {10,20};
		weight = 2300;
		absorbency = 0.2;
		heatIsolation = 0.13;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		soundAttType = "Outdoor";
		randomQuantity = 4;
		hiddenSelections[] = {"camofemale","camomale","camoground"};
		hiddenSelectionsTextures[] = {};
		class ClothingTypes
		{
			male = "Backpacks\6sh118\Raid_Bag.p3d";
			female = "Backpacks\6sh118\Raid_Bag.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"DZ\Characters\backpacks\data\mountain.rvmat"}},{0.6,{"DZ\Characters\backpacks\data\mountain.rvmat"}},{0.5,{"DZ\Characters\backpacks\data\mountain_damage.rvmat"}},{0.3,{"DZ\Characters\backpacks\data\mountain_damage.rvmat"}},{0.0,{"DZ\Characters\backpacks\data\mountain_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet = "pickUpBackPack_Plastic_Light_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpBackPack_Plastic_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "taloonbag_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class Raid_6SH118_Black: Raid_6SH118_ColorBase
	{
		scope = 2;
		displayName = "6SH118 Raid Backpack - Black";
		hiddenSelectionsTextures[] = {"Backpacks\6sh118\data\6sh118_Black_co.paa","Backpacks\6sh118\data\6sh118_Black_co.paa","Backpacks\6sh118\data\6sh118_Black_co.paa"};
		color = "Black";
	};
	class Raid_6SH118_Green: Raid_6SH118_ColorBase
	{
		scope = 2;
		displayName = "6SH118 Raid Backpack - Green";
		hiddenSelectionsTextures[] = {"Backpacks\6sh118\data\6sh118_Green_co.paa","Backpacks\6sh118\data\6sh118_Green_co.paa","Backpacks\6sh118\data\6sh118_Green_co.paa"};
		color = "Green";
	};
	class Raid_6SH118_Tan: Raid_6SH118_ColorBase
	{
		scope = 2;
		displayName = "6SH118 Raid Backpack - Tan";
		hiddenSelectionsTextures[] = {"Backpacks\6sh118\data\6sh118_Tan_co.paa","Backpacks\6sh118\data\6sh118_Tan_co.paa","Backpacks\6sh118\data\6sh118_Tan_co.paa"};
		color = "Tan";
	};
	class Raid_6SH118_Khaki: Raid_6SH118_ColorBase
	{
		scope = 2;
		displayName = "6SH118 Raid Backpack - Khaki";
		hiddenSelectionsTextures[] = {"Backpacks\6sh118\data\6sh118_Khaki_co.paa","Backpacks\6sh118\data\6sh118_Khaki_co.paa","Backpacks\6sh118\data\6sh118_Khaki_co.paa"};
	};
	class Raid_6SH118_Sand: Raid_6SH118_ColorBase
	{
		scope = 2;
		displayName = "6SH118 Raid Backpack - Sand";
		hiddenSelectionsTextures[] = {"Backpacks\6sh118\data\6sh118_Sand_co.paa","Backpacks\6sh118\data\6sh118_Sand_co.paa","Backpacks\6sh118\data\6sh118_Sand_co.paa"};
	};
	class Raid_6SH118_Digital: Raid_6SH118_ColorBase
	{
		scope = 2;
		displayName = "6SH118 Raid Backpack - Digital";
		hiddenSelectionsTextures[] = {"Backpacks\6sh118\data\6sh118_Digital_co.paa","Backpacks\6sh118\data\6sh118_Digital_co.paa","Backpacks\6sh118\data\6sh118_Digital_co.paa"};
	};
	class Moab_Rush_ColorBase: TaloonBag_ColorBase
	{
		displayName = "5.11 TACTICAL RUSH MOAB 10";
		descriptionShort = "The MOAB 10 (Mobile Operation Attachment Bag) is part of the RUSH series of premium quality gear packs from 5.11 Tactical.";
		model = "Backpacks\Moab_Rush\Moab_g.p3d";
		inventorySlot[] = {"Back"};
		attachments[] = {"Chemlight","WalkieTalkie"};
		itemInfo[] = {"Clothing","Back"};
		rotationFlags = 16;
		weight = 1300;
		itemSize[] = {4,5};
		itemsCargoSize[] = {8,9};
		varWetMax = 0.79;
		heatIsolation = 0.5;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		soundAttType = "Outdoor";
		randomQuantity = 3;
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class ClothingTypes
		{
			male = "Backpacks\Moab_Rush\Moab.p3d";
			female = "Backpacks\Moab_Rush\Moab.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 120;
					healthLevels[] = {{1.0,{"DZ\Characters\backpacks\data\taloon.rvmat"}},{0.6,{"DZ\Characters\backpacks\data\taloon.rvmat"}},{0.5,{"DZ\Characters\backpacks\data\taloon_damage.rvmat"}},{0.3,{"DZ\Characters\backpacks\data\taloon_damage.rvmat"}},{0.0,{"DZ\Characters\backpacks\data\taloon_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet = "pickUpBackPack_Plastic_Light_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpBackPack_Plastic_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "taloonbag_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class Moab_Black: Moab_Rush_ColorBase
	{
		scope = 2;
		displayName = "5.11 TACTICAL RUSH MOAB 10 - Black";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"Backpacks\Moab_Rush\data\Moab_Rush_Black_co.paa","Backpacks\Moab_Rush\data\Moab_Rush_Black_co.paa","Backpacks\Moab_Rush\data\Moab_Rush_Black_co.paa"};
	};
	class Moab_Blue: Moab_Rush_ColorBase
	{
		scope = 2;
		displayName = "5.11 TACTICAL RUSH MOAB 10 - Blue";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"Backpacks\Moab_Rush\data\Moab_Rush_Blue_co.paa","Backpacks\Moab_Rush\data\Moab_Rush_Blue_co.paa","Backpacks\Moab_Rush\data\Moab_Rush_Blue_co.paa"};
	};
	class Moab_Flecktarn: Moab_Rush_ColorBase
	{
		scope = 2;
		displayName = "5.11 TACTICAL RUSH MOAB 10 - Flecktarn";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"Backpacks\Moab_Rush\data\Moab_Rush_Flecktarn_co.paa","Backpacks\Moab_Rush\data\Moab_Rush_Flecktarn_co.paa","Backpacks\Moab_Rush\data\Moab_Rush_Flecktarn_co.paa"};
	};
	class Moab_Multicam: Moab_Rush_ColorBase
	{
		scope = 2;
		displayName = "5.11 TACTICAL RUSH MOAB 10 - Multicam";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"Backpacks\Moab_Rush\data\Moab_Rush_Multicam_co.paa","Backpacks\Moab_Rush\data\Moab_Rush_Multicam_co.paa","Backpacks\Moab_Rush\data\Moab_Rush_Multicam_co.paa"};
	};
	class Moab_Green: Moab_Rush_ColorBase
	{
		scope = 2;
		displayName = "5.11 TACTICAL RUSH MOAB 10 - Green";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"Backpacks\Moab_Rush\data\Moab_Rush_Green_co.paa","Backpacks\Moab_Rush\data\Moab_Rush_Green_co.paa","Backpacks\Moab_Rush\data\Moab_Rush_Green_co.paa"};
	};
	class Moab_Tan: Moab_Rush_ColorBase
	{
		scope = 2;
		displayName = "5.11 TACTICAL RUSH MOAB 10 - Tan";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"Backpacks\Moab_Rush\data\Moab_Rush_Tan_co.paa","Backpacks\Moab_Rush\data\Moab_Rush_Tan_co.paa","Backpacks\Moab_Rush\data\Moab_Rush_Tan_co.paa"};
	};
	class Moab_WoodLand: Moab_Rush_ColorBase
	{
		scope = 2;
		displayName = "5.11 TACTICAL RUSH MOAB 10 - WoodLand";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"Backpacks\Moab_Rush\data\Moab_Rush_WoodLand_co.paa","Backpacks\Moab_Rush\data\Moab_Rush_WoodLand_co.paa","Backpacks\Moab_Rush\data\Moab_Rush_WoodLand_co.paa"};
	};
	class Raccoon65_ColorBase: MountainBag_ColorBase
	{
		displayName = "Raccoon65";
		descriptionShort = "Large tactical backpack designed for long expeditions and army operations.";
		model = "Backpacks\Raccoon65\Raccoon65_g.p3d";
		inventorySlot[] = {"Back"};
		attachments[] = {"Chemlight","WalkieTalkie"};
		itemInfo[] = {"Clothing","Back"};
		rotationFlags = 16;
		itemSize[] = {5,7};
		itemsCargoSize[] = {10,10};
		weight = 2300;
		absorbency = 0.2;
		heatIsolation = 0.13;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		soundAttType = "Outdoor";
		randomQuantity = 4;
		hiddenSelections[] = {"camofemale","camomale","camoground"};
		hiddenSelectionsTextures[] = {};
		class ClothingTypes
		{
			male = "Backpacks\Raccoon65\Raccoon65.p3d";
			female = "Backpacks\Raccoon65\Raccoon65.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 120;
					healthLevels[] = {{1.0,{"DZ\Characters\backpacks\data\mountain.rvmat"}},{0.6,{"DZ\Characters\backpacks\data\mountain.rvmat"}},{0.5,{"DZ\Characters\backpacks\data\mountain_damage.rvmat"}},{0.3,{"DZ\Characters\backpacks\data\mountain_damage.rvmat"}},{0.0,{"DZ\Characters\backpacks\data\mountain_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet = "pickUpBackPack_Plastic_Light_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpBackPack_Plastic_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "taloonbag_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class Raccoon65_Green: Raccoon65_ColorBase
	{
		scope = 2;
		displayName = "Raccoon65 - Green";
		hiddenSelectionsTextures[] = {"Backpacks\Raccoon65\data\Raccoon65_green_co.paa","Backpacks\Raccoon65\data\Raccoon65_green_co.paa","Backpacks\Raccoon65\data\Raccoon65_green_co.paa"};
	};
	class Raccoon65_Black: Raccoon65_ColorBase
	{
		scope = 2;
		displayName = "Raccoon65 - Black";
		hiddenSelectionsTextures[] = {"Backpacks\Raccoon65\data\Raccoon65_black_co.paa","Backpacks\Raccoon65\data\Raccoon65_black_co.paa","Backpacks\Raccoon65\data\Raccoon65_black_co.paa"};
	};
	class Raccoon65_Tan: Raccoon65_ColorBase
	{
		scope = 2;
		displayName = "Raccoon65 - Tan";
		hiddenSelectionsTextures[] = {"Backpacks\Raccoon65\data\Raccoon65_tan_co.paa","Backpacks\Raccoon65\data\Raccoon65_tan_co.paa","Backpacks\Raccoon65\data\Raccoon65_tan_co.paa"};
	};
	class Gun_Bag_ColorBase: MountainBag_ColorBase
	{
		displayName = "Gun Bag";
		descriptionShort = "Place Holder for Gun Bag description";
		model = "Backpacks\Gun_Bag\gun_bag_g.p3d";
		inventorySlot[] = {"Back"};
		attachments[] = {"Shoulder1","Shoulder2","Shoulder3","Shoulder4","Pistol"};
		itemInfo[] = {"Clothing","Back"};
		rotationFlags = 16;
		itemSize[] = {10,10};
		itemsCargoSize[] = {5,6};
		weight = 2300;
		absorbency = 0.2;
		heatIsolation = 0.13;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		soundAttType = "Outdoor";
		randomQuantity = 4;
		hiddenSelections[] = {"camofemale","camomale","camoground"};
		hiddenSelectionsTextures[] = {};
		class ClothingTypes
		{
			male = "Backpacks\Gun_Bag\gun_bag.p3d";
			female = "Backpacks\Gun_Bag\gun_bag.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 120;
					healthLevels[] = {{1.0,{"DZ\Characters\backpacks\data\mountain.rvmat"}},{0.6,{"DZ\Characters\backpacks\data\mountain.rvmat"}},{0.5,{"DZ\Characters\backpacks\data\mountain_damage.rvmat"}},{0.3,{"DZ\Characters\backpacks\data\mountain_damage.rvmat"}},{0.0,{"DZ\Characters\backpacks\data\mountain_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet = "pickUpBackPack_Plastic_Light_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpBackPack_Plastic_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "taloonbag_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class Gun_Bag_Green: Gun_Bag_ColorBase
	{
		scope = 2;
		displayName = "Gun Bag - Green";
		hiddenSelectionsTextures[] = {"Backpacks\Gun_Bag\data\Gun_Bag_Green_co.paa","Backpacks\Gun_Bag\data\Gun_Bag_Green_co.paa","Backpacks\Gun_Bag\data\Gun_Bag_Green_co.paa"};
		color = "Green";
	};
	class Gun_Bag_Black: Gun_Bag_ColorBase
	{
		scope = 2;
		displayName = "Gun Bag - Black";
		hiddenSelectionsTextures[] = {"Backpacks\Gun_Bag\data\Gun_Bag_Black_co.paa","Backpacks\Gun_Bag\data\Gun_Bag_Black_co.paa","Backpacks\Gun_Bag\data\Gun_Bag_Black_co.paa"};
		color = "Black";
	};
	class Gun_Bag_Tan: Gun_Bag_ColorBase
	{
		scope = 2;
		displayName = "Gun Bag - Tan";
		hiddenSelectionsTextures[] = {"Backpacks\Gun_Bag\data\Gun_Bag_Tan_co.paa","Backpacks\Gun_Bag\data\Gun_Bag_Tan_co.paa","Backpacks\Gun_Bag\data\Gun_Bag_Tan_co.paa"};
		color = "Tan";
	};
	class Gun_Bag_Snow: Gun_Bag_ColorBase
	{
		scope = 2;
		displayName = "Gun Bag - Snow";
		hiddenSelectionsTextures[] = {"Backpacks\Gun_Bag\data\Gun_Bag_Tan_co.paa","Backpacks\Gun_Bag\data\Gun_Bag_Tan_co.paa","Backpacks\Gun_Bag\data\Gun_Bag_Tan_co.paa"};
		color = "Snow";
	};
	class HuntingBag;
	class PegasusBackPack_Base: HuntingBag
	{
		scope = 0;
		displayName = "Pegasus BackPack";
		descriptionShort = "Pegasus BackPack";
		model = "\Backpacks\PegasusBag\backpack_g.p3d";
		rotationFlags = 4;
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsMaterials[] = {"Backpacks\PegasusBag\data\backpack.rvmat","Backpacks\PegasusBag\data\details.rvmat"};
		inventorySlot[] = {"Back"};
		simulation = "clothing";
		itemInfo[] = {"Clothing","Back"};
		attachments[] = {"Chemlight","Belt_Left"};
		itemSize[] = {4,5};
		itemsCargoSize[] = {10,8};
		class ClothingTypes
		{
			male = "\Backpacks\PegasusBag\backpack.p3d";
			female = "\Backpacks\PegasusBag\backpack.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 150;
					healthLevels[] = {{1.0,{"DZ\Characters\backpacks\data\taloon.rvmat"}},{0.6,{"DZ\Characters\backpacks\data\taloon.rvmat"}},{0.5,{"DZ\Characters\backpacks\data\taloon_damage.rvmat"}},{0.3,{"DZ\Characters\backpacks\data\taloon_damage.rvmat"}},{0.0,{"DZ\Characters\backpacks\data\taloon_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet = "pickUpBackPack_Plastic_Light_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpBackPack_Plastic_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "taloonbag_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class PegasusBackPack_Green: PegasusBackPack_Base
	{
		scope = 2;
		displayName = "Green Pegasus BackPack";
		descriptionShort = " Green Pegasus BackPack";
		hiddenSelectionsTextures[] = {"Backpacks\PegasusBag\data\baggreen_co.paa","Backpacks\PegasusBag\data\basecoDetailslA_co.paa"};
	};
	class PegasusBackPack_Tan: PegasusBackPack_Base
	{
		scope = 2;
		displayName = "Tan Pegasus BackPack";
		descriptionShort = " Tan Pegasus BackPack";
		hiddenSelectionsTextures[] = {"Backpacks\PegasusBag\data\bagtan_co.paa","Backpacks\PegasusBag\data\basecoDetailsltan_co.paa"};
	};
	class PegasusBackPack_Black: PegasusBackPack_Base
	{
		scope = 2;
		displayName = "Black Pegasus BackPack";
		descriptionShort = " Black Pegasus BackPack";
		hiddenSelectionsTextures[] = {"Backpacks\PegasusBag\data\bagblack_co.paa","Backpacks\PegasusBag\data\basecoDetailslBlack_co.paa"};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxym4a1: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"shoulder"};
		model = "\dz\weapons\firearms\m4\m4a1.p3d";
	};
	class Proxybelt_left_proxy: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Belt_Left"};
		model = "\DZ\characters\belts\proxies\belt_left_proxy.p3d";
	};
};
class CfgSlots
{
	class Slot_Gun_Bag_1
	{
		name = "Gun_Bag_1";
		displayName = "Gun_Bag_1";
	};
	class Slot_Gun_Bag_2
	{
		name = "Gun_Bag_2";
		displayName = "Gun_Bag_2";
	};
	class Slot_Gun_Bag_3
	{
		name = "Gun_Bag_3";
		displayName = "Gun_Bag_3";
	};
	class Slot_Gun_Bag_4
	{
		name = "Gun_Bag_4";
		displayName = "Gun_Bag_4";
	};
	class Slot_Gun_Bag_5
	{
		name = "Gun_Bag_5";
		displayName = "Gun_Bag_5";
	};
	class Slot_Gun_Bag_6
	{
		name = "Gun_Bag_6";
		displayName = "Gun_Bag_6";
	};
};
