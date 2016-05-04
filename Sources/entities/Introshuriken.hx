package entities;

import kha.Framebuffer;
import kha.Image;
import kha.Color;

class Introshuriken {
    
    public var x:Int;
    public var y:Int;
    public var shuriken:Image;
    
    public function new(x:Int, y:Int, img:Image){
        this.x = x;
        this.y = y;
        shuriken = img;
    }
    
    public function render(framebuffer:Framebuffer){
        var g = framebuffer.g2;
        g.begin(false);
        g.drawImage(shuriken, x, y);
        g.end();
    }
}