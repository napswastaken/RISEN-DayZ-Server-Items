////////////////////////////////////////////////////////////////////
//DeRap: Nulled_Firearms\ks23\data\sounds\config.bin
//Produced from mikero's Dos Tools Dll version 8.12
//https://mikero.bytex.digital/Downloads
//'now' is Wed Aug 25 20:20:22 2021 : 'file' last modified on Sun Aug 22 09:59:40 2021
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class KS23_Sounds
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Sounds_Effects"};
	};
};
class CfgSoundShaders
{
	class baseCharacter_SoundShader;
	class base_closeShot_SoundShader;
	class base_midShot_SoundShader;
	class base_distShot_SoundShader;
	class base_tailHouses_SoundShader;
	class base_tailInterior_SoundShader;
	class base_tailDistant_SoundShader;
	class base_tailForest_SoundShader;
	class base_tailMeadows_SoundShader;
	class base_tailTrees_SoundShader;
	class base_ProfessionalSilenced_closeShot_SoundShader;
	class base_ProfessionalSilenced_midShot_SoundShader;
	class base_ProfessionalSilenced_distShot_SoundShader;
	class base_ProfessionalSilenced_tailHouses_SoundShader;
	class KS23_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"Sounds\firearms\KS23\ks23_fire_outdoor_close",1}};
		volume = 0.7943282;
	};
	class KS23_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"Sounds\firearms\KS23\ks23_fire_outdoor_distant",1}};
		volume = 0.7943282;
	};
	class KS23_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"Sounds\firearms\KS23\ks23_fire_outdoor_far",1}};
		volume = 0.7943282;
	};
	class KS23_tailInterior_SoundShader: base_tailInterior_SoundShader
	{
		samples[] = {{"Sounds\firearms\KS23\ks23_fire_indoor_close",1}};
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class Rifle_Tail_Base_SoundSet;
	class Rifle_InteriorTail_Base_SoundSet;
	class Rifle_silencerShot_Base_SoundSet;
	class Rifle_silencerTail_Base_SoundSet;
	class KS23_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"KS23_closeShot_SoundShader","KS23_midShot_SoundShader","KS23_distShot_SoundShader"};
	};
	class KS23_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[] = {"KS23_tailInterior_SoundShader"};
	};
};
