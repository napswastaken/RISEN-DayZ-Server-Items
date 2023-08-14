////////////////////////////////////////////////////////////////////
//DeRap: Nulled_Firearms\Kar98\data\sounds\config.bin
//Produced from mikero's Dos Tools Dll version 8.12
//https://mikero.bytex.digital/Downloads
//'now' is Wed Aug 25 20:20:22 2021 : 'file' last modified on Sun Aug 22 09:59:40 2021
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Kar98_Sounds
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
	class Kar98_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"Sounds\firearms\Kar98\Kar98_close",1}};
		volume = 0.7943282;
	};
	class Kar98_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"Sounds\firearms\Kar98\Kar98_distant",1}};
		volume = 0.7943282;
	};
	class Kar98_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"Sounds\firearms\Kar98\Kar98_far",1}};
		volume = 0.7943282;
	};
	class Kar98_tailDistant_SoundShader: base_tailDistant_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_tail_distant",1}};
		volume = 1.7782794;
	};
	class Kar98_tailForest_SoundShader: base_tailForest_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_tail_forest",1}};
	};
	class Kar98_tailHouses_SoundShader: base_tailHouses_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_tail_houses",1}};
	};
	class Kar98_tailInterior_SoundShader: base_tailInterior_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_tail_interior",1}};
	};
	class Kar98_tailMeadows_SoundShader: base_tailMeadows_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_tail_meadows",1}};
	};
	class Kar98_tailTrees_SoundShader: base_tailTrees_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_tail_trees",1}};
	};
	class Kar98_silencerCloseShot_SoundShader: base_ProfessionalSilenced_closeShot_SoundShader
	{
		samples[] = {{"Sounds\firearms\Kar98\Kar98_close_silenced",1}};
		volume = 1;
	};
	class Kar98_silencerMidShot_SoundShader: base_ProfessionalSilenced_midShot_SoundShader
	{
		samples[] = {{"Sounds\firearms\Kar98\Kar98_distant_silenced",1}};
		volume = 0.56234133;
	};
	class Kar98_silencerDistShot_SoundShader: base_ProfessionalSilenced_distShot_SoundShader
	{
		samples[] = {{"Sounds\firearms\Kar98\Kar98_distant_silenced",1}};
		volume = 1;
	};
	class Kar98_silencerTailHouses_SoundShader: base_ProfessionalSilenced_tailHouses_SoundShader
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
	class Kar98_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"Kar98_closeShot_SoundShader","Kar98_midShot_SoundShader","Kar98_distShot_SoundShader"};
	};
	class Kar98_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[] = {"Kar98_tailDistant_SoundShader","Kar98_tailHouses_SoundShader"};
	};
	class Kar98_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[] = {"Kar98_tailInterior_SoundShader"};
	};
	class Kar98_silencer_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[] = {"Kar98_silencerCloseShot_SoundShader","Kar98_silencerMidShot_SoundShader","Kar98_silencerDistShot_SoundShader"};
	};
	class Kar98_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[] = {"Kar98_silencerTailHouses_SoundShader"};
	};
};
