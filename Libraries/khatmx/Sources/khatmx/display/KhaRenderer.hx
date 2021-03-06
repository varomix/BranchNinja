package khatmx.display;

import kha.Framebuffer;
import khatmx.Rectangle;
import khatmx.Layer;
import khatmx.TiledMap;
import khatmx.Tileset;
import kha.graphics2.Graphics;

/**
 * ...
 * @author Christoph Otter
 */
class KhaRenderer implements Renderer
{
	
	private var map : TiledMap;
	
	public function new()
	{
		
	}
	
	public function setTiledMap(map : TiledMap):Void
	{
		this.map = map;
	}
	
	public function drawLayer(framebuffer:Framebuffer, layer:Layer):Void
	{
		var gidCounter:Int = 0;
		if (layer.visible) {
			for (y in 0...map.heightInTiles) {
				for (x in 0...map.widthInTiles) {

					var nextGID = layer.tiles[gidCounter].gid;

					if (nextGID != 0) {
						var destx : Float;
						var desty : Float;

						switch (map.orientation) {
							case TiledMapOrientation.Orthogonal:
								destx = (x * map.tileWidth) + map.screenOffsetX;
								desty = (y * map.tileHeight) + map.screenOffsetY;
							case TiledMapOrientation.Isometric:
								destx = (map.totalWidth + x - y - 1) * map.tileWidth * 0.5; //TODO: test
								desty = (y + x) * map.tileHeight * 0.5;
						}

						var tileset : Tileset = map.getTilesetByGID(nextGID);

						var rect : Rectangle = tileset.getTileRectByGID(nextGID);

						if(map.orientation == TiledMapOrientation.Isometric) { //Why?
							destx += map.totalWidth/2;
						}

						// draw
						framebuffer.g2.drawScaledSubImage(tileset.image.texture, rect.x, rect.y, rect.width, rect.height, destx, desty, map.tileWidth, map.tileHeight);
						//bitmapData.copyPixels(tileset.image.texture, rect, point, null, null, true);
					}
					
					gidCounter++;
				}
			}
		}
	}
	
	public function drawImageLayer(framebuffer : Framebuffer, imageLayer : ImageLayer):Void
	{
		framebuffer.g2.drawImage(imageLayer.image.texture, 0, 0);
	}
	
	public function clear(framebuffer : Framebuffer):Void
	{
		
	}
	
}