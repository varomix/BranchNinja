package entities;

import kha2d.Sprite;
import kha2d.Scene;
import kha.Assets;

class Kraken extends Sprite {
	
	public function new(x:Int, y:Int)
	{
	    super(Assets.images.pixelKraken, 30, 23);
	    this.x = x;
	    this.y = y - 7;
	    accy = 0;
	} 

	override public function update():Void {
		super.update();
		if(Player.get_alive())
		this.x -= 2;
	}
}