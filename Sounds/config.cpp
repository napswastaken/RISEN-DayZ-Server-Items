////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Mon Aug 14 16:31:44 2023 : 'file' last modified on Mon Aug 14 16:31:44 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class NULLED_Sounds
	{
		units[] = {};
		requiredAddons[] = {"DZ_Data","DZ_Sounds_Effects"};
		weapons[] = {};
	};
};
class CfgSoundShaders
{
	class baseCharacter_SoundShader;
	class Music_Menu_SoundShader
	{
		samples[] = {{"Sounds\Extra\Music\Suppression",1}};
		volume = 0.40794575;
	};
	class ExtinguishByWaterEnd_SoundShader
	{
		volume = 0.3;
	};
	class Grenade_closeExplosion_SoundShader
	{
		samples[] = {{"Sounds\Extra\Grenade\Explosion\grenade_1_close",1},{"Sounds\Extra\Grenade\Explosion\grenade_2_close",1},{"Sounds\Extra\Grenade\Explosion\grenade_3_close",1},{"Sounds\Extra\Grenade\Explosion\grenade_2_close",1},{"Sounds\Extra\Grenade\Explosion\grenade_4_close",1}};
		volume = 1.0;
		range = 50;
		rangeCurve = "CannonCloseShotCurve";
	};
	class Grenade_midExplosion_SoundShader
	{
		samples[] = {{"Sounds\Extra\Grenade\Explosion\grenade_1_distant",1},{"Sounds\Extra\Grenade\Explosion\grenade_2_distant",1},{"Sounds\Extra\Grenade\Explosion\grenade_3_distant",1},{"Sounds\Extra\Grenade\Explosion\grenade_4_distant",1},{"Sounds\Extra\Grenade\Explosion\grenade_5_distant",1},{"Sounds\Extra\Grenade\Explosion\grenade_6_distant",1}};
		volume = 1.0;
		range = 1500;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{1500,0}};
	};
	class Grenade_distExplosion_SoundShader
	{
		samples[] = {{"Sounds\Extra\Grenade\Explosion\grenade_1_far",1},{"Sounds\Extra\Grenade\Explosion\grenade_2_far",1},{"Sounds\Extra\Grenade\Explosion\grenade_3_far",1},{"Sounds\Extra\Grenade\Explosion\grenade_4_far",1}};
		volume = 1.0;
		range = 1500;
		rangeCurve[] = {{0,0},{50,0},{300,1},{2500,1}};
	};
	class powerGeneratorTurnOn_Soundshader
	{
		range = 20;
		volume = 0.3;
	};
	class powerGeneratorTurnOff_Soundshader
	{
		range = 20;
		volume = 0.2;
	};
	class powerGeneratorLoop_Soundshader
	{
		range = 20;
		volume = 0.3;
	};
	class baseSuperSonicCrack_SoundShader
	{
		range = 180;
	};
	class SuperSonicCrack_SoundShader: baseSuperSonicCrack_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\projectiles\sonic_crack\sonicCrack1",1},{"DZ\sounds\weapons\projectiles\sonic_crack\sonicCrack2",1},{"DZ\sounds\weapons\projectiles\sonic_crack\sonicCrack3",1},{"Sounds\Extra\Soniccrack\Soniccrack",1},{"Sounds\Extra\Soniccrack\Soniccrack_1",1}};
		volume = 1.0;
		range = 130;
	};
	class SuperSonicCrack_tailMeadow_SoundShader: baseSuperSonicCrack_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\projectiles\sonic_crack\sonicCrack_tailMeadow01",1},{"DZ\sounds\weapons\projectiles\sonic_crack\sonicCrack_tailMeadow01",1},{"DZ\sounds\weapons\projectiles\sonic_crack\sonicCrack_tailMeadow01",1}};
		volume = "meadow";
		frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
		limitation = 1;
	};
	class SuperSonicCrack_tailForest_SoundShader: baseSuperSonicCrack_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\projectiles\sonic_crack\sonicCrack_tailForest01",1},{"DZ\sounds\weapons\projectiles\sonic_crack\sonicCrack_tailForest01",1},{"DZ\sounds\weapons\projectiles\sonic_crack\sonicCrack_tailForest01",1}};
		volume = "forest";
		frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
		limitation = 1;
	};
	class SuperSonicCrack_tailTrees_SoundShader: baseSuperSonicCrack_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\projectiles\sonic_crack\sonicCrack_tailTrees01",1},{"DZ\sounds\weapons\projectiles\sonic_crack\sonicCrack_tailTrees01",1},{"DZ\sounds\weapons\projectiles\sonic_crack\sonicCrack_tailTrees01",1}};
		volume = "trees";
		frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
		limitation = 1;
	};
	class SuperSonicCrack_tailHouses_SoundShader: baseSuperSonicCrack_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\projectiles\sonic_crack\sonicCrack_tailHouses01",1},{"DZ\sounds\weapons\projectiles\sonic_crack\sonicCrack_tailHouses01",1},{"DZ\sounds\weapons\projectiles\sonic_crack\sonicCrack_tailHouses01",1}};
		volume = "houses max interior";
		frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
		limitation = 1;
	};
	class ZmbM_Skinny_CalmMove_SoundShader
	{
		samples[] = {{"Sounds\Extra\Zombie\idle_0",1},{"Sounds\Extra\Zombie\idle_1",1},{"Sounds\Extra\Zombie\idle_2",1},{"Sounds\Extra\Zombie\idle_3",1},{"Sounds\Extra\Zombie\idle_4",1},{"Sounds\Extra\Zombie\idle_5",1},{"Sounds\Extra\Zombie\idle_6",1},{"Sounds\Extra\Zombie\idle_7",1},{"Sounds\Extra\Zombie\idle_8",1},{"Sounds\Extra\Zombie\idle_9",1},{"Sounds\Extra\Zombie\idle_10",1},{"Sounds\Extra\Zombie\idle_11",1},{"Sounds\Extra\Zombie\idle_12",1},{"Sounds\Extra\Zombie\idle_13",1},{"Sounds\Extra\Zombie\idle_14",1},{"Sounds\Extra\Zombie\idle_15",1},{"Sounds\Extra\Zombie\idle_16",1},{"Sounds\Extra\Zombie\idle_17",1},{"Sounds\Extra\Zombie\idle_18",1},{"Sounds\Extra\Zombie\idle_19",1},{"Sounds\Extra\Zombie\idle_20",1},{"Sounds\Extra\Zombie\idle_21",1},{"Sounds\Extra\Zombie\idle_22",1},{"Sounds\Extra\Zombie\idle_23",1},{"Sounds\Extra\Zombie\idle_24",1},{"Sounds\Extra\Zombie\idle_25",1},{"Sounds\Extra\Zombie\idle_26",1},{"Sounds\Extra\Zombie\idle_27",1},{"Sounds\Extra\Zombie\idle_28",1},{"Sounds\Extra\Zombie\idle_29",1},{"Sounds\Extra\Zombie\idle_30",1},{"Sounds\Extra\Zombie\idle_31",1},{"Sounds\Extra\Zombie\idle_32",1},{"Sounds\Extra\Zombie\idle_33",1},{"Sounds\Extra\Zombie\idle_34",1},{"Sounds\Extra\Zombie\idle_35",1}};
		volume = 0.66;
		range = 60;
	};
	class Landmine_closeExplosion_SoundShader
	{
		samples[] = {{"Sounds\Extra\Landmine\Explosion\explosion_landmine_close",1}};
		volume = 1.0;
		range = 1500;
		rangeCurve[] = {{0,1},{50,0.3},{300,0},{1500,0}};
	};
	class Landmine_midExplosion_SoundShader
	{
		samples[] = {{"Sounds\Extra\Landmine\Explosion\explosion_landmine_distant",1}};
		volume = 0.56234133;
		range = 1500;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{1500,0}};
	};
	class Landmine_distExplosion_SoundShader
	{
		samples[] = {{"Sounds\Extra\Landmine\Explosion\explosion_landmine_far",1}};
		volume = 1.0;
		range = 1500;
		rangeCurve[] = {{0,0},{50,0},{300,1},{1500,1}};
	};
	class WindForestLight_SoundShader
	{
		samples[] = {{"DZ\sounds\environment\ambients\WindForestLight_-9db",1}};
		volume = "(0.25 * (windy factor[0.2, 0.6])) * (( 2 * trees ) / ( trees + 1 )) * (((1 - (rain factor [0.25, 1]))) max (0.8)) * (1 - 0.3*night)";
	};
	class WindForestHeavy_SoundShader
	{
		samples[] = {{"DZ\sounds\environment\ambients\WindForestHeavy_-9db",1}};
		volume = "0.35 * (windy factor[0.55, 1]) * (( 2 * trees ) / ( trees + 1 )) * (((1 - (rain factor [0.25, 1]))) max (0.8)) * (1 - 0.3*night)";
	};
	class WindHousesLight_SoundShader
	{
		samples[] = {{"DZ\sounds\environment\ambients\WindHousesLight_-9db",1}};
		volume = "(0.25 * (windy factor[0.2, 0.6])) * ( 1 - (( 2 * trees ) / ( trees + 1 ))) * (((1 - (rain factor [0.25, 1]))) max (0.8)) * 0.7 * (1-0.75*(waterDepth factor[10,20])) * (1 - 0.3*night)";
	};
	class WindHousesHeavy_SoundShader
	{
		samples[] = {{"DZ\sounds\environment\ambients\WindHousesHeavy_-9db",1}};
		volume = "0.35 * (windy factor[0.55, 1]) * ( 1 - (( 2 * trees ) / ( trees + 1 ))) * (((1 - (rain factor [0.25, 1]))) max (0.8)) * 0.8 * (1-0.75*(waterDepth factor[10,20])) * (1 - 0.3*night)";
	};
	class WindHills_SoundShader
	{
		samples[] = {{"DZ\sounds\environment\ambients\WindHills_-9db",1}};
		volume = "0.35 * (windy factor[0.6,1]) * (hills factor[0.5,1]) * 0.4 * (1 - 0.3*night)";
	};
};
