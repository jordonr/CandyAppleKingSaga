package entities;

import com.haxepunk.Entity;
import com.haxepunk.graphics.Spritemap;

class Candy extends BaseEntity
{
	private var candy:Spritemap;
	private var value:Int;

	private static inline var speed:Float = 5;
	private static inline var imagePath:String = "graphics/candysheet.png";
	
	public function new(x:Float, y:Float) {
		super(x, y);
		
		candy = new Spritemap(imagePath, 35, 35);
		candy.frame = Math.floor(Math.random()*93);
		
		graphic = candy;
		setHitboxTo(graphic);
		
		setValue();
		
		type = "candy";
	}
	
	public override function update() {
		
		super.update();
	}
	
	public override function removed() {
		scenes.GameScene.addToScore(value);
	}
	
	private function setValue() {
		if(candy.frame < 8) {
			value = 12;
		} else if(candy.frame < 11) {
			value = 100;
		} else if(candy.frame < 18) {
			value = 12;
		} else if(candy.frame < 21) {
			value = 35;
		} else if(candy.frame < 28) {
			value = 12;
		} else if(candy.frame < 37) {
			value = 10;
		} else if(candy.frame < 51) {
			value = 5;
		} else if(candy.frame < 59) {
			value = 12;
		} else {
			value = 5;
		}
	}
	
}
