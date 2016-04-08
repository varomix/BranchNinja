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




class BranchNinja {

	public var player:Player;
	public var bug:Bug;

	/** The map width in tiles */
	public var widthInTiles(default, null):Int;

	/** The map height in tiles */
	public var heightInTiles(default, null):Int;

	/** The map width in pixels */
	public var totalWidth(default, null):Int;

	/** The map height in pixels */
	public var totalHeight(default, null):Int;

	/** TILED orientation: Orthogonal or Isometric */
	// public var orientation(default, null):TiledMapOrientation;

	/** The tile width */
	public var tileWidth(default, null):Int;

	/** The tile height */
	public var tileHeight(default, null):Int;

	/** The background color of the map */
	public var backgroundColor(default, null):UInt;

	/** All tilesets the map is using */
	// public var tilesets(default, null):Array<Tileset>;

	/** Contains all layers from this map */
	public var layers(default, null):Array<Layer>;

	/** All objectgroups */
	// public var objectGroups(default, null):Array<TiledObjectGroup>;

	/** All image layers **/
	// public var imageLayers(default, null):Array<ImageLayer>;

	/** All map properties */
	public var properties(default, null):Map<String, String>;


	public function new() {
		Assets.loadEverything(create);
		System.notifyOnRender(render);
		Scheduler.addTimeTask(update, 0, 1 / 60);

	}

	private function create()
	{
		// MAP LOADING
		
		var world = Assets.blobs.testMap_tmx;
		parseXml(world.toString());

		var xml:Xml = Xml.parse(world.toString());
		var fast:Fast = new Fast(xml.firstElement());
		
		var levels = new Array<Int>();

		for (child in fast.elements) {
			trace(child.name);
			if(child.name == "layer"){
				// trace(child.node.data.innerData.split(","));
				// for (i in child.node.data.innerData.split(",")) {
				// 	trace (child.node.data.innerData[i]);
				// }
			}
		}

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

	public function parseXml(xml:String)
	{
	    var xml = Xml.parse(xml).firstElement();
	    trace(xml);

		trace(Std.parseInt(xml.get("width")));
		// this.widthInTiles = Std.parseInt(xml.get("width"));
		// this.heightInTiles = Std.parseInt(xml.get("height"));
		// this.orientation = xml.get("orientation") == "orthogonal" ?
		// 	TiledMapOrientation.Orthogonal : TiledMapOrientation.Isometric;
		// this.tileWidth = Std.parseInt(xml.get("tilewidth"));
		// this.tileHeight = Std.parseInt(xml.get("tileheight"));
		// this.tilesets = new Array<Tileset>();
		// this.layers = new Array<Layer>();
		// this.objectGroups = new Array<TiledObjectGroup>();
		// this.imageLayers = new Array<ImageLayer>();
		// this.properties = new Map<String, String>();
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
