package entities;

import com.haxepunk.graphics.Spritemap;

class SoundButton extends BaseEntity
{
	private var speed:Float;
	private var img:Spritemap;
	
	private static inline var imagePath:String = "graphics/sndonoff3.png";
	
	public function new(x:Float, y:Float) {
		super(x, y);
		
		img = new Spritemap(imagePath, 67, 67);
		img.frame = scenes.GameScene.getSoundOff();
		graphic = img;
		
		setHitboxTo(img);
		
		type = "startLogo";
	}
	
	public override function update() {
		if(clickedOn()) {
			if(img.frame == 0) {
				img.frame = 1;
			} else {
				img.frame = 0;
			}
			scenes.GameScene.toggleSound();
		}

		super.update();
	}
	
}
