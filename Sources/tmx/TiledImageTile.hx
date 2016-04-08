package tmx;

import haxe.xml.Fast;

class TiledImageTile {
	public var id:String;
	public var width:Float;
	public var height:Float;
	public var source:String;
	
	public function new(Source:Fast)
	{
		for (img in Source.nodes.image)
		{
			width = Std.parseFloat( img.att.width);
			height = Std.parseFloat(img.att.height);
			source = img.att.source;
		}
	}
}