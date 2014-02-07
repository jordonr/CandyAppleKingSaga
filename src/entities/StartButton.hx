package entities;

import com.haxepunk.graphics.Image;

class StartButton extends BaseEntity
{
	private var speed:Float;
	private var img:Image;
	
	private static inline var imagePath:String = "graphics/start.png";
	
	public function new(x:Float, y:Float) {
		super(x, y);
		
		img = new Image(imagePath);
		graphic = img;
		
		setHitboxTo(img);
		
		type = "startLogo";
	}
	
	public override function update() {
		if(clickedOn()) {
			scenes.StartScene.startGame();
		}
		
		super.update();
	}
	
}
