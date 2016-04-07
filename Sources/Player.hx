package;

import kha.Assets;
import kha.graphics2.Graphics;
import kha2d.Direction;
import kha2d.Animation;
import kha2d.Scene;
import kha2d.Sprite;


class Player extends Sprite {
	private static var instance:Player;
	private var health:Int;
	private var invincibility:Int;

	// SETUP ANIMATIONS
	public var walk:Animation;
	public var jump:Animation;
	public var shoot:Animation;



	public function new()
	{
		// we use super to import the image
		super(Assets.images.ninjaBlack2, 36, 36);
		instance = this;

		// animation frames
		walk = Animation.createRange(12, 15, 5);
		jump = Animation.create(17);
		shoot = Animation.create(23);
		accy = 0;

		health = 100;

		// set initial anim
		setAnimation(walk);
	}

	public function shot():Void
	{
		Scene.the.addProjectile(new Shuriken(x, y + 10));
	}

	public function move(dir:Direction):Void
	{
		if(dir == Direction.UP && this.y > 36)
		{
			this.y -= 72;
		}
		if(dir == Direction.DOWN && this.y < 252)
		{
			this.y += 72;
		}
	    
	}

	override public function hit(sprite:Sprite):Void
	{
		if(Std.is(sprite, Bug) && collides){
			health -= 25;
			trace("Health: ", health);
		}

	}

	public static function getInstance():Player
	{
		return instance;
	    
	}

	override public function update():Void {
		super.update();
	}
	
}
