package;

import kha.Assets;
import kha2d.Animation;
import kha2d.Sprite;
import kha2d.Scene;

class Bug extends Sprite {
	// SETUP ANIMATIONS
	public var walk:Animation;


	public function new()
	{
		// we use super to import the image
		super(Assets.images.bug, 36, 36);

		// animation frames
		walk = Animation.createRange(0, 3, 5);

		accy = 0;
		speedx = -3;


		// set initial anim
		setAnimation(walk);
	}

	public function hitWithShot():Void
	{
		trace("I was hit");
		Scene.the.removeEnemy(this);
	}
	
}