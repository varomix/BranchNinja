package;

import kha.Assets;
import kha.Framebuffer;
import kha.Key;
import kha.Scheduler;
import kha.System;
import kha.input.Mouse;
import kha.input.Keyboard;
import kha.tiled.TiledMap;
import kha2d.Direction;
import kha2d.Scene;
import kha2d.Sprite;
import kha.Font;
import kha.Color;
import kha.tiled.TiledObjectGroup;

class BranchNinja {

	public var player:Player;
	public var bug:Bug;

	public var map:TiledMap;
	public var worldSpeed:Int;
	public var bitfont:Font;
	public var health:Health;

	var collider:Sprite;
	public var col:TiledObjectGroup;
	public var kraks:TiledObjectGroup;

	public function new() {

		System.notifyOnRender(render);
		Scheduler.addTimeTask(update, 0, 1 / 60);
		Assets.loadEverything(create);

	}

	private function create()
	{
		worldSpeed = 2;
		bitfont = Assets.fonts.bitlow;

		// CREATE GUI
		health = new Health(44, -2);
		Scene.the.addOther(health);

		// MAP LOADING
		// map = TiledMap.fromAssets(Assets.blobs.test01_tmx.toString());
		map = TiledMap.fromAssets(Assets.blobs.testMap_tmx.toString());

		// trace(map.layers[1].tiles[0].gid);
		// trace(map.getObjectGroupByName("collisions"));


		// build the Kha2D map
		// var backmap = new Array<Array<Int>>();

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

		Reg.totalbugs = 300;

		Scene.the.setColissionMap(null);

		col = map.getObjectGroupByName("collisions");
		for(obj in col)
		{
			Scene.the.addEnemy(new Collider(obj.x, obj.y, obj.width, obj.height));
		}

		kraks = map.getObjectGroupByName("krakens");
		for (krk in kraks) {
			Scene.the.addOther(new Kraken(krk.x, krk.y));
		}


		player.x = player.y = 36 + 72;
		Scene.the.addHero(player);
		Scene.the.addEnemy(bug);

		if (Keyboard.get() != null) Keyboard.get().notify(keyDown, null);
		if (Mouse.get() != null) Mouse.get().notify(onMouseDown, null, null, null);

	}

	public function shot():Void
	{
		Scene.the.addProjectile(new Shuriken(0, 10)); 
	}

	function update(): Void 
	{
		Scene.the.update();

		if(Player.get_alive())
		{
			this.map.camx -= worldSpeed;
			this.map.camy = 16;
		}
		
	}

	function render(framebuffer: Framebuffer): Void {
		if(this.map == null) return;

		var g = framebuffer.g2;
		g.begin();
		g.color = Color.White;
		this.map.render(framebuffer);

		// DRAW HUD
		g.drawImage(Assets.images.blackFace, 0,0);
		g.font = bitfont;
		g.fontSize = 24;
		g.drawString("COMMITS:", 90, 5);
		g.drawString("BUGS:", 340, 5);
		g.color = Color.Pink;
		g.drawString(Std.string(Player.get_commits()), 205, 5);
		g.drawString(Std.string(Reg.totalbugs), 415, 5);

		// DRAW PLAY AGAIN
		if (!Player.get_alive()) {
			g.color = Color.Black;
			g.fillRect(0, 145, System.windowWidth(), 65);
			g.fontSize = 50;
			g.color = Color.Magenta;
			g.drawString("CLICK TO TRY AGAIN", 30, System.windowHeight() / 2 - 10);
		}
		// render scene on top
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
		case ENTER:
			trace("enter again");
		default:
		}
	}

	public function onMouseDown(button:Int, x:Int, y:Int):Void {
		if (button == 0){
			if(Player.get_alive() == false){
				// new Reset();
				player = null;
				bug.x = 0;
				bug = null;
				Scene.the.clear();
				health = null;
				map = null;
				Keyboard.get().notify(null, null);
				new BranchNinja();
			}
		}
	}
}
