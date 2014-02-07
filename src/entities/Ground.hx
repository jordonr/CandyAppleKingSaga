package entities;

import com.haxepunk.HXP;
import com.haxepunk.Entity;
import com.haxepunk.graphics.Image;

class Ground extends BaseEntity
{
	public function new(x:Int, y:Int) {
		super(x, y);
		
		graphic = new Image("graphics/grass.png");
		setHitboxTo(graphic);
		
		type="ground";
	}
	
	private function outOfBounds() {
		if(y > HXP.height) {
			scene.remove(this);
		}
	}
	
	public override function update() {
		outOfBounds();
		
		if(_age > 25) {
			moveBy(0,2);
		}
		
		super.update();
	}
}
