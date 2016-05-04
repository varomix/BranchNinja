package;

import kha.Assets;
import kha.Color;
import kha.Font;
import kha.Framebuffer;
import kha.Image;
import kha.audio1.Audio;
import kha.Key;
import kha.System;
import kha.input.Keyboard;
import kha.Scheduler;
import kha.input.Mouse;
import entities.Introshuriken;
import fx.Flash;

import tweenx909.TweenX;
import tweenx909.EaseX;

class Menu {

	public var bitfont:Font;
	public var logo:Image;
	public var shuriken:Introshuriken;
	public var shurikenImg:Image;
	public var flash:Flash;
	
	public function new():Void
	{
		System.notifyOnRender(render);
		Scheduler.addTimeTask(update, 0, 1 / 60);
		Assets.loadEverything(create);
		

	}
	
	public function create()
	{
		
						
		// trace('creating');
		bitfont = Assets.fonts.fnt_bitlow;
	    logo = Assets.images.BranchNinja_LOGO_v01;
		shurikenImg = Assets.images.shurikenIntro;
		shuriken = new Introshuriken(-400, 0, shurikenImg);
		flash = new Flash();

		if (Keyboard.get() != null) Keyboard.get().notify(keyDown, null);
		if (Mouse.get() != null) Mouse.get().notify(onMouseDown, null, null, null);
	}
	
	public function destroy():Void
	{
		bitfont = null;
		logo = null;
		shurikenImg = null;
		shuriken = null;
		flash = null;
		
		Keyboard.get().remove(keyDown, null);
		Mouse.get().remove(onMouseDown, null, null, null);
	}

	public function onMouseDown(button:Int, x:Int, y:Int):Void {
		if (button == 0){
			// TODO: shuriken sound
			Audio.play(Assets.sounds.snd_wooshintro);	
			
			flash.visible = true;
			Scheduler.addTimeTask(function()flash.visible = false, 0.1);
			
			
			
			TweenX.to(shuriken, {x:340, y:20}).time(0.1).ease(EaseX.linear);
			Scheduler.addTimeTask(startGame, 2);
		}
	}
	
	public function startGame():Void{
		destroy();
		new BranchNinja();
	}

	private function keyDown(key: Key, char: String): Void {
		switch (key) {
		case ENTER:
			destroy();
			new BranchNinja();
		default:
		}
	}

	public function update():Void
	{
		
	}

	public function render(framebuffer:Framebuffer): Void {
		// super.render(framebuffer);
		// trace(bitfont);
		if(bitfont == null) return;
		
		var g = framebuffer.g2;

		g.begin();
		g.font = bitfont;
		// g.font = Assets.fonts.bitlow;
		g.fontSize = 32;
		g.color = Color.Black;
		g.fillRect(0,0, System.windowWidth(), System.windowHeight());

		g.color = Color.White;
		g.drawString("CLICK OR ENTER TO PLAY", 80, 230);
		g.fontSize = 16;
		g.drawString("USE ARROWS TO JUMP UP AND DOWN, CTRL TO SHOOT", 65, 280);
		g.drawImage(logo, System.windowWidth() / 2 - logo.width/2, System.windowHeight() / 2 - logo.height/2 - 30);

		flash.render(g);
		g.end();
		shuriken.render(framebuffer);
	}
	
}
