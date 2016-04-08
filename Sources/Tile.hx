package;

import kha.Image;
import kha2d.Rectangle;

class Tile {

	public var gid(default, null):Int;
	public var parent(default, null):Layer;
	public var width(get_width, null):Int;
	public var height(get_height, null):Int;

	private function new(gid:Int, parent:Layer) {
		this.gid = gid;
		this.parent = parent;
	}

	public static function fromGID(gid:Int, parent:Layer):Tile {
		return new Tile(gid, parent);
	}

	private function get_width():Int {
		return parent.parent.tileWidth;
	}

	private function get_height():Int {
		return parent.parent.tileHeight;
	}
}