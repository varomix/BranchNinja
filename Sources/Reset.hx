package;

class Reset  extends State {
	
	public function new():Void
	{
		super();
	    
	}

	override public function create()
	{
	    super.create();
	    trace("Creating RESET State");

	    Game.switchState(new BranchNinja());
		

	}
}