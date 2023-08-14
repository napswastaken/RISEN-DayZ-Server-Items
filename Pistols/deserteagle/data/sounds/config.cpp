////////////////////////////////////////////////////////////////////
//DeRap: deserteagle\data\sounds\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Mon Aug 14 16:31:28 2023 : 'file' last modified on Mon Aug 14 16:31:28 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DesertEagle_Sounds
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
	class DesertEagle_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"Sounds\pistols\DesertEagle\Deagle_close",1}};
		volume = 0.7943282;
	};
	class DesertEagle_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"Sounds\pistols\DesertEagle\Deagle_distant",1}};
		volume = 0.7943282;
	};
	class DesertEagle_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"Sounds\pistols\DesertEagle\Deagle_far",1}};
		volume = 0.7943282;
	};
	class DesertEagle_tailDistant_SoundShader: base_tailDistant_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_tail_distant",1}};
		volume = 1.7782794;
	};
	class DesertEagle_tailForest_SoundShader: base_tailForest_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_tail_forest",1}};
	};
	class DesertEagle_tailHouses_SoundShader: base_tailHouses_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_tail_houses",1}};
	};
	class DesertEagle_tailInterior_SoundShader: base_tailInterior_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_tail_interior",1}};
	};
	class DesertEagle_tailMeadows_SoundShader: base_tailMeadows_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_tail_meadows",1}};
	};
	class DesertEagle_tailTrees_SoundShader: base_tailTrees_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_tail_trees",1}};
	};
	class DesertEagle_silencerCloseShot_SoundShader: base_ProfessionalSilenced_closeShot_SoundShader
	{
		samples[] = {{"Sounds\pistols\DesertEagle\Deagle_silenced_close",1}};
		volume = 1;
	};
	class DesertEagle_silencerMidShot_SoundShader: base_ProfessionalSilenced_midShot_SoundShader
	{
		samples[] = {{"Sounds\pistols\DesertEagle\Deagle_silenced_distant",1}};
		volume = 0.56234133;
	};
	class DesertEagle_silencerDistShot_SoundShader: base_ProfessionalSilenced_distShot_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_dist_shot_Silenced_01",1},{"DZ\sounds\weapons\firearms\NewAk\AK_dist_shot_Silenced_02",1},{"DZ\sounds\weapons\firearms\NewAk\AK_dist_shot_Silenced_03",1}};
		volume = 1;
	};
	class DesertEagle_silencerTailHouses_SoundShader: base_ProfessionalSilenced_tailHouses_SoundShader
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
	class DesertEagle_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"DesertEagle_closeShot_SoundShader","DesertEagle_midShot_SoundShader","DesertEagle_distShot_SoundShader"};
	};
	class DesertEagle_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[] = {"DesertEagle_tailDistant_SoundShader","DesertEagle_tailHouses_SoundShader"};
	};
	class DesertEagle_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[] = {"DesertEagle_tailInterior_SoundShader"};
	};
	class DesertEagle_silencer_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[] = {"DesertEagle_silencerCloseShot_SoundShader","DesertEagle_silencerMidShot_SoundShader","DesertEagle_silencerDistShot_SoundShader"};
	};
	class DesertEagle_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[] = {"DesertEagle_silencerTailHouses_SoundShader"};
	};
};
