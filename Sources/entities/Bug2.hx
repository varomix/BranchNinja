package entities;

import kha.Assets;
import kha2d.Animation;
import kha2d.Sprite;
import kha2d.Scene;
import fx.*;

class Bug2 extends Sprite {
	// SETUP ANIMATIONS
	public var walk:Animation;
	public var health:Int;
	
	public function new(x:Int, y:Int)
	{
		// we use super to import the image
		super(Assets.images.bug2, 48, 48);
		this.x = x;
		this.y = y + 16;

		// animation frames
		walk = Animation.createRange(0, 3, 5);

		accy = 0;
		speedx = -2.4;
		health = 50;

		// set initial anim
		setAnimation(walk);
	}

	// TODO: if position is off screen left delete it

	public function hitWithShot():Void
	{
		this.health -=25;
		Scene.the.addProjectile(new Explosion(this.x, this.y));
		if(health == 0){
			Reg.totalbugs--;
			Scene.the.removeEnemy(this);
		}

	}
	
	override public function update():Void
	{
		super.update();
		if(!Player.get_alive()) speedx = -1.1;
	}
	
}