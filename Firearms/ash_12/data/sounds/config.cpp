////////////////////////////////////////////////////////////////////
//DeRap: Nulled_Firearms\ash_12\data\sounds\config.bin
//Produced from mikero's Dos Tools Dll version 8.12
//https://mikero.bytex.digital/Downloads
//'now' is Wed Aug 25 20:20:20 2021 : 'file' last modified on Sun Aug 22 09:59:39 2021
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ASH_12_Sounds
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
	class ASH_12_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"Sounds\firearms\ASH_12\ASH_12_close",1}};
		volume = 0.7943282;
	};
	class ASH_12_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"Sounds\firearms\ASH_12\ASH_12_distant",1}};
		volume = 0.7943282;
	};
	class ASH_12_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"Sounds\firearms\ASH_12\ASH_12_far",1}};
		volume = 0.7943282;
	};
	class ASH_12_tailDistant_SoundShader: base_tailDistant_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_tail_distant",1}};
		volume = 1.7782794;
	};
	class ASH_12_tailForest_SoundShader: base_tailForest_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_tail_forest",1}};
	};
	class ASH_12_tailHouses_SoundShader: base_tailHouses_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_tail_houses",1}};
	};
	class ASH_12_tailInterior_SoundShader: base_tailInterior_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_tail_interior",1}};
	};
	class ASH_12_tailMeadows_SoundShader: base_tailMeadows_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_tail_meadows",1}};
	};
	class ASH_12_tailTrees_SoundShader: base_tailTrees_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_tail_trees",1}};
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class Rifle_Tail_Base_SoundSet;
	class Rifle_InteriorTail_Base_SoundSet;
	class Rifle_silencerShot_Base_SoundSet;
	class Rifle_silencerTail_Base_SoundSet;
	class ASH_12_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"ASH_12_closeShot_SoundShader","ASH_12_midShot_SoundShader","ASH_12_distShot_SoundShader"};
	};
	class ASH_12_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[] = {"ASH_12_tailDistant_SoundShader","ASH_12_tailHouses_SoundShader"};
	};
	class ASH_12_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[] = {"ASH_12_tailInterior_SoundShader"};
	};
	class ASH_12_silencer_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[] = {"ASH_12_silencerCloseShot_SoundShader","ASH_12_silencerMidShot_SoundShader","ASH_12_silencerDistShot_SoundShader"};
	};
	class ASH_12_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[] = {"ASH_12_silencerTailHouses_SoundShader"};
	};
};
