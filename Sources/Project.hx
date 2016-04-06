package;

import kha.Framebuffer;
import kha.Scheduler;
import kha.System;
import kha.Assets;
import kha.math.Vector2;

import kha2d.Scene;



class Project {

	public var player:Player;
	public var shuriken:Shuriken;
	public var explosion:Explosion;
	public var bug:Bug;

	public function new() {
		Assets.loadEverything(create);
		System.notifyOnRender(render);
		Scheduler.addTimeTask(update, 0, 1 / 60);

	}

	private function create()
	{
		player = new Player();
		shuriken = new Shuriken();
		explosion = new Explosion();
		bug = new Bug();

		bug.x = 350;
		explosion.x = 200;


		Scene.the.addHero(player);
		Scene.the.addEnemy(bug);
		Scene.the.addOther(explosion);
		Scene.the.addProjectile(shuriken);


	}

	function update(): Void {
		Scene.the.update();	
		// trace(shuriken.width);
	}

	function render(framebuffer: Framebuffer): Void {
		var g = framebuffer.g2;
		g.begin();
		Scene.the.render(g);
		g.end();

	}
}
