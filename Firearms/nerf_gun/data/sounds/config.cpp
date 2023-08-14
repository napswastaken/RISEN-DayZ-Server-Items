////////////////////////////////////////////////////////////////////
//DeRap: Nulled_Firearms\nerf_gun\data\sounds\config.bin
//Produced from mikero's Dos Tools Dll version 8.12
//https://mikero.bytex.digital/Downloads
//'now' is Wed Aug 25 20:20:25 2021 : 'file' last modified on Sun Aug 22 09:59:42 2021
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Nerf_Sounds
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
	class Nerf_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"Sounds\firearms\nerfgun\Nerf_close",1}};
		volume = 0.7943282;
	};
	class Nerf_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"",1}};
		volume = 0.7943282;
	};
	class Nerf_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"",1}};
		volume = 0.7943282;
	};
	class Nerf_tailDistant_SoundShader: base_tailDistant_SoundShader
	{
		samples[] = {{"",1}};
		volume = 1.7782794;
	};
	class Nerf_tailForest_SoundShader: base_tailForest_SoundShader
	{
		samples[] = {{"",1}};
	};
	class Nerf_tailHouses_SoundShader: base_tailHouses_SoundShader
	{
		samples[] = {{"",1}};
	};
	class Nerf_tailInterior_SoundShader: base_tailInterior_SoundShader
	{
		samples[] = {{"",1}};
	};
	class Nerf_tailMeadows_SoundShader: base_tailMeadows_SoundShader
	{
		samples[] = {{"",1}};
	};
	class Nerf_tailTrees_SoundShader: base_tailTrees_SoundShader
	{
		samples[] = {{"",1}};
	};
	class Nerf_silencerCloseShot_SoundShader: base_ProfessionalSilenced_closeShot_SoundShader
	{
		samples[] = {{"",1}};
		volume = 1;
	};
	class Nerf_silencerMidShot_SoundShader: base_ProfessionalSilenced_midShot_SoundShader
	{
		samples[] = {{"",1}};
		volume = 0.56234133;
	};
	class Nerf_silencerDistShot_SoundShader: base_ProfessionalSilenced_distShot_SoundShader
	{
		samples[] = {{"",1}};
		volume = 1;
	};
	class Nerf_silencerTailHouses_SoundShader: base_ProfessionalSilenced_tailHouses_SoundShader
	{
		samples[] = {{"",1}};
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class Rifle_Tail_Base_SoundSet;
	class Rifle_InteriorTail_Base_SoundSet;
	class Rifle_silencerShot_Base_SoundSet;
	class Rifle_silencerTail_Base_SoundSet;
	class Nerf_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"Nerf_closeShot_SoundShader","Nerf_midShot_SoundShader","Nerf_distShot_SoundShader"};
	};
	class Nerf_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[] = {"Nerf_tailDistant_SoundShader","Nerf_tailHouses_SoundShader"};
	};
	class Nerf_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[] = {"Nerf_tailInterior_SoundShader"};
	};
	class Nerf_silencer_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[] = {"Nerf_silencerCloseShot_SoundShader","Nerf_silencerMidShot_SoundShader","Nerf_silencerDistShot_SoundShader"};
	};
	class Nerf_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[] = {"Nerf_silencerTailHouses_SoundShader"};
	};
};
