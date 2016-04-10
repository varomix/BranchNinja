package;

import kha.Assets;
import kha2d.Animation;
import kha2d.Scene;
import kha2d.Sprite;

class Diefx extends Sprite {
	// SETUP ANIMATIONS
	public var skull:Animation;

	public function new(x:Float, y:Float)
	{
		// we use super to import the image
		super(Assets.images.die, 36, 36, 1);
		this.x = x;
		this.y = y;
		accy = 0;

		// animation frames
		skull = Animation.createRange(0, 3, 10);

		// set initial anim
		setAnimation(skull);

	}
}