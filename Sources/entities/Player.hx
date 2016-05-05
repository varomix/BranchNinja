package entities;

import kha.Assets;
import kha2d.Direction;
import kha2d.Animation;
import kha2d.Scene;
import kha2d.Sprite;
import kha.Scheduler;
import fx.*;
import kha.audio1.Audio;


class Player extends Sprite {
	private static var instance:Player;
	public static var health(default, null):Int;
	private var invincibility:Bool;

	// SETUP ANIMATIONS
	public var walk:Animation;
	public var jump:Animation;
	public var shoot:Animation;
	public var hitAnim:Animation;
	private static var alive:Bool;
	private static var commits:Int;


	public function new()
	{
		// we use super to import the image
		super(Assets.images.ninjaBlack, 36, 36);
		instance = this;

		// animation frames
		walk = Animation.createRange(12, 15, 5);
		hitAnim = Animation.createRange(24, 27, 5);
		jump = Animation.create(17);
		shoot = Animation.create(23);
		accy = 0;
		collider.width = 18;
		collider.x = 9;

		health = 100;
		alive = true;
		invincibility = false;
		visible = true;

		commits = 0;

		// set initial anim
		setAnimation(walk);
	}

	public function shot():Void
	{
		if(Player.get_alive()){
			Scene.the.addProjectile(new Shuriken(x, y + 10));
			setAnimation(shoot);
			Scheduler.addTimeTask(walkagain, 0.15);
		}
	}

	public function walkagain():Void
	{
	    setAnimation(walk);
	}

	public function move(dir:Direction):Void
	{
		if(Player.get_alive()){
			if(dir == Direction.UP && this.y > 36)
			{
				Scene.the.addProjectile(new Jumpfx(this.x, this.y));
				this.y -= 72;
				Audio.play(Assets.sounds.snd_jump);	
				
			}
			if(dir == Direction.DOWN && this.y < 252)
			{
				Scene.the.addProjectile(new Jumpfx(this.x, this.y));
				this.y += 72;
				Audio.play(Assets.sounds.snd_jump);	
			}
			
		}
	    
	}

	override public function hit(sprite:Sprite):Void
	{
		if(Std.is(sprite, Bug) && invincibility == false && alive){
			hurtPlayer(sprite);
		}
		if(Std.is(sprite, Bug2) && invincibility == false  && alive){
			hurtPlayer(sprite);
		}
		if(Std.is(sprite, Bug3) && invincibility == false && alive){
			hurtPlayer(sprite);
		}

		if(Std.is(sprite, Collider)){
			if(alive){
				Scene.the.addOther(new Deadfx(this.x - 55, this.y - 75));
				Scene.the.addOther(new Diefx(this.x, this.y));
				visible = false;
				Audio.play(Assets.sounds.snd_explosiondead);
				Scheduler.addTimeTask(function()Audio.play(Assets.sounds.snd_game_over), 0.2);
				
			}
			alive = false;
			// TODO: trigger animation
		}

		if(Std.is(sprite, Kraken)){
			Scene.the.addProjectile(new Pickupfx(sprite.x-12, sprite.y - 8));
			Scene.the.removeOther(sprite);
			commits++;
			Audio.play(Assets.sounds.snd_gold);	
			
		}
	}
	
	public function hurtPlayer(sprite:Sprite){
		invincibility = true;
		setAnimation(hitAnim);
		Scene.the.addOther(new Hitfx(this.x, this.y));
		Scheduler.addTimeTask(invincible, 1);
		health -= 25;
		Audio.play(Assets.sounds.snd_playerhit);	

		// check if still alive
		if(health <= 0)
		{
			Scene.the.addOther(new Deadfx(this.x - 55, this.y - 75));
			Scene.the.addOther(new Diefx(this.x, this.y));
			visible = false;
			alive = false;
			
		}
	}
	
	public function invincible():Void
	{
	    invincibility = false;
	    setAnimation(walk);
	}

	public static function get_alive():Bool
	{
	    return alive;
	}

	public function set_alive(state:Bool)
	{
	    alive = state;
	}
	
	public function resetcommits()
	{
		commits = 0;
	}

	public static function get_commits():Int
	{
	    return commits;
	}

	public static function get_health():Int
	{
		return health;	    
	}

	public function set_health(value:Int):Void
	{
		health = value;	    
	}

	public static function getInstance():Player
	{
		return instance;
	    
	}

	override public function update():Void {
		super.update();
	}
	
}
