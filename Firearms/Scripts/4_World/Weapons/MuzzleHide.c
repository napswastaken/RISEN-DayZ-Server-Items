	void HideMuzzleRA (EntityAI ParentItem)
	{
		protected int hideMuzzleId = -1;
		TStringArray selectionNames = new TStringArray;

		ParentItem.ConfigGetTextArray("simpleHiddenSelections",selectionNames);

		hideMuzzleId = selectionNames.Find("muzzle");
			
		ParentItem.SetSimpleHiddenSelectionState(hideMuzzleId,false);
	};

	void ShowMuzzleRA (EntityAI ParentItem)
	{
		protected int hideMuzzleId = -1;
		TStringArray selectionNames = new TStringArray;

		ParentItem.ConfigGetTextArray("simpleHiddenSelections",selectionNames);

		hideMuzzleId = selectionNames.Find("muzzle");

		ParentItem.SetSimpleHiddenSelectionState(hideMuzzleId,true);
	};