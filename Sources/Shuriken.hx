package;

import kha.Assets;
import kha.graphics2.Graphics;
import kha.Sound;
import kha.audio1.Audio;
import kha2d.Scene;
import kha2d.Sprite;
import kha2d.Animation;

class Shuriken extends Sprite{


	public function new(x:Float, y:Float)
	{
	    super(Assets.images.shuriken, 26, 26, 0);
	    this.x = x;
	    this.y = y;
	    speedx = 10;
	    // accx = 10;
	    accy = 0;
    
	    originX = 13;
	    originY = 13;
		Audio.play(Assets.sounds.wooshshuriken);	
				
	}

	override public function hit(sprite:Sprite):Void
	{
		if(Std.is(sprite, Bug)){
			Scene.the.removeProjectile(this);
			cast(sprite, Bug).hitWithShot();
		}
		if(Std.is(sprite, Bug2)){
			Scene.the.removeProjectile(this);
			cast(sprite, Bug2).hitWithShot();
		}
	}

	override public function outOfView():Void
	{
		Scene.the.removeProjectile(this);
	}

	override public function update():Void {
		super.update();
		angle += 0.2;
		if(x > 500) outOfView(); // TODO: find how to use outofview()
	}



	
}