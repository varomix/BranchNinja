package kha.tiled.display;
import kha.Framebuffer;

interface Renderer {
	public function setTiledMap(map:TiledMap):Void;
	public function drawLayer(framebuffer : Framebuffer, layer:Layer):Void;
	public function drawImageLayer(framebuffer : Framebuffer, imageLayer:ImageLayer):Void;
	public function clear(framebuffer : Framebuffer):Void;
}