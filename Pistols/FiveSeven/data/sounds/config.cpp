////////////////////////////////////////////////////////////////////
//DeRap: FiveSeven\data\sounds\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Mon Aug 14 16:31:28 2023 : 'file' last modified on Mon Aug 14 16:31:28 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class FiveSeven_Sounds
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
	class FiveSeven_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"Sounds\pistols\FiveSeven\fiveseven_close",1}};
		volume = 0.7943282;
	};
	class FiveSeven_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"Sounds\pistols\FiveSeven\fiveseven_distant",1}};
		volume = 0.7943282;
	};
	class FiveSeven_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"Sounds\pistols\FiveSeven\fiveseven_far",1}};
		volume = 0.7943282;
	};
	class FiveSeven_tailDistant_SoundShader: base_tailDistant_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_tail_distant",1}};
		volume = 1.7782794;
	};
	class FiveSeven_tailForest_SoundShader: base_tailForest_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_tail_forest",1}};
	};
	class FiveSeven_tailHouses_SoundShader: base_tailHouses_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_tail_houses",1}};
	};
	class FiveSeven_tailInterior_SoundShader: base_tailInterior_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_tail_interior",1}};
	};
	class FiveSeven_tailMeadows_SoundShader: base_tailMeadows_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_tail_meadows",1}};
	};
	class FiveSeven_tailTrees_SoundShader: base_tailTrees_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_tail_trees",1}};
	};
	class FiveSeven_silencerCloseShot_SoundShader: base_ProfessionalSilenced_closeShot_SoundShader
	{
		samples[] = {{"Sounds\pistols\FiveSeven\FiveSeven_silenced_close",1}};
		volume = 1;
	};
	class FiveSeven_silencerMidShot_SoundShader: base_ProfessionalSilenced_midShot_SoundShader
	{
		samples[] = {{"Sounds\pistols\FiveSeven\FiveSeven_silenced_distant",1}};
		volume = 0.56234133;
	};
	class FiveSeven_silencerDistShot_SoundShader: base_ProfessionalSilenced_distShot_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_dist_shot_Silenced_01",1},{"DZ\sounds\weapons\firearms\NewAk\AK_dist_shot_Silenced_02",1},{"DZ\sounds\weapons\firearms\NewAk\AK_dist_shot_Silenced_03",1}};
		volume = 1;
	};
	class FiveSeven_silencerTailHouses_SoundShader: base_ProfessionalSilenced_tailHouses_SoundShader
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
	class FiveSeven_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"FiveSeven_closeShot_SoundShader","FiveSeven_midShot_SoundShader","FiveSeven_distShot_SoundShader"};
	};
	class FiveSeven_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[] = {"FiveSeven_tailDistant_SoundShader","FiveSeven_tailHouses_SoundShader"};
	};
	class FiveSeven_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[] = {"FiveSeven_tailInterior_SoundShader"};
	};
	class FiveSeven_silencer_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[] = {"FiveSeven_silencerCloseShot_SoundShader","FiveSeven_silencerMidShot_SoundShader","FiveSeven_silencerDistShot_SoundShader"};
	};
	class FiveSeven_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[] = {"FiveSeven_silencerTailHouses_SoundShader"};
	};
};
