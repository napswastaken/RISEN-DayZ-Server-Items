////////////////////////////////////////////////////////////////////
//DeRap: Nulled_Firearms\p90\data\Sounds\config.bin
//Produced from mikero's Dos Tools Dll version 8.12
//https://mikero.bytex.digital/Downloads
//'now' is Wed Aug 25 20:20:26 2021 : 'file' last modified on Sun Aug 22 09:59:42 2021
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class P90_Sounds
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
	class P90_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"Sounds\firearms\P90\P90_close",1}};
		volume = 0.7943282;
	};
	class P90_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"Sounds\firearms\P90\P90_distant",1}};
		volume = 0.7943282;
	};
	class P90_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"Sounds\firearms\P90\P90_far",1}};
		volume = 0.7943282;
	};
	class P90_tailDistant_SoundShader: base_tailDistant_SoundShader
	{
		samples[] = {{"Sounds\firearms\P90\P90_distant_tail",1}};
		volume = 1.7782794;
	};
	class P90_tailForest_SoundShader: base_tailForest_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_tail_forest",1}};
	};
	class P90_tailHouses_SoundShader: base_tailHouses_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_tail_houses",1}};
	};
	class P90_tailInterior_SoundShader: base_tailInterior_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_tail_interior",1}};
	};
	class P90_tailMeadows_SoundShader: base_tailMeadows_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_tail_meadows",1}};
	};
	class P90_tailTrees_SoundShader: base_tailTrees_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_tail_trees",1}};
	};
	class P90_silencerCloseShot_SoundShader: base_ProfessionalSilenced_closeShot_SoundShader
	{
		samples[] = {{"Sounds\firearms\P90\P90_Surpressed_close",1}};
		volume = 1;
	};
	class P90_silencerMidShot_SoundShader: base_ProfessionalSilenced_midShot_SoundShader
	{
		samples[] = {{"Sounds\firearms\P90\P90_Surpressed_distant",1}};
		volume = 0.56234133;
	};
	class P90_silencerDistShot_SoundShader: base_ProfessionalSilenced_distShot_SoundShader
	{
		samples[] = {{"Sounds\firearms\P90\P90_Surpressed_distant",1}};
		volume = 1;
	};
	class P90_silencerTailHouses_SoundShader: base_ProfessionalSilenced_tailHouses_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_tail_silenced_houses",1}};
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class Rifle_Tail_Base_SoundSet;
	class Rifle_InteriorTail_Base_SoundSet;
	class Rifle_silencerShot_Base_SoundSet;
	class Rifle_silencerTail_Base_SoundSet;
	class P90_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"P90_closeShot_SoundShader","P90_midShot_SoundShader","P90_distShot_SoundShader"};
	};
	class P90_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[] = {"P90_tailDistant_SoundShader","P90_tailHouses_SoundShader"};
	};
	class P90_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[] = {"P90_tailInterior_SoundShader"};
	};
	class P90_silencer_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[] = {"P90_silencerCloseShot_SoundShader","P90_silencerMidShot_SoundShader","P90_silencerDistShot_SoundShader"};
	};
	class P90_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[] = {"P90_silencerTailHouses_SoundShader"};
	};
};
