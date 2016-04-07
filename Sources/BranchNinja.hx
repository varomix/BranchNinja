package;

import kha.Framebuffer;
import kha.Scheduler;
import kha.System;
import kha.Assets;
import kha.math.Vector2;
import kha.Color;
import kha.Key;
import kha.input.Keyboard;
import kha2d.Direction;

import kha2d.Scene;
import kha2d.Tilemap;
import kha2d.Scene;




class BranchNinja {

	public var player:Player;
	public var bug:Bug;

	public function new() {
		Assets.loadEverything(create);
		System.notifyOnRender(render);
		Scheduler.addTimeTask(update, 0, 1 / 60);

	}

	private function create()
	{
		player = new Player();
		bug = new Bug();

		bug.x = 450;
		bug.y = 36;

		Scene.the.setColissionMap(null);

		player.x = player.y = 36;
		Scene.the.addHero(player);
		Scene.the.addEnemy(bug);

		if (Keyboard.get() != null) Keyboard.get().notify(keyDown, null);


	}

	public function shot():Void
	{
		Scene.the.addProjectile(new Shuriken(0, 10)); 
	}

	function update(): Void {
		Scene.the.update();	
	}

	function render(framebuffer: Framebuffer): Void {
		var g = framebuffer.g2;
		g.begin();
		Scene.the.render(g);
		g.end();

	}

	// shot
	private function keyDown(key: Key, char: String): Void {
		if (Player.getInstance() == null) return;
		switch (key) {
		case UP:
			Player.getInstance().move(Direction.UP);
		case DOWN:
			Player.getInstance().move(Direction.DOWN);
		case CTRL:
			Player.getInstance().shot();
		default:
		}
	}
}
