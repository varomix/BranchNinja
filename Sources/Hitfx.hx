package;

import kha.Assets;
import kha2d.Animation;
import kha2d.Scene;
import kha2d.Sprite;

class Hitfx extends Sprite {
	// SETUP ANIMATIONS
	public var hitfx:Animation;
	public var count:Int;


	public function new(x:Float, y:Float)
	{
		// we use super to import the image
		super(Assets.images.effects, 36, 36, 0);
		this.x = x;
		this.y = y;
		accy = 0;
		z = 3;

		// animation frames
		hitfx = Animation.createRange(6, 11, 4);

		// set initial anim
		setAnimation(hitfx);

		count = 4 * 5;
	}

	override public function update():Void {
		super.update();
		--count;
		if(count <= 0) Scene.the.removeProjectile(this);  // remove explosion
	}
	
}