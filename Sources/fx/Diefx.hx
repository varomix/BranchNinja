package fx;

import kha.Assets;
import kha2d.Animation;
import kha2d.Scene;
import kha2d.Sprite;

class Diefx extends Sprite {
	// SETUP ANIMATIONS
	public var skull:Animation;
	private static var instance:Diefx;

	public function new(x:Float, y:Float)
	{
		instance = this;
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

	public static function getInstance():Diefx
	{
		return instance;
	    
	}
}