package;

import kha.Assets;
import kha.Framebuffer;
import kha.Key;
import kha.Scheduler;
import kha.System;
import kha.Sound;
import kha.audio1.Audio;
import kha.audio1.AudioChannel;
import kha.input.Mouse;
import kha.input.Keyboard;
import kha2d.Direction;
import kha2d.Scene;
import kha2d.Sprite;
import kha.Font;
import kha.Color;
import kha.Image;
import khatmx.TiledMap;
import khatmx.TiledObjectGroup;
import entities.*;
import fx.*;
import ui.*;

class BranchNinja {

	public var player:Player;
	public var bug:Bug;

	public var map:TiledMap;
	public var bitfont:Font;
	public var health:Health;

	var collider:Sprite;
	public var col:TiledObjectGroup;
	public var kraks:TiledObjectGroup;
	public var bugs1:TiledObjectGroup;
	public var bugs2:TiledObjectGroup;
	public var bugs3:TiledObjectGroup;
	public var exit:TiledObjectGroup;
	
	public var music:Sound;
	public var musicChannel:AudioChannel;
	public var playing:Bool;

	public function new() {

		System.notifyOnRender(render);
		Scheduler.addTimeTask(update, 0, 1 / 60);
		
		Assets.loadEverything(create);
		Assets.loadSoundFromPath("theme10.ogg", function(sound:Sound){
			music = sound;
		});
		playing = false;
		
		if(music != null)
			create();
	}
	
	public function create()
	{
		bitfont = Assets.fonts.fnt_bitlow;

		// CREATE GUI
		health = new Health(44, -2);
		Scene.the.addOther(health);

		// MAP LOADING
		// map = TiledMap.fromAssets(Assets.blobs.test01_tmx.toString());
		map = TiledMap.fromAssets(Assets.blobs.level1_tmx.toString());
		
		// entities
		player = new Player();

		initGame();
		
		if (Keyboard.get() != null) Keyboard.get().notify(keyDown, null);
		if (Mouse.get() != null) Mouse.get().notify(onMouseDown, null, null, null);

	}
	
	public function initGame():Void{
		musicChannel = Audio.stream(music, true);
		if(Player.get_alive())
			musicChannel.play();
			musicChannel.volume = 0.1;		// TODO:  not working
		
		Scene.the.addOther(health);
		Scene.the.setColissionMap(null);
		// music.play();

		col = map.getObjectGroupByName("floor");
		for(obj in col)
		{
			if(col == null) return;
			Scene.the.addEnemy(new Collider(obj.x, obj.y, obj.width, obj.height));
		}

		kraks = map.getObjectGroupByName("krakens");
		for (krk in kraks) {
			Scene.the.addOther(new Kraken(krk.x, krk.y));
		}
		
		bugs1 = map.getObjectGroupByName("bug1");
		// trace(bugs1.objects.length);
		for (bug in bugs1) {
			Scene.the.addEnemy(new Bug(bug.x, bug.y));
		}
		
		bugs2 = map.getObjectGroupByName("bug2");
		for (bug in bugs2) {
			Scene.the.addEnemy(new Bug2(bug.x, bug.y));
		}
		
		bugs3 = map.getObjectGroupByName("bug3");
		for (bug in bugs3) {
			Scene.the.addEnemy(new Bug3(bug.x, bug.y));
		}
		
		Reg.totalbugs = 0;
		Reg.totalbugs += bugs1.objects.length;
		Reg.totalbugs += bugs2.objects.length;
		Reg.totalbugs += bugs3.objects.length;
		

		player.x = 72;
		player.y = 36;
		Scene.the.addHero(player);
		playing = true;

	}

	public function resetGame()
	{
		this.map.camx = 0;	// reset cam
		player.x = 72;
		player.y = 36;
		player.set_health(100);
		player.set_alive(true);
		player.visible = true;
		player.resetcommits();
		Scene.the.removeOther(Diefx.getInstance());
		Scene.the.clear();
		initGame();
	}

	public function shot():Void
	{
		Scene.the.addProjectile(new Shuriken(0, 10)); 
	}

	public function update(): Void 
	{
		Scene.the.update();

		if(Player.get_alive())
		{
			this.map.camx -= Reg.gameSpeed;
			this.map.camy = 16;
		} 
	}
	
	public function deadstate():Void{
		if(playing = true){
			playing = false;
			trace("seems like I'm dead");
			musicChannel.stop();
			
		}
	}

	public function render(framebuffer: Framebuffer): Void {
		

		if(this.map == null) return;

		var g = framebuffer.g2;
		g.begin();
		g.color = Color.White;
		this.map.render(framebuffer);

		// DRAW HUD
		g.drawImage(Assets.images.blackFace, 0,0);
		g.font = bitfont;
		g.fontSize = 24;
		g.drawString("COMMITS:", 90, 5);
		g.drawString("BUGS:", 340, 5);
		g.color = Color.Pink;
		g.drawString(Std.string(Player.get_commits()), 205, 5);
		g.drawString(Std.string(Reg.totalbugs), 415, 5);

		// DRAW PLAY AGAIN
		if (!Player.get_alive()) {
			g.color = Color.Black;
			g.fillRect(0, 145, System.windowWidth(), 65);
			g.color = Color.Magenta;
			g.fontSize = 30;
			g.drawString("CLICK OR", 50, System.windowHeight() / 2 - 10);
			g.drawString("ENTER TO", 50, System.windowHeight() / 2 + 17);
			g.fontSize = 50;
			g.drawString("TRY AGAIN", 230, System.windowHeight() / 2 - 10);
			if(playing) deadstate();
		}
		// render scene on top
		Scene.the.render(g);
		g.end();

	}

	public function destroy()
	{
	    Scene.the.clear();
	    trace("DESTROY BRANCHNINJA");
	    player = null;
	    bug = null;
	    map = null;

	   	Keyboard.get().remove(keyDown, null);
		Mouse.get().remove(onMouseDown, null, null, null);

	}

	// shot
	private function keyDown(key: Key, char: String): Void {
		if (Player.getInstance() == null) return;
		switch (key) {
		case UP:
			Player.getInstance().move(Direction.UP);
		case DOWN:
			Player.getInstance().move(Direction.DOWN);
		case CTRL:
			Player.getInstance().shot();
		case ENTER:
			if(Player.get_alive() == false){
				resetGame();
			}
		default:
		}
	}

	public function onMouseDown(button:Int, x:Int, y:Int):Void {
		if (button == 0){
			if(Player.get_alive() == false){
				resetGame();
			}
		}
	}
}
