////////////////////////////////////////////////////////////////////
//DeRap: Nulled_Firearms\r700\Data\Sounds\config.bin
//Produced from mikero's Dos Tools Dll version 8.12
//https://mikero.bytex.digital/Downloads
//'now' is Wed Aug 25 20:20:29 2021 : 'file' last modified on Sun Aug 22 09:59:42 2021
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class R700_Sounds
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
	class base_ProfessionalSilenced_tailInterior_SoundShader;
	class R700_silencerTailInterior_SoundShader: base_ProfessionalSilenced_tailInterior_SoundShader
	{
		samples[] = {{"Sounds\firearms\R700\r700_indoor_silenced_close",1}};
	};
	class R700_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"Sounds\firearms\R700\r700_close",1}};
		volume = 0.7943282;
	};
	class R700_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"Sounds\firearms\R700\r700_distant",1}};
		volume = 0.7943282;
	};
	class R700_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"Sounds\firearms\R700\r700_far",1}};
		volume = 0.7943282;
	};
	class R700_tailDistant_SoundShader: base_tailDistant_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_tail_distant",1}};
		volume = 1.7782794;
	};
	class R700_tailForest_SoundShader: base_tailForest_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_tail_forest",1}};
	};
	class R700_tailHouses_SoundShader: base_tailHouses_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_tail_houses",1}};
	};
	class R700_tailInterior_SoundShader: base_tailInterior_SoundShader
	{
		samples[] = {{"Sounds\firearms\R700\r700_indoor_silenced_close",1}};
	};
	class R700_tailMeadows_SoundShader: base_tailMeadows_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_tail_meadows",1}};
	};
	class R700_tailTrees_SoundShader: base_tailTrees_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_tail_trees",1}};
	};
	class R700_silencerCloseShot_SoundShader: base_ProfessionalSilenced_closeShot_SoundShader
	{
		samples[] = {{"Sounds\firearms\R700\r700_outdoor_silenced_close",1}};
		volume = 1;
	};
	class R700_silencerMidShot_SoundShader: base_ProfessionalSilenced_midShot_SoundShader
	{
		samples[] = {{"Sounds\firearms\R700\r700_outdoor_silenced_distant",1}};
		volume = 0.56234133;
	};
	class R700_silencerDistShot_SoundShader: base_ProfessionalSilenced_distShot_SoundShader
	{
		samples[] = {{"Sounds\firearms\R700\r700_outdoor_silenced_distant",1}};
		volume = 1;
	};
	class R700_silencerTailHouses_SoundShader: base_ProfessionalSilenced_tailHouses_SoundShader
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
	class R700_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"R700_closeShot_SoundShader","R700_midShot_SoundShader","R700_distShot_SoundShader"};
	};
	class R700_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[] = {"R700_tailDistant_SoundShader","R700_tailHouses_SoundShader"};
	};
	class R700_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[] = {"R700_tailInterior_SoundShader"};
	};
	class R700_silencerTailInterior_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[] = {"R700_silencerTailInterior_SoundShader"};
	};
	class R700_silencer_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[] = {"R700_silencerCloseShot_SoundShader","R700_silencerMidShot_SoundShader","R700_silencerDistShot_SoundShader"};
	};
	class R700_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[] = {"R700_silencerTailHouses_SoundShader"};
	};
};
