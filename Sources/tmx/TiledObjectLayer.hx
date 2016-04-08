package tmx;

import tmx.TiledLayer.TiledLayerType;
import kha.Color;
import haxe.xml.Fast;

/**
 * Copyright (c) 2013 by Samuel Batista
 * (original by Matt Tuttle based on Thomas Jahn's. Haxe port by Adrien Fischer)
 * This content is released under the MIT License.
 */
class TiledObjectLayer extends TiledLayer
{
	public var objects:Array<TiledObject>;
	public var color:Color;
	
	public function new(source:Fast, parent:TiledMap)
	{
		super(source, parent);
		type = TiledLayerType.OBJECT;
		objects = new Array<TiledObject>();
		color = source.has.color ? Color.fromString(source.att.color) : null;
		loadObjects(source);
	}
	
	private function loadObjects(source:Fast):Void
	{
		for (node in source.nodes.object)
		{
			objects.push(new TiledObject(node, this));
		}
	}
}