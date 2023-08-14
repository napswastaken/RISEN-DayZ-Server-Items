class ActionIFAKTargetCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(UATimeSpent.APPLY_SPLINT);
	}
};
class ActionIFAKTarget: ActionContinuousBase
{
	void ActionIFAKTarget()
	{
		m_CallbackClass = ActionIFAKTargetCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_CRAFTING;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_MEDIUM;
	}
	override void CreateConditionComponents()  
	{	
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTMan(UAMaxDistances.DEFAULT);
	}
	override string GetText()
	{
		//return "#IFAK_Target";
		return "Use IFAK on Player";
	}	
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		
		float health = PlayerBase.Cast(target.GetObject()).GetHealth(); 
		if (health < 99)
		{
		return true;
		}
		else
		{
		return false;
		}
	}
	
	override void OnFinishProgressServer( ActionData action_data )
	{
		if (action_data.m_MainItem)
		{
			ApplyModifiers(action_data);
			//action_data.m_Player.GetSoftSkillsManager().AddSpecialty( m_SpecialtyWeight );
		}
		if (/*action_data.m_WasExecuted && */action_data.m_MainItem )
		{
			action_data.m_MainItem.Delete();
		}
	}
	override void ApplyModifiers( ActionData action_data )
	{
		action_data.m_MainItem.OnApply(PlayerBase.Cast(action_data.m_Target.GetObject()));
		
	}
};