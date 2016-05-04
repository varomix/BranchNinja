package fx;

import kha.Assets;
import kha2d.Animation;
import kha2d.Scene;
import kha2d.Sprite;

class Jumpfx extends Sprite {
	// SETUP ANIMATIONS
	public var jumpfx:Animation;
	public var count:Int;


	public function new(x:Float, y:Float)
	{
		// we use super to import the image
		super(Assets.images.effects, 36, 36, 0);
		this.x = x;
		this.y = y;
		accy = 0;

		// animation frames
		jumpfx = Animation.createRange(7, 12, 4);

		// set initial anim
		setAnimation(jumpfx);

		count = 4 * 5;
	}

	override public function update():Void {
		super.update();
		--count;
		if(count <= 0) Scene.the.removeProjectile(this);  // remove explosion
	}
	
}