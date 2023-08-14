void FoldOptics (EntityAI ParentItem)
{
	protected int foldingOpticRaisedId = -1;
	protected int foldingOpticLoweredId = -1;
	TStringArray selectionNames = new TStringArray;

	ParentItem.ConfigGetTextArray("simpleHiddenSelections",selectionNames);

	foldingOpticRaisedId = selectionNames.Find("folding_raised");
	foldingOpticLoweredId = selectionNames.Find("folding_lowered");  
		
	ParentItem.SetSimpleHiddenSelectionState(foldingOpticRaisedId,false);
	ParentItem.SetSimpleHiddenSelectionState(foldingOpticLoweredId,true);
};

void UnfoldOptics(EntityAI ParentItem)
{
	protected int foldingOpticRaisedId = -1;
	protected int foldingOpticLoweredId = -1;
	TStringArray selectionNames = new TStringArray;

	ParentItem.ConfigGetTextArray("simpleHiddenSelections",selectionNames);

	foldingOpticRaisedId = selectionNames.Find("folding_raised");
	foldingOpticLoweredId = selectionNames.Find("folding_lowered");  

	ParentItem.SetSimpleHiddenSelectionState(foldingOpticRaisedId,true);
	ParentItem.SetSimpleHiddenSelectionState(foldingOpticLoweredId,false);
};

void HideIronSightsRev (EntityAI ParentItem)
{
	protected int hideIronsightsId = -1;
	TStringArray selectionNames = new TStringArray;
	ParentItem.ConfigGetTextArray("simpleHiddenSelections",selectionNames);

	hideIronsightsId = selectionNames.Find("hide_ironsights");
			
	ParentItem.SetSimpleHiddenSelectionState(hideIronsightsId,false);
};

void ShowIronSightsRev (EntityAI ParentItem)
{
	protected int hideIronsightsId = -1;
	TStringArray selectionNames = new TStringArray;

	ParentItem.ConfigGetTextArray("simpleHiddenSelections",selectionNames);

	hideIronsightsId = selectionNames.Find("hide_ironsights");

	ParentItem.SetSimpleHiddenSelectionState(hideIronsightsId,true);
};