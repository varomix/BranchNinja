package;

import kha.Assets;
import kha.graphics2.Graphics;

import kha2d.Animation;
import kha2d.Sprite;

class Explosion extends Sprite {
	// SETUP ANIMATIONS
	public var explode:Animation;

	public function new()
	{
		// we use super to import the image
		super(Assets.images.explosion, 36, 36);

		// animation frames
		explode = Animation.createRange(0, 5, 4);

		// set initial anim
		setAnimation(explode);
	}

	override public function update():Void {
		super.update();
	}
	
}