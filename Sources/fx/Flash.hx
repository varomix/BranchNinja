package fx;

import kha.graphics2.Graphics;
import kha.Color;

class Flash {
    public var visible:Bool;
    public function new(){
        visible = false;
    }
    
    public function render(graphics:Graphics){
       if(visible){
            graphics.color = Color.White;
            graphics.fillRect(0,0, 574, 326);
       }
    }
}