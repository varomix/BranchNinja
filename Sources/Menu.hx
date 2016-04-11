package;

import kha.Assets;
import kha.Color;
import kha.Font;
import kha.Framebuffer;
import kha.Image;
import kha.Key;
import kha.System;
import kha.input.Keyboard;
import kha.Scheduler;
import kha.input.Mouse;

class Menu extends State {

	public var bitfont:Font;
	public var logo:Image;

	public function new():Void
	{
		super();
	 //    System.notifyOnRender(render);
		// Scheduler.addTimeTask(update, 0, 1 / 60);
		Assets.loadEverything(create);

	}

	override public function create():Void
	{

		super.create();
	    bitfont = Assets.fonts.bitlow;
	    logo = Assets.images.BranchNinja_LOGO_v01;

		if (Keyboard.get() != null) Keyboard.get().notify(keyDown, null);
		if (Mouse.get() != null) Mouse.get().notify(onMouseDown, null, null, null);
	}

	public function onMouseDown(button:Int, x:Int, y:Int):Void {
		if (button == 0){
			Game.switchState(new BranchNinja());
		}
	}

	private function keyDown(key: Key, char: String): Void {
		// switch (key) {
		// case ENTER, CTRL:
		// 	Game.switchState(new BranchNinja());
		// default:
		// }
	}

	override public function destroy()
	{
	    super.destroy();
	    trace("Destroying Menu");

	    Keyboard.get().remove(keyDown, null);
		Mouse.get().remove(onMouseDown, null, null, null);

	}

	override public function update():Void
	{
	    super.update();
	}

	override public function render(framebuffer:Framebuffer): Void {
		var g = framebuffer.g2;

		g.begin();
		g.font = bitfont;
		g.fontSize = 32;
		g.color = Color.Black;
		g.fillRect(0,0, System.windowWidth(), System.windowHeight());

		g.color = Color.White;
		g.drawString("CLICK TO PLAY", 160, 230);
		g.fontSize = 16;
		g.drawString("USE ARROWS TO JUMP UP AND DOWN, CTRL TO SHOOT", 50, 280);
		g.drawImage(logo, System.windowWidth() / 2 - logo.width/2, System.windowHeight() / 2 - logo.height/2 - 30);

		g.end();
	}
	
}
