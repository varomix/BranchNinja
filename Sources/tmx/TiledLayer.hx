package tmx;

import haxe.xml.Fast;

class TiledLayer
{
	public var type:TiledLayerType;
	public var map:TiledMap;
	public var name:String;
	public var opacity:Float;
	public var visible:Bool;
	public var properties:TiledPropertySet;

	private function new(source:Fast, parent:TiledMap)
	{
		properties = new TiledPropertySet();
		map = parent;
		name = source.att.name;
		visible = (source.has.visible && source.att.visible == "0") ? false : true;
		opacity = (source.has.opacity) ? Std.parseFloat(source.att.opacity) : 1.0;
		
		loadProperties(source);
	}

	private function loadProperties(source:Fast):Void
	{
		for (node in source.nodes.properties)
		{
			properties.extend(node);
		}
	}

}

enum TiledLayerType
{
	TILE;
	OBJECT;
	IMAGE;
}