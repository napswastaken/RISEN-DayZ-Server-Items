////////////////////////////////////////////////////////////////////
//DeRap: Nulled_Firearms\VR80\data\sounds\config.bin
//Produced from mikero's Dos Tools Dll version 8.12
//https://mikero.bytex.digital/Downloads
//'now' is Wed Aug 25 20:20:31 2021 : 'file' last modified on Sun Aug 22 09:59:44 2021
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class VR80_Sounds
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
	class VR80_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"Sounds\firearms\VR80\VR80_close",1}};
		volume = 0.7943282;
	};
	class VR80_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"Sounds\firearms\VR80\VR80_distant",1}};
		volume = 0.7943282;
	};
	class VR80_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"Sounds\firearms\VR80\VR80_far",1}};
		volume = 0.7943282;
	};
	class VR80_tailDistant_SoundShader: base_tailDistant_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_tail_distant",1}};
		volume = 1.7782794;
	};
	class VR80_tailForest_SoundShader: base_tailForest_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_tail_forest",1}};
	};
	class VR80_tailHouses_SoundShader: base_tailHouses_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_tail_houses",1}};
	};
	class VR80_tailInterior_SoundShader: base_tailInterior_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_tail_interior",1}};
	};
	class VR80_tailMeadows_SoundShader: base_tailMeadows_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_tail_meadows",1}};
	};
	class VR80_tailTrees_SoundShader: base_tailTrees_SoundShader
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
	class VR80_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"VR80_closeShot_SoundShader","VR80_midShot_SoundShader","VR80_distShot_SoundShader"};
	};
	class VR80_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[] = {"VR80_tailDistant_SoundShader","VR80_tailHouses_SoundShader"};
	};
	class VR80_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[] = {"VR80_tailInterior_SoundShader"};
	};
	class VR80_silencer_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[] = {"VR80_silencerCloseShot_SoundShader","VR80_silencerMidShot_SoundShader","VR80_silencerDistShot_SoundShader"};
	};
	class VR80_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[] = {"VR80_silencerTailHouses_SoundShader"};
	};
};
