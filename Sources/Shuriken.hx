package;

import kha.Assets;
import kha.graphics2.Graphics;

import kha2d.Sprite;
import kha2d.Animation;

class Shuriken extends Sprite{

	public function new():Void
	{
	    super(Assets.images.shuriken, 26, 26);

	    // set the image
	    this.image = Assets.images.shuriken;
	    
	    originX = 13;
	    originY = 13;	
	    accx = 15;
	    y = 10;

	}

	override public function update():Void {
		super.update();
		if(this.x > 580)
		{
			this.x = 0;
		}
		x += accx;
		angle += 0.2;
	}


	
}