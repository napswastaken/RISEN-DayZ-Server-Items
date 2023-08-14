////////////////////////////////////////////////////////////////////
//DeRap: Nulled_Firearms\SVU\data\Sounds\config.bin
//Produced from mikero's Dos Tools Dll version 8.12
//https://mikero.bytex.digital/Downloads
//'now' is Wed Aug 25 20:20:31 2021 : 'file' last modified on Sun Aug 22 09:59:43 2021
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class SVU_Sounds
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
	class SVU_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"Sounds\firearms\SVU\SVU_close",1}};
		volume = 0.7943282;
	};
	class SVU_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"Sounds\firearms\SVU\SVU_distant",1}};
		volume = 0.7943282;
	};
	class SVU_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"Sounds\firearms\SVU\SVU_far",1}};
		volume = 0.7943282;
	};
	class SVU_tailDistant_SoundShader: base_tailDistant_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_tail_distant",1}};
		volume = 1.7782794;
	};
	class SVU_tailForest_SoundShader: base_tailForest_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_tail_forest",1}};
	};
	class SVU_tailHouses_SoundShader: base_tailHouses_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_tail_houses",1}};
	};
	class SVU_tailInterior_SoundShader: base_tailInterior_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_tail_interior",1}};
	};
	class SVU_tailMeadows_SoundShader: base_tailMeadows_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_tail_meadows",1}};
	};
	class SVU_tailTrees_SoundShader: base_tailTrees_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_tail_trees",1}};
	};
	class SVU_silencerCloseShot_SoundShader: base_ProfessionalSilenced_closeShot_SoundShader
	{
		samples[] = {{"Sounds\pistols\DesertEagle\Deagle_silenced_close",1}};
		volume = 1;
	};
	class SVU_silencerMidShot_SoundShader: base_ProfessionalSilenced_midShot_SoundShader
	{
		samples[] = {{"Sounds\pistols\DesertEagle\Deagle_silenced_distant",1}};
		volume = 0.56234133;
	};
	class SVU_silencerDistShot_SoundShader: base_ProfessionalSilenced_distShot_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_dist_shot_Silenced_01",1},{"DZ\sounds\weapons\firearms\NewAk\AK_dist_shot_Silenced_02",1},{"DZ\sounds\weapons\firearms\NewAk\AK_dist_shot_Silenced_03",1}};
		volume = 1;
	};
	class SVU_silencerTailHouses_SoundShader: base_ProfessionalSilenced_tailHouses_SoundShader
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
	class SVU_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"SVU_closeShot_SoundShader","SVU_midShot_SoundShader","SVU_distShot_SoundShader"};
	};
	class SVU_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[] = {"SVU_tailDistant_SoundShader","SVU_tailHouses_SoundShader"};
	};
	class SVU_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[] = {"SVU_tailInterior_SoundShader"};
	};
	class SVU_silencer_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[] = {"SVU_silencerCloseShot_SoundShader","SVU_silencerMidShot_SoundShader","SVU_silencerDistShot_SoundShader"};
	};
	class SVU_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[] = {"SVU_silencerTailHouses_SoundShader"};
	};
};
