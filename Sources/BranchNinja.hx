package;

import haxe.xml.Fast;
import kha.Framebuffer;
import kha.Scheduler;
import kha.System;
import kha.Assets;
import kha.math.Vector2;
import kha.Color;
import kha.Key;
import kha.input.Keyboard;
import kha.tiled.display.KhaRenderer;
import kha2d.Direction;

import kha2d.Scene;
import kha2d.Tilemap;
import kha2d.Scene;
import kha2d.Sprite;

import kha.tiled.TiledMap;

class BranchNinja {

	public var player:Player;
	public var bug:Bug;

	public var map:TiledMap;
	public var worldSpeed:Int = 2;

	var collider:Sprite;

	public function new() {
		System.notifyOnRender(render);
		Scheduler.addTimeTask(update, 0, 1 / 60);
		Assets.loadEverything(create);

	}

	private function create()
	{

		// CREATE GUI
		var health = new Health(System.windowWidth() / 2, 4);
		Scene.the.addOther(health);



		// MAP LOADING
		// map = TiledMap.fromAssets(Assets.blobs.test01_tmx.toString());
		map = TiledMap.fromAssets(Assets.blobs.testMap_tmx.toString());

		// trace(map.layers[1].tiles[0].gid);
		// trace(map.getObjectGroupByName("collisions"));


		// build the Kha2D map
		var backmap = new Array<Array<Int>>();

		// for (y in 0...map.heightInTiles) for (x in 0...map.widthInTiles) {backmap[x][y] = this.map.layers[0].tiles[x].gid; }

		// trace(backmap);	
		
		
		// testing kha2d tilemaps
		// var backtilemap : Tilemap = new Tilemap(Assets.images.mapTiles_colors, 36, 36, backmap, Tile.tiles);
		// var tilemap : Tilemap = new Tilemap(Assets.images.mapTiles_colors, 36, 36, map, Tile.tiles);
		

		// entities
		player = new Player();
		bug = new Bug();

		// Scene.the.addBackgroundTilemap(tmxEntity); 

		bug.x = 450;
		bug.y = 36;

		Scene.the.setColissionMap(null);

		var col = map.getObjectGroupByName("collisions");
		for(obj in col)
		{
			Scene.the.addEnemy(new Collider(obj.x, obj.y, obj.width, obj.height));
		}

		var kraks = map.getObjectGroupByName("krakens");
		trace(kraks.objects.length);
		for (krk in kraks) {
			Scene.the.addOther(new Kraken(krk.x, krk.y));
		}


		player.x = player.y = 36 + 72;
		Scene.the.addHero(player);
		Scene.the.addEnemy(bug);


		
		if (Keyboard.get() != null) Keyboard.get().notify(keyDown, null);


	}

	public function shot():Void
	{
		Scene.the.addProjectile(new Shuriken(0, 10)); 
	}

	function update(): Void 
	{
		Scene.the.update();

		
	}

	function render(framebuffer: Framebuffer): Void {
		if(this.map == null) return;
		if(Player.get_alive())
		{
			this.map.camx -= worldSpeed;
			this.map.camy = 16;
		}

		// collider.x -= worldSpeed;
		
		
		var g = framebuffer.g2;
		g.begin();
		this.map.render(framebuffer);
		Scene.the.render(g);

		g.drawImage(Assets.images.blackFace, 576-38,0);

		g.end();

// 
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
