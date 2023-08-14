////////////////////////////////////////////////////////////////////
//DeRap: Nulled_Firearms\m82a1\data\Sounds\config.bin
//Produced from mikero's Dos Tools Dll version 8.12
//https://mikero.bytex.digital/Downloads
//'now' is Wed Aug 25 20:20:23 2021 : 'file' last modified on Sun Aug 22 09:59:41 2021
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class M82_Sounds
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
	class M82_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"Sounds\firearms\M82A1\M82A1_close",1}};
		volume = 0.7943282;
	};
	class M82_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"Sounds\firearms\M82A1\M82A1_far",1}};
		volume = 0.7943282;
	};
	class M82_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"Sounds\firearms\M82A1\M82A1_far",1}};
		volume = 0.7943282;
	};
	class M82_tailDistant_SoundShader: base_tailDistant_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_tail_distant",1}};
		volume = 1.7782794;
	};
	class M82_tailForest_SoundShader: base_tailForest_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_tail_forest",1}};
	};
	class M82_tailHouses_SoundShader: base_tailHouses_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_tail_houses",1}};
	};
	class M82_tailInterior_SoundShader: base_tailInterior_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_tail_interior",1}};
	};
	class M82_tailMeadows_SoundShader: base_tailMeadows_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_tail_meadows",1}};
	};
	class M82_tailTrees_SoundShader: base_tailTrees_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_tail_trees",1}};
	};
	class M82_silencerCloseShot_SoundShader: base_ProfessionalSilenced_closeShot_SoundShader
	{
		samples[] = {{"Sounds\pistols\DesertEagle\Deagle_silenced_close",1}};
		volume = 1;
	};
	class M82_silencerMidShot_SoundShader: base_ProfessionalSilenced_midShot_SoundShader
	{
		samples[] = {{"Sounds\pistols\DesertEagle\Deagle_silenced_distant",1}};
		volume = 0.56234133;
	};
	class M82_silencerDistShot_SoundShader: base_ProfessionalSilenced_distShot_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_dist_shot_Silenced_01",1},{"DZ\sounds\weapons\firearms\NewAk\AK_dist_shot_Silenced_02",1},{"DZ\sounds\weapons\firearms\NewAk\AK_dist_shot_Silenced_03",1}};
		volume = 1;
	};
	class M82_silencerTailHouses_SoundShader: base_ProfessionalSilenced_tailHouses_SoundShader
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
	class M82_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"M82_closeShot_SoundShader","M82_midShot_SoundShader","M82_distShot_SoundShader"};
	};
	class M82_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[] = {"M82_tailDistant_SoundShader","M82_tailHouses_SoundShader"};
	};
	class M82_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[] = {"M82_tailInterior_SoundShader"};
	};
	class M82_silencer_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[] = {"M82_silencerCloseShot_SoundShader","M82_silencerMidShot_SoundShader","M82_silencerDistShot_SoundShader"};
	};
	class M82_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[] = {"M82_silencerTailHouses_SoundShader"};
	};
};
