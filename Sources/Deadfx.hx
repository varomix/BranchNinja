package;

import kha.Assets;
import kha2d.Animation;
import kha2d.Scene;
import kha2d.Sprite;

class Deadfx extends Sprite {
	// SETUP ANIMATIONS
	public var explode:Animation;
	public var count:Int;


	public function new(x:Float, y:Float)
	{
		// we use super to import the image
		super(Assets.images.dieExplosion, 150, 150, 2);
		this.x = x;
		this.y = y;
		accy = 0;

		// animation frames
		explode = Animation.createRange(0, 7, 4);

		// set initial anim
		setAnimation(explode);

		count = 4 * 6;
	}

	override public function update():Void {
		super.update();
		--count;
		if(count <= 0) Scene.the.removeProjectile(this);  // remove explosion
	}
	
}