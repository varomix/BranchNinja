package;

import kha.Assets;
import kha.graphics2.Graphics;

import kha2d.Animation;
import kha2d.Sprite;

class Player extends Sprite {
	private static var instance:Player;
	// SETUP ANIMATIONS
	public var walk:Animation;
	public var jump:Animation;
	public var shoot:Animation;

	public function new()
	{
		// we use super to import the image
		super(Assets.images.ninjaBlack2, 36, 36);
		instance = this;

		// animation frames
		walk = Animation.createRange(12, 15, 5);
		jump = Animation.create(17);
		shoot = Animation.create(23);

		// set initial anim
		setAnimation(walk);
	}

	public static function getInstance():Player
	{
		return instance;
	    
	}

	override public function update():Void {
		super.update();
	}
	
}