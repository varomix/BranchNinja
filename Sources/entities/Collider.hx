
package entities;

import kha2d.Sprite;
import kha2d.Scene;
import kha.Assets;

class Collider extends Sprite {
	
	public function new(x:Int, y:Int, width:Int, height:Int)
	{
	    super(null, width, height);
	    this.x = x;
	    this.y = y + 16;
	    accy = 0;
	}

	override public function update():Void {
		super.update();
		if(Player.get_alive()) this.x -= Reg.gameSpeed;
	}
}