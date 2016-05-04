package ui;

import kha.Assets;
import kha2d.Animation;
import kha2d.Scene;
import kha2d.Sprite;
import entities.*;

class Health extends Sprite {
	// SETUP ANIMATIONS
	public var full:Animation;
	public var threequaters:Animation;
	public var half:Animation;
	public var almostdead:Animation;
	public var dead:Animation;

	public function new(x:Float, y:Float)
	{
		// we use super to import the image
		super(Assets.images.health, 36, 36, 0);
		this.x = x;
		this.y = y;

		accy = 0;
		z = 4;

		// animation frames
		full = Animation.create(0);
		threequaters = Animation.create(1);
		half = Animation.create(2);
		almostdead = Animation.create(3);
		dead = Animation.create(4);

		// set initial anim
		setAnimation(full);

	}

	override public function update():Void {
		super.update();
		if(Player.get_health() == 100)
		{
			setAnimation(full);
		}
		else if(Player.get_health() == 75)
		{
			setAnimation(threequaters);
		}
		else if(Player.get_health() == 50)
		{
			setAnimation(half);
		}
		else if(Player.get_health() == 25)
		{
			setAnimation(almostdead);
		}
		else if(Player.get_health() == 0)
		{
			setAnimation(dead);
		}
	}
	
}