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
import kha2d.Direction;

import kha2d.Scene;
import kha2d.Tilemap;
import kha2d.Scene;

// import tmx.TmxEntity;

class Layer
{

    public var state:String;
    public var volume:Int;
    public var value:String;

    //And so on, listing all the fields from the XML attributes and values.

    public function new() { }
}

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
		// MAP LOADING
		
		var world = Assets.blobs.testMap_tmx;

		var xml:Xml = Xml.parse(world.toString());
		var fast:Fast = new Fast(xml.firstElement());
		
		var levels = new Array<Int>();

		for (child in fast.elements) {
			trace(child.name);
			if(child.name == "layer"){
				trace(child.node.data.innerData);
				levels.push(Std.parseInt(child.node.data.innerData));
			}
		}

		trace (levels[0]);
		var map = new Array<Array<Int>>();

		// for (i in 0 ... layerNodes.length) {
		// 	trace(layerNodes.pop().data);
		// }

		// position = 0;
		// var num = world.readU16LE(position); position += 2;
		// var types = new Array<Int>();
		// for (i in 0...num) { types.push(world.readU16LE(position)); position += 2; }
		// var data1 = new Array<Int>();
		// for (i in 0...num) { data1.push(world.readU16LE(position)); position += 2; }
		// var data2 = new Array<Int>();
		// for (i in 0...num) { data2.push(world.readU16LE(position)); position += 2; }
		// var data3 = new Array<Int>();
		// for (i in 0...num) { data3.push(world.readU16LE(position)); position += 2; }
		
		// Tile.tiles = new Array<kha2d.Tile>();
		// for (i in 0...num) {
		// 	Tile.tiles.push(new Tile(Assets.images.testMap, i, types[i], data1[i], data2[i], data3[i]));

		// }


		// entities
		player = new Player();
		bug = new Bug();

		// Scene.the.addBackgroundTilemap(tmxEntity); 

		bug.x = 450;
		bug.y = 36;

		Scene.the.setColissionMap(null);

		player.x = player.y = 36 + 72;
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
		// g.drawImage(Assets.images.bg, 0 ,0);
		g.drawImage(Assets.images.testMap, -300 ,16);
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
