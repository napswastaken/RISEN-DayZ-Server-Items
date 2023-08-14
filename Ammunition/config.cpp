////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Mon Aug 14 16:29:59 2023 : 'file' last modified on Mon Aug 14 16:29:59 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class NULLED_Weapons_Ammunition
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Ammunition","DZ_Weapons_Projectiles","DZ_Weapons_Magazines"};
		magazines[] = {"Ammo_46x30","NULLED_Ammo_NeftRound","NULLED_Ammo_127x55_SC_130VPS","NULLED_Ammo_23x75_Shrap10","NULLED_Ammo_303British","NULLED_Ammo_APS","NULLED_Ammo_792x57","NULLED_Ammo_127x55_PS12B","NULLED_Ammo_127x55_PS12A","NULLED_Ammo_408","NULLED_Ammo_57x28_SS195LF","NULLED_Ammo_57x28_ss192","NULLED_Ammo_57x28_ss190","Ammo_50ActionExpress","NULLED_Ammo_338lm","NULLED_Ammo_338lm_AP","NULLED_Ammo_127x99","NULLED_Ammo_M995","NULLED_Ammo_Blackout","Mag_HoneyBadger_PMAG_20Rnd","Mag_VR80_10Rnd","Mag_APS_26Rnd","Mag_VSSK_5Rnd","Mag_VR80_5Rnd","Mag_Fiveseven_30Rnd","Mag_Fiveseven_20Rnd","Mag_M9A1_15Rnd","Mag_DesertEagle_7Rnd","Drum_MG42_50Rnd","Mag_M82A1_10Rnd","Mag_R700_8Rnd","Mag_R700_5Rnd","NULLED_Mag_SRS_7Rnd","NULLED_Mag_SRS_5Rnd","Mag_M14_20Rnd","Mag_Scar_H_20Rnd","Mag_M14_10Rnd","Mag_Glock19_15Rnd","Mag_Glock_21Rnd","Mag_Glock18_50Rnd","Drum_cmag_100Rnd","Mag_AK15_30Rnd","Mag_GM6_Lynx_8Rnd","Mag_ASH12_10Rnd","Mag_P90_50Rnd","Mag_Vector_30Rnd","Mag_Vector_13Rnd","mag_sr25_20rnd","Mag_M300_7rnd","NULLED_Mag_M200_7rnd","Mag_R700_762_7Rnd","Mag_R700_762_10Rnd","Mag_SV98_10Rnd","Mag_RSASS_20Rnd","Mag_SR3M130_30Rnd"};
		ammo[] = {"NULLED_Bullet_23x75_Shrap10","Bullet_308Win","Bullet_762x39","Bullet_556x45","Bullet_9x19","Bullet_12GaugePellets","Bullet_45ACP","Bullet_762x54","Bullet_9x39AP","Bullet_9x39","Bullet_46x30","NULLED_Bullet_127x55_SC_130VPS","NULLED_Bullet_127x55_PS12B","NULLED_Bullet_127x55_PS12A","NULLED_Bullet_M995","NULLED_Bullet_Blackout","NULLED_Bullet_57x28_SS195LF","NULLED_Bullet_57x28_ss190","NULLED_Bullet_57x28_ss192","Bullet_50ActionExpress","NULLED_Bullet_APS","NULLED_Bullet_338lm","NULLED_Bullet_338_AP","NULLED_Bullet_127x99","NULLED_Bullet_408","Bullet_NeftRound","NULLED_Bullet_303British","NULLED_Bullet_792x57"};
	};
};
class CfgMods
{
	class NULLED_Weapons_Ammunition
	{
		dir = "NULLED_Weapons_Ammunition";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "The AC Community Mod";
		credits = "0";
		author = "Crocell";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {};
		class defs{};
	};
};
class cfgAmmoTypes
{
	class Atype_NULLED_Bullet_APS
	{
		name = "NULLED_Bullet_APS";
	};
	class Atype_NULLED_Bullet_M995
	{
		name = "NULLED_Bullet_M995";
	};
	class Atype_NULLED_Bullet_23x75_Shrap10
	{
		name = "NULLED_Bullet_23x75_Shrap10";
	};
	class Atype_Bullet_50ActionExpress
	{
		name = "Bullet_50ActionExpress";
	};
	class Atype_NULLED_Bullet_127x55_SC_130VPS
	{
		name = "NULLED_Bullet_127x55_SC_130VPS";
	};
	class Atype_NULLED_Bullet_127x55_PS12B
	{
		name = "NULLED_Bullet_127x55_PS12B";
	};
	class Atype_NULLED_Bullet_127x55_PS12A
	{
		name = "NULLED_Bullet_127x55_PS12A";
	};
	class AType_NULLED_Bullet_57x28_SS195LF
	{
		name = "NULLED_Bullet_57x28_SS195LF";
	};
	class AType_NULLED_Bullet_Blackout
	{
		name = "NULLED_Bullet_Blackout";
	};
	class AType_NULLED_Bullet_57x28_ss190
	{
		name = "NULLED_Bullet_57x28_ss190";
	};
	class AType_NULLED_Bullet_57x28_ss192
	{
		name = "NULLED_Bullet_57x28_ss192";
	};
	class AType_NULLED_Bullet_338lm
	{
		name = "NULLED_Bullet_338lm";
	};
	class AType_NULLED_Bullet_338_AP
	{
		name = "NULLED_Bullet_338_AP";
	};
	class AType_NULLED_Bullet_127x99
	{
		name = "NULLED_Bullet_127x99";
	};
	class AType_NULLED_Bullet_NeftRound
	{
		name = "NULLED_Bullet_NeftRound";
	};
	class Atype_NULLED_Bullet_408
	{
		name = "NULLED_Bullet_408";
	};
	class Atype_NULLED_Bullet_792x57
	{
		name = "NULLED_Bullet_792x57";
	};
	class Atype_NULLED_Bullet_303British
	{
		name = "NULLED_Bullet_303British";
	};
	class Atype_Bullet_46x30
	{
		name = "Bullet_46x30";
	};
};
class CfgAmmo
{
	class Bullet_Base;
	class BulletCore;
	class Shotgun_Base;
	class NULLED_Bullet_23x75_Shrap10: Shotgun_Base
	{
		scope = 2;
		proxyShape = "\dz\weapons\projectiles\shotgunshell_pellets.p3d";
		muzzleFlashParticle = "weapon_shot_pellets";
		casing = "FxCartridge_23x75";
		round = "FxRound_23x75";
		spawnPileType = "NULLED_Ammo_23x75_Shrap10";
		hit = 6;
		indirectHit = 0;
		indirectHitRange = 0;
		hitShockHead = 20000;
		hitShock = 400;
		hitBlood = -200;
		hitHealth = -200;
		bleedChance = 2;
		initSpeed = 270;
		typicalSpeed = 270;
		airFriction = -0.003823341;
		caliber = 0.3;
		deflecting = 20;
		dispersion = 0.15;
		projectilesCount = 8;
		damageBarrel = 600;
		damageBarrelDestroyed = 600;
		weight = 0.005;
		impactBehaviour = 1;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 1;
			defaultDamageOverride[] = {{1,1}};
			class Health
			{
				damage = 67;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 40;
			};
		};
		class NoiseHit
		{
			strength = 2;
			type = "shot";
		};
	};
	class Bullet_308Win: Bullet_Base
	{
		deflecting = 30;
	};
	class Bullet_762x39: Bullet_Base
	{
		deflecting = 17.5;
	};
	class Bullet_556x45: Bullet_Base
	{
		deflecting = 40;
		class DamageApplied
		{
			class Health
			{
				damage = 100;
			};
		};
	};
	class Bullet_22;
	class Bullet_9x19: Bullet_Base
	{
		initSpeed = 457;
		typicalSpeed = 457;
		deflecting = 5;
		class DamageApplied
		{
			class Health
			{
				damage = 50;
			};
		};
	};
	class Bullet_357;
	class Bullet_12GaugeBeanbag;
	class Bullet_12GaugePellets: Shotgun_Base
	{
		class DamageApplied
		{
			class Health
			{
				damage = 34;
				armorDamage = 0;
			};
		};
	};
	class Bullet_45ACP: Bullet_Base
	{
		initSpeed = 285;
		typicalSpeed = 285;
		deflecting = 6.5;
		class DamageApplied
		{
			class Health
			{
				damage = 70;
			};
		};
	};
	class Bullet_762x54: Bullet_Base
	{
		initSpeed = 865;
		typicalSpeed = 865;
		deflecting = 39;
	};
	class Bullet_9x39AP: Bullet_Base
	{
		initSpeed = 295;
		typicalSpeed = 295;
		deflecting = 50;
	};
	class Bullet_9x39: Bullet_Base
	{
		initSpeed = 310;
		typicalSpeed = 310;
		deflecting = 40;
	};
	class Bullet_46x30: Bullet_9x39
	{
		scope = 2;
		hitAnimation = 0;
		spawnPileType = "Ammo_46x30";
		initSpeed = 450;
		typicalSpeed = 450;
		projectilesCount = 1;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 1;
			class Health
			{
				damage = 105;
			};
			class Blood
			{
				damage = 85;
			};
			class Shock
			{
				damage = 50;
			};
		};
	};
	class NULLED_Bullet_127x55_SC_130VPS: Bullet_Base
	{
		scope = 2;
		lootCategory = "Crafted";
		casing = "FxCartridge_127x55";
		round = "FxRound_556";
		spawnPileType = "NULLED_Ammo_127x55_SC_130VPS";
		muzzleFlashParticle = "weapon_shot_mp5k_02_boris";
		hit = 14;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 925;
		typicalSpeed = 925;
		airFriction = -0.00035;
		caliber = 3.0;
		deflecting = 50;
		damageBarrel = 6;
		damageBarrelDestroyed = 60;
		weight = 0.01;
		impactBehaviour = 1;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{1,1}};
			class Health
			{
				damage = 350;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 90;
			};
		};
		class NoiseHit
		{
			strength = 7;
			type = "shot";
		};
	};
	class NULLED_Bullet_127x55_PS12B: Bullet_Base
	{
		scope = 2;
		lootCategory = "Crafted";
		casing = "FxCartridge_127x55";
		round = "FxRound_556";
		spawnPileType = "NULLED_Ammo_127x55_PS12B";
		muzzleFlashParticle = "weapon_shot_mp5k_02_boris";
		hit = 14;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 300;
		typicalSpeed = 300;
		airFriction = -0.00012395094;
		caliber = 2;
		deflecting = 50;
		supersonicCrackNear[] = {};
		supersonicCrackFar[] = {};
		damageBarrel = 6;
		damageBarrelDestroyed = 60;
		weight = 0.01;
		impactBehaviour = 1;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{1,1}};
			class Health
			{
				damage = 102;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 90;
			};
		};
		class NoiseHit
		{
			strength = 4;
			type = "shot";
		};
	};
	class NULLED_Bullet_127x55_PS12A: Bullet_Base
	{
		scope = 2;
		lootCategory = "Crafted";
		casing = "FxCartridge_127x55";
		round = "FxRound_556";
		spawnPileType = "NULLED_Ammo_127x55_PS12A";
		muzzleFlashParticle = "weapon_shot_mp5k_02_boris";
		hit = 14;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 290;
		typicalSpeed = 290;
		airFriction = -0.00012395094;
		caliber = 0.9;
		deflecting = 20;
		supersonicCrackNear[] = {};
		supersonicCrackFar[] = {};
		damageBarrel = 6;
		damageBarrelDestroyed = 60;
		weight = 0.01;
		impactBehaviour = 1;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.5,1}};
			class Health
			{
				damage = 115;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 120;
			};
		};
		class NoiseHit
		{
			strength = 7;
			type = "shot";
		};
	};
	class NULLED_Bullet_M995: Bullet_556x45
	{
		scope = 2;
		lootCategory = "Crafted";
		spawnPileType = "NULLED_Ammo_M995";
		muzzleFlashParticle = "weapon_shot_mp5k_02_boris";
		hit = 10;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 1013;
		typicalSpeed = 1013;
		caliber = 1.2;
		deflecting = 36;
		impactBehaviour = 1;
		class DamageApplied
		{
			type = "Projectile";
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.5,1}};
			class Health
			{
				damage = 50;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 55;
			};
		};
		class NoiseHit
		{
			strength = 3;
			type = "shot";
		};
	};
	class NULLED_Bullet_Blackout: Bullet_Base
	{
		scope = 2;
		lootCategory = "Crafted";
		casing = "FxCartridge_57x28";
		round = "FxRound_556";
		spawnPileType = "NULLED_Ammo_Blackout";
		muzzleFlashParticle = "weapon_shot_mp5k_02_boris";
		hit = 10;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 605;
		typicalSpeed = 605;
		airFriction = -0.0008;
		caliber = 1.0;
		deflecting = 30;
		damageBarrel = 6;
		damageBarrelDestroyed = 60;
		weight = 0.01;
		impactBehaviour = 1;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			class Health
			{
				damage = 60;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 55;
			};
		};
		class NoiseHit
		{
			strength = 3;
			type = "shot";
		};
	};
	class NULLED_Bullet_57x28_SS195LF: Bullet_Base
	{
		scope = 2;
		lootCategory = "Crafted";
		casing = "FxCartridge_57x28";
		round = "FxRound_556";
		spawnPileType = "NULLED_Ammo_57x28_SS195LF";
		hit = 7;
		indirectHit = 0;
		indirectHitRange = 0;
		tracerScale = 1;
		caliber = 0.33;
		deflecting = 30;
		initSpeed = 716;
		typicalSpeed = 716;
		airFriction = -0.0020591088;
		muzzleFlashParticle = "weapon_shot_mp5k_01";
		weight = 0.0084;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 1;
			defaultDamageOverride[] = {{1,1}};
			class Health
			{
				damage = 58;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 100;
			};
		};
		class NoiseHit
		{
			strength = 3;
			type = "shot";
		};
	};
	class NULLED_Bullet_57x28_ss190: Bullet_Base
	{
		scope = 2;
		lootCategory = "Crafted";
		casing = "FxCartridge_57x28";
		round = "FxRound_556";
		hit = 7;
		indirectHit = 0;
		indirectHitRange = 0;
		tracerScale = 1;
		caliber = 1.2;
		deflecting = 60;
		initSpeed = 716;
		typicalSpeed = 716;
		airFriction = -0.0023206766;
		muzzleFlashParticle = "weapon_shot_mp5k_01";
		weight = 0.0084;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 1;
			defaultDamageOverride[] = {{0.5,1}};
			class Health
			{
				damage = 51;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 66;
			};
		};
		class NoiseHit
		{
			strength = 3;
			type = "shot";
		};
	};
	class NULLED_Bullet_57x28_ss192: Bullet_Base
	{
		scope = 2;
		lootCategory = "Crafted";
		casing = "FxCartridge_57x28";
		round = "FxRound_556";
		hit = 10;
		indirectHit = 0;
		indirectHitRange = 0;
		tracerScale = 1;
		caliber = 0.8;
		deflecting = 30;
		initSpeed = 305;
		typicalSpeed = 305;
		airFriction = -0.0023206766;
		muzzleFlashParticle = "weapon_shot_mp5k_01";
		weight = 0.0084;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 1;
			defaultDamageOverride[] = {{1,1}};
			class Health
			{
				damage = 60;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 60;
			};
		};
		class NoiseHit
		{
			strength = 3;
			type = "shot";
		};
	};
	class Bullet_50ActionExpress: Bullet_Base
	{
		scope = 2;
		lootCategory = "Crafted";
		cartridge = "FxCartridge_9mm";
		spawnPileType = "Ammo_50ActionExpress";
		hit = 9;
		indirectHit = 0;
		indirectHitRange = 0;
		tracerScale = 1;
		caliber = 1;
		deflecting = 30;
		airFriction = -0.008314906;
		typicalSpeed = 1475;
		initSpeed = 1475;
		weight = 0.008;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 1;
			class Health
			{
				damage = 140;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 100;
			};
		};
		class NoiseHit
		{
			strength = 3;
			type = "shot";
		};
	};
	class NULLED_Bullet_APS: Bullet_Base
	{
		scope = 2;
		lootCategory = "Crafted";
		cartridge = "FxCartridge_APS_Shell";
		round = "FxRound_APS_Single";
		spawnPileType = "NULLED_Ammo_APS";
		muzzleFlashParticle = "weapon_shot_mp5k_02_boris";
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 360;
		typicalSpeed = 360;
		airFriction = -0.0008;
		caliber = 1.0;
		deflecting = 10;
		damageBarrel = 6;
		damageBarrelDestroyed = 60;
		weight = 0.01;
		impactBehaviour = 1;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 1;
			class Health
			{
				damage = 95;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 100;
			};
		};
		class NoiseHit
		{
			strength = 3;
			type = "shot";
		};
	};
	class NULLED_Bullet_338lm: Bullet_Base
	{
		scope = 2;
		lootCategory = "Crafted";
		cartridge = "FxCartridge_762";
		spawnPileType = "NULLED_Ammo_338lm";
		muzzleFlashParticle = "weapon_shot_mp5k_02_boris";
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 880;
		typicalSpeed = 880;
		airFriction = -0.0006770228;
		caliber = 1.2;
		deflecting = 30;
		damageBarrel = 6;
		damageBarrelDestroyed = 60;
		weight = 0.029;
		impactBehaviour = 1;
		hitAnimation = 1;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 1;
			defaultDamageOverride[] = {{1,1}};
			class Health
			{
				damage = 275;
				armorDamage = 2;
			};
			class Blood
			{
				damage = 1500;
			};
			class Shock
			{
				damage = 350;
			};
		};
		class NoiseHit
		{
			strength = 2;
			type = "shot";
		};
	};
	class NULLED_Bullet_338_AP: Bullet_Base
	{
		scope = 2;
		lootCategory = "Crafted";
		cartridge = "FxCartridge_762";
		spawnPileType = "NULLED_Ammo_338lm_AP";
		muzzleFlashParticle = "weapon_shot_mp5k_02_boris";
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 849;
		typicalSpeed = 849;
		airFriction = -0.0006770228;
		caliber = 4;
		deflecting = 30;
		damageBarrel = 6;
		damageBarrelDestroyed = 60;
		weight = 0.029;
		impactBehaviour = 1;
		hitAnimation = 1;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 1;
			defaultDamageOverride[] = {{1,1}};
			class Health
			{
				damage = 230;
				armorDamage = 3;
			};
			class Blood
			{
				damage = 1500;
			};
			class Shock
			{
				damage = 350;
			};
		};
		class NoiseHit
		{
			strength = 2;
			type = "shot";
		};
	};
	class NULLED_Bullet_127x99: Bullet_Base
	{
		scope = 2;
		lootCategory = "Crafted";
		cartridge = "FxCartridge_127x99";
		spawnPileType = "NULLED_Ammo_127x99";
		muzzleFlashParticle = "weapon_shot_mp5k_02_boris";
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 982;
		typicalSpeed = 982;
		airFriction = -0.00065;
		caliber = 3.5;
		deflecting = 38;
		damageBarrel = 6;
		damageBarrelDestroyed = 60;
		weight = 0.01;
		impactBehaviour = 1;
		hitAnimation = 1;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{1,1}};
			class Health
			{
				damage = 600;
				armorDamage = 3;
			};
			class Blood
			{
				damage = 1500;
			};
			class Shock
			{
				damage = 400;
			};
		};
		class NoiseHit
		{
			strength = 4;
			type = "shot";
		};
	};
	class NULLED_Bullet_408: Bullet_Base
	{
		scope = 2;
		lootCategory = "Crafted";
		cartridge = "FxCartridge_408";
		spawnPileType = "NULLED_Ammo_408";
		muzzleFlashParticle = "weapon_shot_mp5k_02_boris";
		hit = 12;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 925;
		typicalSpeed = 925;
		airFriction = -0.000402448;
		caliber = 3;
		deflecting = 30;
		damageBarrel = 6;
		damageBarrelDestroyed = 60;
		weight = 0.015;
		impactBehaviour = 1;
		hitAnimation = 1;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{1,1}};
			class Health
			{
				damage = 700;
				armorDamage = 3;
			};
			class Blood
			{
				damage = 1500;
			};
			class Shock
			{
				damage = 400;
			};
		};
		class NoiseHit
		{
			strength = 4;
			type = "shot";
		};
	};
	class Bullet_NeftRound: Bullet_Base
	{
		scope = 2;
		lootCategory = "Crafted";
		cartridge = "FxCartridge_NeftRound";
		spawnPileType = "Ammo_NeftRound";
		muzzleFlashParticle = "";
		hit = 1;
		indirectHit = 0;
		indirectHitRange = 0;
		initSpeed = 27;
		typicalSpeed = 27;
		airFriction = 0;
		caliber = 0.1;
		deflecting = 70;
		damageBarrel = 6;
		damageBarrelDestroyed = 60;
		weight = 0.01;
		impactBehaviour = 1;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.01;
			bleedThreshold = 0;
			defaultDamageOverride[] = {{0,1}};
			class Health
			{
				damage = 0;
			};
			class Blood
			{
				damage = 0;
			};
			class Shock
			{
				damage = 100;
			};
		};
		class NoiseHit
		{
			strength = 0;
			type = "shot";
		};
	};
	class NULLED_Bullet_303British: Bullet_Base
	{
		scope = 2;
		casing = "FxCartridge_303British";
		round = "FxRound_762";
		spawnPileType = "NULLED_Ammo_303British";
		hit = 12;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 844;
		typicalSpeed = 844;
		airFriction = -0.00096226303;
		caliber = 0.9;
		deflecting = 40;
		damageBarrel = 6;
		damageBarrelDestroyed = 60;
		weight = 0.01;
		impactBehaviour = 1;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.5,1.0}};
			class Health
			{
				damage = 105;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 100;
			};
		};
		class NoiseHit
		{
			strength = 1;
			type = "shot";
		};
	};
	class NULLED_Bullet_792x57: Bullet_Base
	{
		scope = 2;
		casing = "FxCartridge_762";
		round = "FxRound_762";
		spawnPileType = "NULLED_Ammo_792x57";
		hit = 12;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 820;
		typicalSpeed = 820;
		airFriction = -0.00084236416;
		caliber = 0.9;
		deflecting = 10;
		damageBarrel = 6;
		damageBarrelDestroyed = 60;
		weight = 0.01;
		impactBehaviour = 1;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.5,1.0}};
			class Health
			{
				damage = 110;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 100;
			};
		};
		class NoiseHit
		{
			strength = 3;
			type = "shot";
		};
	};
};
class CfgMagazines
{
	class Ammunition_Base;
	class Ammo_45ACP: Ammunition_Base
	{
		displayName = ".45 ACP FMJ";
		descriptionShort = ".45 ACP full metal jacket round.";
	};
	class Ammo_556x45: Ammunition_Base
	{
		displayName = "5.56x45 mm M193 Ball";
		descriptionShort = "Ball cartridge with a lead core in a full copper jacket.";
	};
	class Ammo_556x45Tracer: Ammunition_Base
	{
		displayName = "5.56x45 mm M193 Ball Tracer";
		descriptionShort = "Ball cartridge with a lead core in a full copper jacket.";
	};
	class Ammo_762x54: Ammunition_Base
	{
		displayName = "7.62x54R LPS Gzh";
		descriptionShort = "(index GRAU - 57-N-323S) - cartridge with a light bullet LPS with steel core, bimetallic.";
	};
	class Ammo_762x54Tracer: Ammunition_Base
	{
		displayName = "7.62x54R LPS Gzh tracer";
		descriptionShort = "7.62x54R LPS Gzh rifle cartridge with tracer round.";
	};
	class Ammo_762x39: Ammunition_Base
	{
		displayName = "7.62x39 mm HP";
		descriptionShort = "The hunting cartridge 7.62x39 HP is intended for shooting from semi-auto carbines. It is used for sport and hunting.";
	};
	class Ammo_762x39Tracer: Ammunition_Base
	{
		displayName = "7.62x39 mm HP Tracer";
		descriptionShort = "The hunting cartridge 7.62x39 HP is intended for shooting from semi-auto carbines. It is used for sport and hunting.";
	};
	class Ammo_9x39: Ammunition_Base
	{
		displayName = "9x39 mm SP-5";
		descriptionShort = "A sniper cartridge manufactured with high accuracy, has a bullet with a steel core. To engage targets protected by 1-3 class armor.";
	};
	class Ammo_46x30: Ammo_9x39
	{
		scope = 2;
		displayName = "4.6x30mm ammo for MP7";
		descriptionShort = "The HK 4.6×30mm cartridge is a type of ammunition primarily used in the Heckler & Koch MP7 Personal defense weapon.";
		count = 20;
		ammo = "Bullet_46x30";
	};
	class Ammo_9x39AP: Ammunition_Base
	{
		displayName = "9x39 mm 7N12 BP";
		descriptionShort = "To replace the cartridge SP-6 Tula ammo plant has developed cartridge with an armor-piercing bullet BP. The cartridge is intended to eliminate manpower protected by personal protective equipment up to the 5th grade of protection. The BP bullet consists of a bimetallic shell with a truncated tip, a steel core and a lead jacket.";
	};
	class Ammo_9x19: Ammunition_Base
	{
		displayName = "9x19 mm Hollow-Point (JHP)";
		descriptionShort = "9x19 mm Hollow-Point (JHP) cartridge(s).";
	};
	class Ammo_12gaPellets: Ammunition_Base
	{
		displayName = "12x70 7mm Buckshot";
		descriptionShort = "12x70 7mm Buckshot shell for 12ga shotguns.";
	};
	class Ammo_12gaSlug: Ammunition_Base
	{
		displayName = "12x70 Led slug";
		descriptionShort = "12x70 caliber slug shell for 12ga shotguns.";
	};
	class NULLED_Ammo_NeftRound: Ammo_762x39
	{
		scope = 2;
		displayName = "NeftRound";
		descriptionShort = "";
		model = "Ammunition\NeftRound.p3d";
		iconCartridge = 2;
		weight = 8;
		count = 50;
		ammo = "NULLED_Bullet_NeftRound";
		muzzleFlashParticle = "weapon_shot_izh18_01";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\ammunition\data\762x39.rvmat"}},{0.7,{"DZ\weapons\ammunition\data\762x39.rvmat"}},{0.5,{"DZ\weapons\ammunition\data\762x39_damage.rvmat"}},{0.3,{"DZ\weapons\ammunition\data\762x39_damage.rvmat"}},{0.0,{"DZ\weapons\ammunition\data\762x39_destruct.rvmat"}}};
				};
			};
		};
	};
	class NULLED_Ammo_127x55_SC_130VPS: Ammo_762x39
	{
		scope = 2;
		displayName = "12.7x55 mm SC-130VPS";
		descriptionShort = "Supersonic 12.7x55 mm SC-130VPS - cartridge with armor piercing bullet. Chambered For VSSK";
		model = "Ammunition\127x55.p3d";
		iconCartridge = 2;
		weight = 8;
		count = 20;
		ammo = "NULLED_Bullet_127x55_SC_130VPS";
		muzzleFlashParticle = "weapon_shot_izh18_01";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\ammunition\data\762x39.rvmat"}},{0.7,{"DZ\weapons\ammunition\data\762x39.rvmat"}},{0.5,{"DZ\weapons\ammunition\data\762x39_damage.rvmat"}},{0.3,{"DZ\weapons\ammunition\data\762x39_damage.rvmat"}},{0.0,{"DZ\weapons\ammunition\data\762x39_destruct.rvmat"}}};
				};
			};
		};
	};
	class NULLED_Ammo_23x75_Shrap10: Ammo_762x39
	{
		scope = 2;
		displayName = "23x75mm Shrapnel 10";
		descriptionShort = "23x75mm Buckshot shell designed to be effective on 10 meters or less.";
		model = "Ammunition\data\23x75\23x75_Ammo.p3d";
		iconCartridge = 2;
		weight = 8;
		count = 10;
		ammo = "NULLED_Bullet_23x75_Shrap10";
		muzzleFlashParticle = "weapon_shot_izh18_01";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\ammunition\data\762x39.rvmat"}},{0.7,{"DZ\weapons\ammunition\data\762x39.rvmat"}},{0.5,{"DZ\weapons\ammunition\data\762x39_damage.rvmat"}},{0.3,{"DZ\weapons\ammunition\data\762x39_damage.rvmat"}},{0.0,{"DZ\weapons\ammunition\data\762x39_destruct.rvmat"}}};
				};
			};
		};
	};
	class NULLED_Ammo_303British: Ammo_762x39
	{
		scope = 2;
		displayName = "303British";
		descriptionShort = "";
		model = "Ammunition\303British.p3d";
		iconCartridge = 2;
		weight = 8;
		count = 20;
		ammo = "NULLED_Bullet_303British";
		muzzleFlashParticle = "weapon_shot_izh18_01";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\ammunition\data\762x39.rvmat"}},{0.7,{"DZ\weapons\ammunition\data\762x39.rvmat"}},{0.5,{"DZ\weapons\ammunition\data\762x39_damage.rvmat"}},{0.3,{"DZ\weapons\ammunition\data\762x39_damage.rvmat"}},{0.0,{"DZ\weapons\ammunition\data\762x39_destruct.rvmat"}}};
				};
			};
		};
	};
	class NULLED_Ammo_APS: Ammo_762x39
	{
		scope = 2;
		displayName = "5.66×120mm APS Rounds";
		descriptionShort = "5.66×120mm steel darts";
		model = "Ammunition\APS_loose.p3d";
		iconCartridge = 2;
		weight = 8;
		count = 20;
		ammo = "NULLED_Bullet_APS";
		muzzleFlashParticle = "weapon_shot_izh18_01";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\ammunition\data\762x39.rvmat"}},{0.7,{"DZ\weapons\ammunition\data\762x39.rvmat"}},{0.5,{"DZ\weapons\ammunition\data\762x39_damage.rvmat"}},{0.3,{"DZ\weapons\ammunition\data\762x39_damage.rvmat"}},{0.0,{"DZ\weapons\ammunition\data\762x39_destruct.rvmat"}}};
				};
			};
		};
	};
	class NULLED_Ammo_792x57: Ammo_762x39
	{
		scope = 2;
		displayName = "7.92x57mm Mauser";
		descriptionShort = "The 7.92x57mm Mauser is a rimless bottlenecked rifle cartridge. The 7.92×57mm Mauser cartridge was adopted by the German Empire in 1903–1905, and was the German service cartridge in both World Wars. In its day, the 7.92x57mm Mauser cartridge was one of the world's most popular military cartridges.";
		model = "Ammunition\792x57.p3d";
		iconCartridge = 2;
		weight = 8;
		count = 20;
		ammo = "NULLED_Bullet_792x57";
		muzzleFlashParticle = "weapon_shot_izh18_01";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\ammunition\data\762x39.rvmat"}},{0.7,{"DZ\weapons\ammunition\data\762x39.rvmat"}},{0.5,{"DZ\weapons\ammunition\data\762x39_damage.rvmat"}},{0.3,{"DZ\weapons\ammunition\data\762x39_damage.rvmat"}},{0.0,{"DZ\weapons\ammunition\data\762x39_destruct.rvmat"}}};
				};
			};
		};
	};
	class NULLED_Ammo_127x55_PS12B: Ammo_762x39
	{
		scope = 2;
		displayName = "12.7x55 mm PS12B";
		descriptionShort = "Subsonic 12.7x55 mm PS12B - cartridge with armor piercing bullet.";
		model = "Ammunition\127x55.p3d";
		iconCartridge = 2;
		weight = 8;
		count = 20;
		ammo = "NULLED_Bullet_127x55_PS12B";
		muzzleFlashParticle = "weapon_shot_izh18_01";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\ammunition\data\762x39.rvmat"}},{0.7,{"DZ\weapons\ammunition\data\762x39.rvmat"}},{0.5,{"DZ\weapons\ammunition\data\762x39_damage.rvmat"}},{0.3,{"DZ\weapons\ammunition\data\762x39_damage.rvmat"}},{0.0,{"DZ\weapons\ammunition\data\762x39_destruct.rvmat"}}};
				};
			};
		};
	};
	class NULLED_Ammo_127x55_PS12A: Ammo_762x39
	{
		scope = 2;
		displayName = "12.7x55 mm PS12A";
		descriptionShort = "Subsonic 12.7x55 mm PS12A - cartridge with aluminum core lightweight bullet.";
		model = "Ammunition\127x55.p3d";
		iconCartridge = 2;
		weight = 8;
		count = 20;
		ammo = "NULLED_Bullet_127x55_PS12A";
		muzzleFlashParticle = "weapon_shot_izh18_01";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\ammunition\data\762x39.rvmat"}},{0.7,{"DZ\weapons\ammunition\data\762x39.rvmat"}},{0.5,{"DZ\weapons\ammunition\data\762x39_damage.rvmat"}},{0.3,{"DZ\weapons\ammunition\data\762x39_damage.rvmat"}},{0.0,{"DZ\weapons\ammunition\data\762x39_destruct.rvmat"}}};
				};
			};
		};
	};
	class NULLED_Ammo_408: Ammo_762x39
	{
		scope = 2;
		displayName = ".408";
		descriptionShort = ".408 - cartridge with a heavy subsonic bullet.";
		model = "Ammunition\408.p3d";
		iconCartridge = 2;
		weight = 8;
		count = 10;
		itemSize[] = {1,2};
		ammo = "NULLED_Bullet_408";
		muzzleFlashParticle = "weapon_shot_izh18_01";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\ammunition\data\762x39.rvmat"}},{0.7,{"DZ\weapons\ammunition\data\762x39.rvmat"}},{0.5,{"DZ\weapons\ammunition\data\762x39_damage.rvmat"}},{0.3,{"DZ\weapons\ammunition\data\762x39_damage.rvmat"}},{0.0,{"DZ\weapons\ammunition\data\762x39_destruct.rvmat"}}};
				};
			};
		};
	};
	class NULLED_Ammo_57x28_SS195LF: Ammunition_Base
	{
		scope = 2;
		displayName = "SS195LF";
		descriptionShort = "FNH SS195LF Ammunition is a lead free alternative for the 5.7x28mm round.  The jacketed hollow point bullet features an aluminum core and a copper jacket for excellent weight retention while still RAanding on small game.  The round may be identified by the silver, lead free primer.  Ballistics are similar to the SS190 round.";
		model = "Ammunition\57x28_ss192.p3d";
		iconCartridge = 3;
		weight = 9;
		count = 20;
		ammo = "NULLED_Bullet_57x28_SS195LF";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\data\mosinclip.rvmat"}},{0.7,{"DZ\weapons\attachments\data\mosinclip.rvmat"}},{0.5,{"DZ\weapons\attachments\data\mosinclip_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\mosinclip_damage.rvmat"}},{0.0,{"DZ\weapons\attachments\data\mosinclip_destruct.rvmat"}}};
				};
			};
		};
	};
	class NULLED_Ammo_57x28_ss192: Ammunition_Base
	{
		scope = 2;
		displayName = "57x28_ss192";
		descriptionShort = "In 2004, the SS192 hollow-point cartridge was introduced to civilian shooters along with the new IOM variant of the Five-seven pistol. The 28 grain hollow-point SS192 is designed to tumble after a few inches of penetration and not RAand like a typical hollow-point bullet. It has a copper-jacketed bullet with an aluminum rather than a steel core. It was classified by the ATF as not armor piercing. It can and does penetrate Level IIA Kevlar soft body armor, but does not penetrate a Level IIIA";
		model = "Ammunition\57x28_ss192.p3d";
		iconCartridge = 3;
		weight = 9;
		count = 20;
		ammo = "NULLED_Bullet_57x28_ss192";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\data\mosinclip.rvmat"}},{0.7,{"DZ\weapons\attachments\data\mosinclip.rvmat"}},{0.5,{"DZ\weapons\attachments\data\mosinclip_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\mosinclip_damage.rvmat"}},{0.0,{"DZ\weapons\attachments\data\mosinclip_destruct.rvmat"}}};
				};
			};
		};
	};
	class NULLED_Ammo_57x28_ss190: Ammunition_Base
	{
		scope = 2;
		displayName = "5.7x28 ss190";
		descriptionShort = "The duty round incorporates a limited-risk aluminum-core projectile.";
		model = "Ammunition\57x28_ss190.p3d";
		iconCartridge = 3;
		weight = 9;
		count = 20;
		ammo = "NULLED_Bullet_57x28_ss190";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\data\mosinclip.rvmat"}},{0.7,{"DZ\weapons\attachments\data\mosinclip.rvmat"}},{0.5,{"DZ\weapons\attachments\data\mosinclip_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\mosinclip_damage.rvmat"}},{0.0,{"DZ\weapons\attachments\data\mosinclip_destruct.rvmat"}}};
				};
			};
		};
	};
	class Ammo_50ActionExpress: Ammunition_Base
	{
		scope = 2;
		displayName = "50ActionExpress";
		descriptionShort = "50ActionExpress";
		model = "Ammunition\57x28_ss190.p3d";
		iconCartridge = 3;
		weight = 9;
		count = 20;
		ammo = "Bullet_50ActionExpress";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\data\mosinclip.rvmat"}},{0.7,{"DZ\weapons\attachments\data\mosinclip.rvmat"}},{0.5,{"DZ\weapons\attachments\data\mosinclip_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\mosinclip_damage.rvmat"}},{0.0,{"DZ\weapons\attachments\data\mosinclip_destruct.rvmat"}}};
				};
			};
		};
	};
	class NULLED_Ammo_338lm: Ammunition_Base
	{
		scope = 2;
		displayName = ".338 Lapua Magnum TAC-X";
		descriptionShort = ".338 Lapua Magnum TAC-X- civilian round with a expanding bullet.";
		model = "Ammunition\data\338LM\338lm_TAC_X.p3d";
		iconCartridge = 3;
		weight = 20;
		count = 10;
		itemSize[] = {1,2};
		ammo = "NULLED_Bullet_338lm";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\data\mosinclip.rvmat"}},{0.7,{"DZ\weapons\attachments\data\mosinclip.rvmat"}},{0.5,{"DZ\weapons\attachments\data\mosinclip_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\mosinclip_damage.rvmat"}},{0.0,{"DZ\weapons\attachments\data\mosinclip_destruct.rvmat"}}};
				};
			};
		};
	};
	class NULLED_Ammo_338lm_AP: Ammunition_Base
	{
		scope = 2;
		displayName = ".338 Lapua Magnum AP";
		descriptionShort = ".338 Lapua Magnum AP round with 239 Grain armor-piercing bullet.";
		model = "Ammunition\data\338LM\338lm_AP.p3d";
		iconCartridge = 3;
		weight = 20;
		count = 10;
		itemSize[] = {1,2};
		ammo = "NULLED_Bullet_338_AP";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\data\mosinclip.rvmat"}},{0.7,{"DZ\weapons\attachments\data\mosinclip.rvmat"}},{0.5,{"DZ\weapons\attachments\data\mosinclip_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\mosinclip_damage.rvmat"}},{0.0,{"DZ\weapons\attachments\data\mosinclip_destruct.rvmat"}}};
				};
			};
		};
	};
	class NULLED_Ammo_127x99: Ammo_762x54
	{
		scope = 2;
		displayName = "12.7x99 mm C162 BALL";
		descriptionShort = "The 12.7 mm x 99 mm (.50 cal) C162 ball cartridge is designed for use in M2HB or M2QCB machine guns. The C162 bullet consists of a soft steel core inserted inside a gilding metal jacket. The C162 bullet contains no heavy metals. The cartridge uses: ball powder, a brass cartridge case and a boxer primer. It meets all of the performance requirements of the NATO STANAG for 12.7 mm ammunition. A lead free primer is under development for this caliber.";
		model = "Ammunition\12x99_loose";
		iconCartridge = 3;
		weight = 9;
		count = 10;
		itemSize[] = {1,2};
		ammo = "NULLED_Bullet_127x99";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\data\mosinclip.rvmat"}},{0.7,{"DZ\weapons\attachments\data\mosinclip.rvmat"}},{0.5,{"DZ\weapons\attachments\data\mosinclip_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\mosinclip_damage.rvmat"}},{0.0,{"DZ\weapons\attachments\data\mosinclip_destruct.rvmat"}}};
				};
			};
		};
	};
	class NULLED_Ammo_M995: Ammo_556x45
	{
		scope = 2;
		displayName = "5.56x45 mm M995";
		descriptionShort = "Armour-piercing M995 cartridge.";
		ammo = "NULLED_Bullet_M995";
		iconCartridge = 3;
		weight = 9;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Ammunition\data\M995\data\M995_loose_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\data\mosinclip.rvmat"}},{0.7,{"DZ\weapons\attachments\data\mosinclip.rvmat"}},{0.5,{"DZ\weapons\attachments\data\mosinclip_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\mosinclip_damage.rvmat"}},{0.0,{"DZ\weapons\attachments\data\mosinclip_destruct.rvmat"}}};
				};
			};
		};
	};
	class NULLED_Ammo_Blackout: Ammo_556x45
	{
		scope = 2;
		displayName = ".300 BPZ AAC Blackout";
		descriptionShort = "The .300 AAC Blackout cartridges were developed by Advanced Armament Corporation (AAC) for use in the M4 carbine to achieve ballistics similar to the 7.62x39mm supersonic cartridge, and to offer a subsonic yet powerful cartridge for the AR15 platform as an alternative to the MP5SD 9mm, all while utilizing a standard (STANAG) magazine. This affordable FMJ cartridge is produced on Barnaul Ammo Plant.";
		ammo = "NULLED_Bullet_Blackout";
		model = "Ammunition\300blkout.p3d";
		iconCartridge = 3;
		weight = 9;
		count = 20;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\data\mosinclip.rvmat"}},{0.7,{"DZ\weapons\attachments\data\mosinclip.rvmat"}},{0.5,{"DZ\weapons\attachments\data\mosinclip_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\mosinclip_damage.rvmat"}},{0.0,{"DZ\weapons\attachments\data\mosinclip_destruct.rvmat"}}};
				};
			};
		};
	};
	class DefaultMagazine;
	class Magazine_Base;
	class Mag_STANAG_30Rnd: Magazine_Base
	{
		ammo = "Bullet_556x45";
		ammoItems[] = {"Ammo_556x45","Ammo_556x45Tracer","NULLED_Ammo_M995"};
	};
	class Mag_STANAG_Blackout_30Rnd: Mag_STANAG_30Rnd
	{
		displayName = "Colt AR-15 .300 Blackout STANAG 30-round magazine";
		descriptionShort = "30-round metal Colt AR-15 magazine designed in compliance with STANAG 4179 standard for .300 Blackout ammo. The STANAG 4179 standard was approved by NATO members in 1980 for the purposes of unification of allied personnel ammo and magazines.";
		ammo = "NULLED_Bullet_Blackout";
		ammoItems[] = {"NULLED_Ammo_Blackout"};
	};
	class Mag_STANAGCoupled_30Rnd: Magazine_Base
	{
		ammo = "Bullet_556x45";
		ammoItems[] = {"Ammo_556x45","Ammo_556x45Tracer","NULLED_Ammo_M995"};
	};
	class Mag_STANAGCoupled_Blackout_30Rnd: Mag_STANAGCoupled_30Rnd
	{
		displayName = "Colt AR-15 .300 Blackout STANAG 60-round s";
		descriptionShort = "Coupled 60-round metal Colt AR-15 magazine designed in compliance with STANAG 4179 standard for .300 Blackout ammo. The STANAG 4179 standard was approved by NATO members in 1980 for the purposes of unification of allied personnel ammo and magazines.";
		ammo = "NULLED_Bullet_Blackout";
		ammoItems[] = {"NULLED_Ammo_Blackout"};
	};
	class Mag_CMAG_10Rnd: Magazine_Base
	{
		ammo = "Bullet_556x45";
		ammoItems[] = {"Ammo_556x45","Ammo_556x45Tracer","NULLED_Ammo_M995"};
	};
	class Mag_CMAG_Blackout_10Rnd: Mag_CMAG_10Rnd
	{
		displayName = "PMAG GEN M3 10 .300 Blackout STANAG magazine";
		descriptionShort = "10-round polymer Magpul PMAG GEN M3 10 magazine for .300 Blackout ammo.";
		ammo = "NULLED_Bullet_Blackout";
		ammoItems[] = {"NULLED_Ammo_Blackout"};
	};
	class Mag_CMAG_20Rnd: Magazine_Base
	{
		ammo = "Bullet_556x45";
		ammoItems[] = {"Ammo_556x45","Ammo_556x45Tracer","NULLED_Ammo_M995"};
	};
	class Mag_CMAG_Blackout_20Rnd: Mag_CMAG_20Rnd
	{
		displayName = "PMAG GEN M3 20 .300 Blackout STANAG magazine";
		descriptionShort = "20-round polymer Magpul PMAG GEN M3 20 magazine for .300 Blackout ammo.";
		ammo = "NULLED_Bullet_Blackout";
		ammoItems[] = {"NULLED_Ammo_Blackout"};
	};
	class Mag_CMAG_30Rnd: Magazine_Base
	{
		ammo = "Bullet_556x45";
		ammoItems[] = {"Ammo_556x45","Ammo_556x45Tracer","NULLED_Ammo_M995"};
	};
	class Mag_CMAG_Blackout_30Rnd: Mag_CMAG_30Rnd
	{
		displayName = "PMAG GEN M3 30 .300 Blackout STANAG magazine";
		descriptionShort = "30-round polymer Magpul PMAG GEN M3 30 magazine for .300 Blackout ammo.";
		ammo = "NULLED_Bullet_Blackout";
		ammoItems[] = {"NULLED_Ammo_Blackout"};
	};
	class Mag_CMAG_40Rnd: Magazine_Base
	{
		ammo = "Bullet_556x45";
		ammoItems[] = {"Ammo_556x45","Ammo_556x45Tracer","NULLED_Ammo_M995"};
	};
	class Mag_CMAG_Blackout_40Rnd: Mag_CMAG_40Rnd
	{
		displayName = "PMAG GEN M3 40 .300 Blackout STANAG magazine";
		descriptionShort = "40-round polymer Magpul PMAG GEN M3 40 magazine for .300 Blackout ammo.";
		ammo = "NULLED_Bullet_Blackout";
		ammoItems[] = {"NULLED_Ammo_Blackout"};
	};
	class Mag_CMAG_10Rnd_Green: Mag_CMAG_10Rnd
	{
		ammo = "Bullet_556x45";
		ammoItems[] = {"Ammo_556x45","Ammo_556x45Tracer","NULLED_Ammo_M995"};
	};
	class Mag_CMAG_Blackout_10Rnd_Green: Mag_CMAG_10Rnd_Green
	{
		displayName = "PMAG GEN M3 10 .300 Blackout STANAG magazine";
		descriptionShort = "Green 10-round polymer Magpul PMAG GEN M3 10 magazine for .300 Blackout ammo.";
		ammo = "NULLED_Bullet_Blackout";
		ammoItems[] = {"NULLED_Ammo_Blackout"};
	};
	class Mag_CMAG_20Rnd_Green: Mag_CMAG_20Rnd
	{
		ammo = "Bullet_556x45";
		ammoItems[] = {"Ammo_556x45","Ammo_556x45Tracer","NULLED_Ammo_M995"};
	};
	class Mag_CMAG_Blackout_20Rnd_Green: Mag_CMAG_20Rnd_Green
	{
		displayName = "PMAG GEN M3 20 .300 Blackout STANAG magazine";
		descriptionShort = "Green 20-round polymer Magpul PMAG GEN M3 20 magazine for .300 Blackout ammo.";
		ammo = "NULLED_Bullet_Blackout";
		ammoItems[] = {"NULLED_Ammo_Blackout"};
	};
	class Mag_CMAG_30Rnd_Green: Mag_CMAG_30Rnd
	{
		ammo = "Bullet_556x45";
		ammoItems[] = {"Ammo_556x45","Ammo_556x45Tracer","NULLED_Ammo_M995"};
	};
	class Mag_CMAG_Blackout_30Rnd_Green: Mag_CMAG_30Rnd_Green
	{
		displayName = "PMAG GEN M3 10 .300 Blackout STANAG magazine";
		descriptionShort = "Green 30-round polymer Magpul PMAG GEN M3 30 magazine for .300 Blackout ammo.";
		ammo = "NULLED_Bullet_Blackout";
		ammoItems[] = {"NULLED_Ammo_Blackout"};
	};
	class Mag_CMAG_40Rnd_Green: Mag_CMAG_40Rnd
	{
		ammo = "Bullet_556x45";
		ammoItems[] = {"Ammo_556x45","Ammo_556x45Tracer","NULLED_Ammo_M995"};
	};
	class Mag_CMAG_Blackout_40Rnd_Green: Mag_CMAG_40Rnd_Green
	{
		displayName = "PMAG GEN M3 40 .300 Blackout STANAG magazine";
		descriptionShort = "Green 40-round polymer Magpul PMAG GEN M3 40 magazine for .300 Blackout ammo.";
		ammo = "NULLED_Bullet_Blackout";
		ammoItems[] = {"NULLED_Ammo_Blackout"};
	};
	class Mag_CMAG_10Rnd_Black: Mag_CMAG_10Rnd
	{
		ammo = "Bullet_556x45";
		ammoItems[] = {"Ammo_556x45","Ammo_556x45Tracer","NULLED_Ammo_M995"};
	};
	class Mag_CMAG_Blackout_10Rnd_Black: Mag_CMAG_10Rnd_Black
	{
		displayName = "PMAG GEN M3 10 .300 Blackout STANAG magazine";
		descriptionShort = "Black 10-round polymer Magpul PMAG GEN M3 10 magazine for .300 Blackout ammo.";
		ammo = "NULLED_Bullet_Blackout";
		ammoItems[] = {"NULLED_Ammo_Blackout"};
	};
	class Mag_CMAG_20Rnd_Black: Mag_CMAG_20Rnd
	{
		ammo = "Bullet_556x45";
		ammoItems[] = {"Ammo_556x45","Ammo_556x45Tracer","NULLED_Ammo_M995"};
	};
	class Mag_CMAG_Blackout_20Rnd_Black: Mag_CMAG_20Rnd_Black
	{
		displayName = "PMAG GEN M3 20 .300 Blackout STANAG magazine";
		descriptionShort = "Black 20-round polymer Magpul PMAG GEN M3 20 magazine for .300 Blackout ammo.";
		ammo = "NULLED_Bullet_Blackout";
		ammoItems[] = {"NULLED_Ammo_Blackout"};
	};
	class Mag_CMAG_30Rnd_Black: Mag_CMAG_30Rnd
	{
		ammo = "Bullet_556x45";
		ammoItems[] = {"Ammo_556x45","Ammo_556x45Tracer","NULLED_Ammo_M995"};
	};
	class Mag_CMAG_Blackout_30Rnd_Black: Mag_CMAG_30Rnd_Black
	{
		displayName = "PMAG GEN M3 30 .300 Blackout STANAG magazine";
		descriptionShort = "Black 30-round polymer Magpul PMAG GEN M3 30 magazine for .300 Blackout ammo.";
		ammo = "NULLED_Bullet_Blackout";
		ammoItems[] = {"NULLED_Ammo_Blackout"};
	};
	class Mag_CMAG_40Rnd_Black: Mag_CMAG_40Rnd
	{
		ammo = "Bullet_556x45";
		ammoItems[] = {"Ammo_556x45","Ammo_556x45Tracer","NULLED_Ammo_M995"};
	};
	class Mag_CMAG_Blackout_40Rnd_Black: Mag_CMAG_40Rnd_Black
	{
		displayName = "PMAG GEN M3 40 .300 Blackout STANAG magazine";
		descriptionShort = "Black 40-round polymer Magpul PMAG GEN M3 40 magazine for .300 Blackout ammo.";
		model = "Attachments\magazine\Mag_PMAG_20Rnd.p3d";
		ammo = "NULLED_Bullet_Blackout";
		ammoItems[] = {"NULLED_Ammo_Blackout"};
	};
	class Mag_HoneyBadger_PMAG_20Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "Lancer l5awm .300 Blackout 20-Round";
		descriptionShort = "The L5AWM is the only HYBRID AR magazine available today, featuring the best characteristics of Polymer and Steel magazine designs. The L5AWM fills the gap between the current metal and polymer magazine designs combing the best features from both designs into a unique hybrid magazine. L5AWM has the reliability of a steel magazine, the durability of a polymer magazine and the weight of an aluminum magazine.";
		model = "Attachments\magazine\Mag_PMAG_20Rnd.p3d";
		count = 20;
		ammo = "NULLED_Bullet_Blackout";
		ammoItems[] = {"NULLED_Ammo_Blackout"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.6,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.5,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.0,{"DZ\weapons\attachments\magazine\data\fal_mag_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_VR80_10Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "VR80 10Rnd Magazine";
		descriptionShort = "";
		model = "Attachments\magazine\Mag_VR80_10Rnd.p3d";
		itemSize[] = {1,3};
		count = 10;
		ammo = "Bullet_12GaugePellets";
		ammoItems[] = {"Ammo_12gaPellets","Ammo_12gaSlug","Ammo_12gaRubberSlug","Ammo_12gaBeanbag"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.6,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.5,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.0,{"DZ\weapons\attachments\magazine\data\fal_mag_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_APS_26Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "APS 26Rnd Magazine";
		descriptionShort = "APS 10Rnd Magazine";
		model = "Attachments\magazine\APS_10Rnd.p3d";
		itemSize[] = {2,2};
		count = 26;
		ammo = "NULLED_Bullet_APS";
		ammoItems[] = {"NULLED_Ammo_APS"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.6,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.5,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.0,{"DZ\weapons\attachments\magazine\data\fal_mag_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_VSSK_5Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "VSSK 5Rnd Magazine";
		descriptionShort = "";
		model = "Attachments\magazine\VSSK_Magazine.p3d";
		itemSize[] = {1,3};
		count = 5;
		ammo = "NULLED_Bullet_127x55_PS12A";
		ammoItems[] = {"NULLED_Ammo_127x55_PS12A","NULLED_Ammo_127x55_PS12B"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.6,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.5,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.0,{"DZ\weapons\attachments\magazine\data\fal_mag_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_VR80_5Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "VR80 5Rnd Magazine";
		descriptionShort = "";
		model = "Attachments\magazine\Mag_VR80_5Rnd.p3d";
		itemSize[] = {1,2};
		count = 5;
		ammo = "Bullet_12GaugePellets";
		ammoItems[] = {"Ammo_12gaPellets","Ammo_12gaSlug","Ammo_12gaRubberSlug","Ammo_12gaBeanbag"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.6,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.5,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.0,{"DZ\weapons\attachments\magazine\data\fal_mag_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_Fiveseven_30Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "FN Five-Seven 30-Round Polymer Magazine";
		descriptionShort = "An extended 30 round magazine for the Five-Seven pistol in 5.7x28mm";
		model = "Attachments\magazine\Fiveseven_30Rnd.p3d";
		itemSize[] = {1,2};
		count = 30;
		ammo = "Bullet_57x28";
		ammoItems[] = {"St_Ammo_57x28"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.6,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.5,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.0,{"DZ\weapons\attachments\magazine\data\fal_mag_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_Fiveseven_20Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "FN Five-Seven 20-Round Polymer Magazine";
		descriptionShort = "A 20 round magazine for the Five-Seven pistol in 5.7x28mm";
		model = "Attachments\magazine\Fiveseven_20Rnd.p3d";
		itemSize[] = {1,2};
		count = 20;
		ammo = "Bullet_57x28";
		ammoItems[] = {"St_Ammo_57x28"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.6,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.5,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.0,{"DZ\weapons\attachments\magazine\data\fal_mag_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_M9A1_15Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "Beretta 15 Round Magazine";
		descriptionShort = "The Beretta Magazine is a standard factory replacement magazine. This magazine is for 9mm Luger and holds 15 rounds. It is made of steel.";
		model = "Attachments\magazine\M9A1_mag.p3d";
		itemSize[] = {1,2};
		count = 15;
		ammo = "Bullet_9x19";
		ammoItems[] = {"Ammo_9x19"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.6,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.5,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.0,{"DZ\weapons\attachments\magazine\data\fal_mag_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_DesertEagle_7Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "ProMag Desert Eagle Magazine .50 AE";
		descriptionShort = "";
		model = "";
		itemSize[] = {1,2};
		count = 7;
		ammo = "Bullet_50ActionExpress";
		ammoItems[] = {"Ammo_50ActionExpress"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.6,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.5,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.0,{"DZ\weapons\attachments\magazine\data\fal_mag_destruct.rvmat"}}};
				};
			};
		};
	};
	class Drum_MG42_50Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "MG42 50rnd Drum";
		descriptionShort = "MG42 Drum Drum Chambered In 7.92x57";
		model = "Attachments\magazine\Drum_MG42_50Rnd.p3d";
		itemSize[] = {3,3};
		count = 50;
		ammo = "NULLED_Bullet_792x57";
		ammoItems[] = {"NULLED_Ammo_792x57"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.6,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.5,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.0,{"DZ\weapons\attachments\magazine\data\fal_mag_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_M82A1_10Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "M82A1 10RND Magazine";
		descriptionShort = "Barrett Factory Original Magazine, 50BMG, 10Rd";
		model = "Attachments\magazine\M82a1_mag.p3d";
		itemSize[] = {3,3};
		count = 10;
		ammo = "NULLED_Bullet_127x99";
		ammoItems[] = {"NULLED_Ammo_127x99","NULLED_Ammo_127x99Tracer"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.6,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.5,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.0,{"DZ\weapons\attachments\magazine\data\fal_mag_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_R700_8Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "R700 8RND Magazine";
		descriptionShort = "8-round R700 sniper rifle magazine, for .338 cartridges.";
		model = "Attachments\magazine\r700\Mag_R700_8Rnd.p3d";
		itemSize[] = {1,2};
		count = 8;
		ammo = "NULLED_Bullet_338lm";
		ammoItems[] = {"NULLED_Ammo_338lm","NULLED_Ammo_338lm_AP"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.6,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.5,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.0,{"DZ\weapons\attachments\magazine\data\fal_mag_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_R700_5Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "R700 5RND Magazine";
		descriptionShort = "5-round R700 sniper rifle magazine, for .338 cartridges.";
		model = "Attachments\magazine\r700\Mag_R700_5Rnd.p3d";
		itemSize[] = {1,2};
		count = 5;
		ammo = "NULLED_Bullet_338lm";
		ammoItems[] = {"NULLED_Ammo_338lm","NULLED_Ammo_338lm_AP"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.6,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.5,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.0,{"DZ\weapons\attachments\magazine\data\fal_mag_destruct.rvmat"}}};
				};
			};
		};
	};
	class NULLED_Mag_SRS_7Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "SRS-A2 7RND Magazine";
		descriptionShort = "7-round SRS-A2 sniper rifle magazine, for .338 cartridges.";
		model = "Attachments\magazine\DT_SRS_A2\DT_SRS_A2_7Rnd.p3d";
		itemSize[] = {1,2};
		count = 7;
		ammo = "NULLED_Bullet_338lm";
		ammoItems[] = {"NULLED_Ammo_338lm","NULLED_Ammo_338lm_AP"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.6,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.5,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.0,{"DZ\weapons\attachments\magazine\data\fal_mag_destruct.rvmat"}}};
				};
			};
		};
	};
	class NULLED_Mag_SRS_5Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "SRS-A2 5RND Magazine";
		descriptionShort = "5-round SRS-A2 sniper rifle magazine, for .338 cartridges.";
		model = "Attachments\magazine\DT_SRS_A2\DT_SRS_A2_5Rnd.p3d";
		itemSize[] = {1,2};
		count = 5;
		ammo = "NULLED_Bullet_338lm";
		ammoItems[] = {"NULLED_Ammo_338lm","NULLED_Ammo_338lm_AP"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.6,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.5,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.0,{"DZ\weapons\attachments\magazine\data\fal_mag_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_M14_20Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "M1A/M14 20 round 7.62x51 magazine";
		descriptionShort = "20 rnd, double stack 7.62x51 NATO magazine for M1A produced by Springfield Armory.";
		model = "Attachments\magazine\Mag_M14_20Rnd.p3d";
		itemSize[] = {1,3};
		count = 20;
		ammo = "Bullet_308Win";
		ammoItems[] = {"Ammo_308Win","Ammo_308WinTracer"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.6,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.5,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.0,{"DZ\weapons\attachments\magazine\data\fal_mag_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_Scar_H_20Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "Mag_Scar_H_20Rnd";
		descriptionShort = "20Rnd Steel Magazine for Scar-H can be loaded with 308Win";
		model = "Attachments\magazine\Mag_Scar_H_20Rnd.p3d";
		itemSize[] = {1,3};
		count = 20;
		ammo = "Bullet_308Win";
		ammoItems[] = {"Ammo_308Win","Ammo_308WinTracer"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.6,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.5,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.0,{"DZ\weapons\attachments\magazine\data\fal_mag_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_M14_10Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "M1A/M14 10 round 7.62x51 magazine";
		descriptionShort = "10 rnd, double stack 7.62x51 NATO magazine for M1A produced by Springfield Armory.";
		model = "Attachments\magazine\Mag_M14_10Rnd.p3d";
		itemSize[] = {1,2};
		count = 10;
		ammo = "Bullet_308Win";
		ammoItems[] = {"Ammo_308Win","Ammo_308WinTracer"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.6,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.5,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.0,{"DZ\weapons\attachments\magazine\data\fal_mag_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_Glock19_15Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "Glock19 15 Round Magazine";
		descriptionShort = "";
		model = "";
		itemSize[] = {1,2};
		count = 15;
		ammo = "Bullet_9x19";
		ammoItems[] = {"Ammo_9x19"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.6,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.5,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.0,{"DZ\weapons\attachments\magazine\data\fal_mag_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_Glock_21Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "Glock19 20 Round Magazine";
		descriptionShort = "The Shield Arms Glock Magazine Extension adds 5 rounds to your Glock 17/19X/34/45 magazine";
		model = "";
		itemSize[] = {1,2};
		count = 20;
		ammo = "Bullet_9x19";
		ammoItems[] = {"Ammo_9x19"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.6,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.5,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.0,{"DZ\weapons\attachments\magazine\data\fal_mag_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_Glock18_50Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "SGMT Drum mag for Glock 9x19, 50 rounds capacity";
		descriptionShort = "High capacity magazine for Glock family of pistols holding up to 50 rounds. Made in Korea, imported by SGM Tactical. Loading more than 50 rounds is not recommended by the manufacturer.";
		model = "Attachments\magazine\Glock\Glock50Rnd\Glock50Rnd.p3d";
		itemSize[] = {1,3};
		count = 50;
		ammo = "Bullet_9x19";
		ammoItems[] = {"Ammo_9x19"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.6,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.5,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.0,{"DZ\weapons\attachments\magazine\data\fal_mag_destruct.rvmat"}}};
				};
			};
		};
	};
	class Drum_cmag_100Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "Beta C-Mag";
		descriptionShort = "The Beta C-Mag is a 100-round capacity drum magazine manufactured by the Beta Company.";
		model = "DZ\weapons\attachments\magazine\magazine_cmag100.p3d";
		itemSize[] = {6,3};
		count = 100;
		ammo = "Bullet_556x45";
		ammoItems[] = {"Ammo_556x45","Ammo_556x45Tracer","NULLED_Ammo_M995"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.6,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.5,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.0,{"DZ\weapons\attachments\magazine\data\fal_mag_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_AK15_30Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "AK15 30Rnd Magazine";
		descriptionShort = "30-round windowed, polymer Izhmash magazine for 7.62x39 ammo, for АK-15 and compatible systems.";
		model = "Attachments\magazine\Mag_AK15_30Rnd.p3d";
		weight = 430;
		itemSize[] = {1,3};
		count = 30;
		ammo = "Bullet_762x39";
		ammoItems[] = {"Ammo_762x39","Ammo_762x39Tracer"};
		tracersEvery = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.6,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.5,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.0,{"DZ\weapons\attachments\magazine\data\fal_mag_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_GM6_Lynx_8Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "GM6 Lynx 8RND Magazine";
		descriptionShort = "50BMG, 8Rd";
		model = "Attachments\magazine\mag_GM6_Lynx_8rnd.p3d";
		itemSize[] = {3,3};
		count = 8;
		ammo = "NULLED_Bullet_127x99";
		ammoItems[] = {"NULLED_Ammo_127x99","NULLED_Ammo_127x99Tracer"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.6,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.5,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.0,{"DZ\weapons\attachments\magazine\data\fal_mag_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_ASH12_10Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "12.7x55 magazine for ASh-12";
		descriptionShort = "10-round magazine for 12.7x55 ASh-12.";
		model = "Attachments\magazine\Mag_Ash_10Rnd.p3d";
		weight = 430;
		itemSize[] = {1,3};
		count = 10;
		ammo = "NULLED_Bullet_127x55_PS12A";
		ammoItems[] = {"NULLED_Ammo_127x55_PS12A","NULLED_Ammo_127x55_PS12B"};
		tracersEvery = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.6,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.5,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.0,{"DZ\weapons\attachments\magazine\data\fal_mag_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_P90_50Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "FN magazine for P90, 50-round capacity";
		descriptionShort = "50-round polymer magazine for 5.7x28 mm P90.";
		model = "Attachments\magazine\Mag_P90.p3d";
		weight = 430;
		itemSize[] = {1,3};
		count = 50;
		ammo = "NULLED_Bullet_57x28_SS195LF";
		ammoItems[] = {"NULLED_Ammo_57x28_ss190","NULLED_Ammo_57x28_ss192","NULLED_Ammo_57x28_SS195LF"};
		tracersEvery = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.6,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.5,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.0,{"DZ\weapons\attachments\magazine\data\fal_mag_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_Vector_30Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "KRISS Vector Gen 2 Glock ACP 30-Round Extended Magazine";
		descriptionShort = "Fully assembled using a standard Glock 21 magazine and Kriss MagEx extension, these 30-round magazines come ready-to-use with compatible firearms including the Kriss Vector, .45 ACP Glock pistols, and other compatible carbines. Featuring the same polymer construction, numbered witness holes and steel reinforcing inserts as factory Glock magazines, these magazines add an extended sleeve that fits 17 additional rounds and sits flush against the magazine well of the Kriss Vector.";
		model = "Attachments\magazine\Mag_Vector_30Rnd.p3d";
		weight = 430;
		itemSize[] = {1,3};
		count = 30;
		ammo = "Bullet_45ACP";
		ammoItems[] = {"Ammo_45ACP"};
		tracersEvery = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.6,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.5,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.0,{"DZ\weapons\attachments\magazine\data\fal_mag_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_Vector_13Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "KRISS Vector Gen 2 Glock ACP 13-Round Magazine";
		descriptionShort = "These standard capacity, full-size factory magazines give you 13 rounds of big bore .45 ACP in a crack-resistant polymer magazine with full length reinforcing steel inserts, steel spring wire internals, and numbered witness holes. Fits Glock 21 and 21 SF pistols.";
		model = "Attachments\magazine\Mag_Vector_15Rnd.p3d";
		weight = 430;
		itemSize[] = {1,3};
		count = 13;
		ammo = "Bullet_45ACP";
		ammoItems[] = {"Ammo_45ACP"};
		tracersEvery = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.6,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.5,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.0,{"DZ\weapons\attachments\magazine\data\fal_mag_destruct.rvmat"}}};
				};
			};
		};
	};
	class mag_sr25_20rnd: Magazine_Base
	{
		scope = 2;
		displayName = "SR25 Magazine";
		descriptionShort = "20 ronud Magazine for the SR25, can be loaded with 7.62×51mm NATO ammo.";
		model = "Attachments\magazine\mag_sr25_20rnd.p3d";
		weight = 120;
		itemSize[] = {1,3};
		count = 20;
		ammo = "Bullet_308Win";
		ammoItems[] = {"Ammo_308Win","Ammo_308WinTracer"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.6,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.5,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.0,{"DZ\weapons\attachments\magazine\data\fal_mag_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_M300_7rnd: Magazine_Base
	{
		scope = 2;
		displayName = "M300 Magazine";
		descriptionShort = "7Rnd Magazine for the M300, can be loaded with .408 CT";
		model = "Attachments\magazine\Mag_M300_7rnd.p3d";
		weight = 500;
		itemSize[] = {2,2};
		count = 7;
		ammo = "NULLED_Bullet_408";
		ammoItems[] = {"NULLED_Ammo_408"};
		tracersEvery = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.6,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.5,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.0,{"DZ\weapons\attachments\magazine\data\fal_mag_destruct.rvmat"}}};
				};
			};
		};
	};
	class NULLED_Mag_M200_7rnd: Magazine_Base
	{
		scope = 2;
		displayName = "M200 Magazine";
		descriptionShort = "7Rnd Magazine for the M200, can be loaded with .408 CT";
		model = "Firearms\M200_Intervention\M200_magazine.p3d";
		weight = 500;
		itemSize[] = {2,2};
		count = 7;
		ammo = "NULLED_Bullet_408";
		ammoItems[] = {"NULLED_Ammo_408"};
		tracersEvery = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.6,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.5,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.0,{"DZ\weapons\attachments\magazine\data\fal_mag_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_R700_762_7Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "Rem700 Magazine";
		descriptionShort = "7Rnd Magazine for the Remington 700, can be loaded with .308Win";
		model = "Attachments\magazine\Mag_R700_762_7Rnd.p3d";
		weight = 500;
		itemSize[] = {2,2};
		count = 7;
		ammo = "Bullet_308Win";
		ammoItems[] = {"Ammo_308Win","Ammo_308WinTracer"};
		tracersEvery = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.6,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.5,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.0,{"DZ\weapons\attachments\magazine\data\fal_mag_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_R700_762_10Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "Rem700 Magazine";
		descriptionShort = "10 round Magazine for the Remington 700, can be loaded with .308Win";
		model = "Attachments\magazine\Mag_R700_762_10Rnd.p3d";
		weight = 500;
		itemSize[] = {1,3};
		count = 10;
		ammo = "Bullet_308Win";
		ammoItems[] = {"Ammo_308Win","Ammo_308WinTracer"};
		tracersEvery = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.6,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.5,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.0,{"DZ\weapons\attachments\magazine\data\fal_mag_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_SV98_10Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "10-round polymer magazine for SV-98";
		descriptionShort = "Standard Izhmash-produced polymer magazine for SV-98 rifle, 7.62x54R ammo.";
		model = "Attachments\magazine\SV98\SV98.p3d";
		weight = 500;
		ammo = "Bullet_762x54";
		ammoItems[] = {"Ammo_762x54","Ammo_762x54Tracer"};
		itemSize[] = {1,2};
		count = 10;
		tracersEvery = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.6,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.5,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.0,{"DZ\weapons\attachments\magazine\data\fal_mag_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_RSASS_20Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "RSASS 20Rnd Mag";
		descriptionShort = "RSASS 20Rnd Mag";
		model = "Firearms\RSASS\RSASSMag.p3d";
		weight = 120;
		itemSize[] = {1,2};
		count = 20;
		ammo = "Bullet_308Win";
		ammoItems[] = {"Ammo_308Win","Ammo_308WinTracer"};
		tracersEvery = 0;
		hiddenSelections[] = {"zybtek","camo"};
		hiddenSelectionsTextures[] = {"Firearms\RSASS\data\Black_co.paa","Firearms\RSASS\data\Black_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.6,{"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}},{0.5,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}},{0.0,{"DZ\weapons\attachments\magazine\data\fal_mag_destruct.rvmat"}}};
				};
			};
		};
	};
	class Mag_Val_20rnd;
	class Mag_SR3M130_30Rnd: Mag_Val_20rnd
	{
		scope = 2;
		displayName = "30-round SR3M.130 9x39 SR3M magazine";
		descriptionShort = "30-round steel TSNIITochMash 6L25 magazine for 9x39 SR3M,VSS and AS VAL ammo.";
		model = "Attachments\magazine\SR3M130\SR3M130.p3d";
		weight = 350;
		itemSize[] = {1,3};
		count = 30;
		ammo = "Bullet_9x39";
		ammoItems[] = {"Ammo_9x39","Ammo_9x39AP"};
		tracersEvery = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"Attachments\magazine\SR3M130\data\vssmag.rvmat"}},{0.7,{"Attachments\magazine\SR3M130\data\vssmag.rvmat"}},{0.5,{"Attachments\magazine\SR3M130\data\vssmag_damage.rvmat"}},{0.3,{"Attachments\magazine\SR3M130\data\vssmag_damage.rvmat"}},{0.0,{"Attachments\magazine\SR3M130\data\vssmag_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class MagRifle_fill_in
				{
					soundSet = "MagRifle_fill_in_SoundSet";
					id = 1;
				};
				class MagRifle_fill_loop
				{
					soundSet = "MagRifle_fill_loop_SoundSet";
					id = 2;
				};
				class MagRifle_fill_out
				{
					soundSet = "MagRifle_fill_out_SoundSet";
					id = 3;
				};
				class MagRifle_empty_in
				{
					soundSet = "MagRifle_empty_in_SoundSet";
					id = 4;
				};
				class MagRifle_empty_loop
				{
					soundSet = "MagRifle_empty_loop_SoundSet";
					id = 5;
				};
				class MagRifle_empty_out
				{
					soundSet = "MagRifle_empty_out_SoundSet";
					id = 6;
				};
				class MagPistol_fill_in
				{
					soundSet = "MagPistol_fill_in_SoundSet";
					id = 7;
				};
				class MagPistol_fill_loop
				{
					soundSet = "MagPistol_fill_loop_SoundSet";
					id = 8;
				};
				class MagPistol_fill_out
				{
					soundSet = "MagPistol_fill_out_SoundSet";
					id = 9;
				};
				class MagPistol_empty_in
				{
					soundSet = "MagPistol_empty_in_SoundSet";
					id = 10;
				};
				class MagPistol_empty_loop
				{
					soundSet = "MagPistol_empty_loop_SoundSet";
					id = 11;
				};
				class MagPistol_empty_out
				{
					soundSet = "MagPistol_empty_out_SoundSet";
					id = 12;
				};
			};
		};
	};
};
class CfgVehicles
{
	class Box_Base;
	class AmmoBox_556x45_20Rnd: Box_Base
	{
		displayName = "Ammo pack of 5.56x45 mm M193 Ball";
		descriptionShort = "A small box containing 20 Rounds of 5.56x45 mm M193.";
	};
	class AmmoBox_556x45Tracer_20Rnd: Box_Base
	{
		displayName = "Ammo pack of 5.56x45 mm M193 Ball Tracer";
		descriptionShort = "A small box containing 20 Rounds of 5.56x45 mm M193 tracer.";
	};
	class All;
	class Strategic;
	class ThingEffect;
	class FxCartridge;
	class FxRound;
	class FxRound_APS_Single: FxRound
	{
		model = "Ammunition\APS_Single.p3d";
	};
	class FxCartridge_APS_Shell: FxCartridge
	{
		model = "Ammunition\APS_Single.p3d";
	};
	class FxCartridge_57x28: FxCartridge
	{
		model = "Ammunition\nabojnice_57x28.p3d";
	};
	class FxCartridge_127x99: FxCartridge
	{
		model = "Ammunition\nabojnice_127x99.p3d";
	};
	class FxCartridge_127x55: FxCartridge
	{
		model = "Ammunition\nabojnice_127x55.p3d";
	};
	class FxCartridge_23x75: FxCartridge
	{
		model = "Ammunition\data\23x75\23x75_single_shell.p3d";
	};
	class FxRound_23x75: FxRound
	{
		model = "Ammunition\data\23x75\23x75_single_shell.p3d";
	};
	class FxCartridge_303British: FxCartridge
	{
		model = "Ammunition\nabojnice_303British.p3d";
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxymag_Vector_13Rnd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "Attachments\magazine\Mag_Vector_30Rnd.p3d";
	};
	class Proxymag_Vector_30Rnd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "Attachments\magazine\Mag_Vector_30Rnd.p3d";
	};
	class Proxymag_Fiveseven_20Rnd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "";
	};
	class ProxyMag_beowulf_10Rnd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "";
	};
	class ProxyMag_R700_8Rnd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "Attachments\magazine\r700\Mag_R700_8Rnd.p3d";
	};
	class ProxyMag_R700_5Rnd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "Attachments\magazine\r700\Mag_R700_5Rnd.p3d";
	};
	class Proxymag_Fiveseven_30Rnd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "";
	};
	class ProxyMag_M9A1_15Rnd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "Attachments\magazine\M9A1_mag.p3d";
	};
	class ProxyDrum_MG42_50Rnd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "Attachments\magazine\Drum_MG42_50Rnd.p3d";
	};
	class ProxyMag_M14_20Rnd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "Attachments\magazine\Mag_M14_20Rnd.p3d";
	};
	class ProxyMag_Scar_H_20Rnd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "Attachments\magazine\Mag_Scar_H_20Rnd.p3d";
	};
	class ProxyMag_M14_10Rnd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "Attachments\magazine\Mag_M14_10Rnd.p3d";
	};
	class Proxymag_GM6_Lynx_8rnd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "Attachments\magazine\mag_GM6_Lynx_8rnd.p3d";
	};
	class ProxyGlock19_15Rnd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "";
	};
	class ProxyMag_Glock_21Rnd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "";
	};
	class ProxyDrum_cmag_100Rnd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "DZ\weapons\attachments\magazine\magazine_cmag100.p3d";
	};
	class ProxyMag_VR80_10Rnd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "Attachments\magazine\Mag_VR80_10Rnd.p3d";
	};
	class ProxyMag_VR80_5Rnd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "Attachments\magazine\Mag_VR80_5Rnd.p3d";
	};
	class ProxyMag_AK15_30Rnd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "Attachments\magazine\Mag_AK15_30Rnd.p3d";
	};
	class ProxyMag_HoneyBadger_PMAG_20Rnd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "Attachments\magazine\Mag_PMAG_20Rnd.p3d";
	};
	class ProxyMag_sr25_20Rnd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "Attachments\magazine\Mag_sr25_20rnd.p3d";
	};
	class ProxyMag_m300_7Rnd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "Attachments\magazine\Mag_m300_7Rnd.p3d";
	};
	class ProxyNULLED_Mag_M200_7rnd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "Firearms\M200_Intervention\M200_magazine.p3d";
	};
	class ProxyMag_R700_762_7Rnd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "Attachments\magazine\Mag_R700_762_7Rnd.p3d";
	};
	class ProxyMag_R700_762_10Rnd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "Attachments\magazine\Mag_R700_762_10Rnd.p3d";
	};
	class ProxySV98: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "Attachments\magazine\SV98\SV98.p3d";
	};
	class ProxyNULLED_Mag_SRS_7Rnd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "Attachments\magazine\DT_SRS_A2\DT_SRS_A2_7Rnd.p3d";
	};
	class ProxyNULLED_Mag_SRS_5Rnd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "Attachments\magazine\DT_SRS_A2\DT_SRS_A2_5Rnd.p3d";
	};
	class ProxyMag_SR3M130_30Rnd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "Attachments\magazine\SR3M130\SR3M130.p3d";
	};
	class ProxyMag_Ash_10Rnd: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "Attachments\magazine\ash_12\Mag_Ash_10Rnd.p3d";
	};
};
