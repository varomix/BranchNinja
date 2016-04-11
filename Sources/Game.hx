package;

import kha.Framebuffer;
import kha.Scheduler;
import kha.System;

class Game {
	public static var state:State;

	public function new() {
		System.notifyOnRender(render);
		Scheduler.addTimeTask(update, 0, 1 / 60);

		state = new Menu();
        // state.create();

	}

	function update(): Void {
		state.update();
	}

	function render(framebuffer: Framebuffer): Void {
		state.render(framebuffer);	
	}

	public static function switchState(newstate:State)
	{
		state.destroy();
		state = newstate;
		state.create();
	    
	}
}
