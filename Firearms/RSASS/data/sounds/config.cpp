////////////////////////////////////////////////////////////////////
//DeRap: Nulled_Firearms\RSASS\data\sounds\config.bin
//Produced from mikero's Dos Tools Dll version 8.12
//https://mikero.bytex.digital/Downloads
//'now' is Wed Aug 25 20:20:29 2021 : 'file' last modified on Sun Aug 22 09:59:43 2021
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class RSASS_Sounds
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
	class RSASS_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"Sounds\firearms\RSASS\rsass_close",1}};
		volume = 0.7943282;
	};
	class RSASS_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"Sounds\firearms\RSASS\rsass_distant",1}};
		volume = 0.7943282;
	};
	class RSASS_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"Sounds\firearms\RSASS\rsass_far",1}};
		volume = 0.7943282;
	};
	class RSASS_tailDistant_SoundShader: base_tailDistant_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_tail_distant",1}};
		volume = 1.7782794;
	};
	class RSASS_tailForest_SoundShader: base_tailForest_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_tail_forest",1}};
	};
	class RSASS_tailHouses_SoundShader: base_tailHouses_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_tail_houses",1}};
	};
	class RSASS_tailInterior_SoundShader: base_tailInterior_SoundShader
	{
		samples[] = {{"Sounds\firearms\RSASS\rsass_fire_indoor_close",1}};
	};
	class RSASS_tailMeadows_SoundShader: base_tailMeadows_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_tail_meadows",1}};
	};
	class RSASS_tailTrees_SoundShader: base_tailTrees_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_tail_trees",1}};
	};
	class RSASS_silencerCloseShot_SoundShader: base_ProfessionalSilenced_closeShot_SoundShader
	{
		samples[] = {{"Sounds\firearms\RSASS\rsass_close_silenced",1}};
		volume = 1;
	};
	class RSASS_silencerMidShot_SoundShader: base_ProfessionalSilenced_midShot_SoundShader
	{
		samples[] = {{"Sounds\firearms\RSASS\rsass_distant_silenced",1}};
		volume = 0.56234133;
	};
	class RSASS_silencerDistShot_SoundShader: base_ProfessionalSilenced_distShot_SoundShader
	{
		samples[] = {{"Sounds\firearms\RSASS\rsass_distant_silenced",1}};
		volume = 1;
	};
	class RSASS_silencerTailHouses_SoundShader: base_ProfessionalSilenced_tailHouses_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAk\AK_tail_silenced_houses",1}};
	};
	class RSASS_silencertailInterior_SoundShader: base_ProfessionalSilenced_tailInterior_SoundShader
	{
		samples[] = {{"Sounds\firearms\RSASS\rsass_indoor_silenced",1}};
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class Rifle_Tail_Base_SoundSet;
	class Rifle_InteriorTail_Base_SoundSet;
	class Rifle_silencerShot_Base_SoundSet;
	class Rifle_silencerTail_Base_SoundSet;
	class RSASS_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"RSASS_closeShot_SoundShader","RSASS_midShot_SoundShader","RSASS_distShot_SoundShader"};
	};
	class RSASS_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[] = {"RSASS_tailDistant_SoundShader","RSASS_tailHouses_SoundShader"};
	};
	class RSASS_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[] = {"RSASS_tailInterior_SoundShader"};
	};
	class RSASS_silencer_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[] = {"RSASS_silencerCloseShot_SoundShader","RSASS_silencerMidShot_SoundShader","RSASS_silencerDistShot_SoundShader"};
	};
	class RSASS_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[] = {"RSASS_silencerTailHouses_SoundShader"};
	};
};
