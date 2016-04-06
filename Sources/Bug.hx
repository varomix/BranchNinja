package;

import kha.Assets;
import kha.graphics2.Graphics;

import kha2d.Animation;
import kha2d.Sprite;

class Bug extends Sprite {
	// SETUP ANIMATIONS
	public var walk:Animation;


	public function new()
	{
		// we use super to import the image
		super(Assets.images.bug, 36, 36);

		// animation frames
		walk = Animation.createRange(0, 3, 5);


		// set initial anim
		setAnimation(walk);
	}

	override public function update():Void {
		super.update();
		
	}
	
}