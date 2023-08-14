////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Mon Aug 14 16:30:22 2023 : 'file' last modified on Mon Aug 14 16:30:22 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class NULLED_Belts
	{
		units[] = {"NULLED_Warbelt_Black","NULLED_Warbelt_Green","NULLED_Warbelt_Tan","NULLED_Warbelt_Multicam","NULLED_Warbelt_Snow"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Characters_Belts","NULLED_Attachments"};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class Clothing;
	class NULLED_Warbelt_Base: Clothing
	{
		displayName = "War Belt";
		descriptionShort = "A belt that allows most molle attachments. It can take 3 mag pouches, a drop pouch, a holster, and a sheath.";
		model = "Belts\Warbelt\WarBelt_g.p3d";
		attachments[] = {"Mag_Pouch1","Mag_Pouch2","Mag_Pouch3","Drop_Pouch","Belt_Right","Belt_Back","IFAK","map_pouch"};
		inventorySlot[] = {"Hips"};
		itemInfo[] = {"Clothing","Hips"};
		itemSize[] = {3,2};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
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
		class ClothingTypes
		{
			male = "Belts\Warbelt\warbelt.p3d";
			female = "Belts\Warbelt\warbelt.p3d";
		};
	};
	class NULLED_Warbelt_Black: NULLED_Warbelt_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"Belts\Warbelt\data\Warbelt_Black_co.paa","Belts\Warbelt\data\Warbelt_Black_co.paa","Belts\Warbelt\data\Warbelt_Black_co.paa"};
	};
	class NULLED_Warbelt_Green: NULLED_Warbelt_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"Belts\Warbelt\data\Warbelt_Green_co.paa","Belts\Warbelt\data\Warbelt_Green_co.paa","Belts\Warbelt\data\Warbelt_Green_co.paa"};
	};
	class NULLED_Warbelt_Tan: NULLED_Warbelt_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"Belts\Warbelt\data\Warbelt_Tan_co.paa","Belts\Warbelt\data\Warbelt_Tan_co.paa","Belts\Warbelt\data\Warbelt_Tan_co.paa"};
	};
	class NULLED_Warbelt_Multicam: NULLED_Warbelt_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"Belts\Warbelt\data\Warbelt_Multicam_co.paa","Belts\Warbelt\data\Warbelt_Multicam_co.paa","Belts\Warbelt\data\Warbelt_Multicam_co.paa"};
	};
	class NULLED_Warbelt_Snow: NULLED_Warbelt_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"Belts\Warbelt\data\Warbelt_Snow_co.paa","Belts\Warbelt\data\Warbelt_Snow_co.paa","Belts\Warbelt\data\Warbelt_Snow_co.paa"};
	};
};
