package entities;

import com.haxepunk.HXP;
import com.haxepunk.Entity;
import com.haxepunk.graphics.Spritemap;
import com.haxepunk.utils.Input;
import com.haxepunk.utils.Key;
import flash.geom.Point;

class Player extends BaseEntity
{
	
	private var xAcceleration:Float;
	private var yAcceleration:Float;
	private var climb:Int;
	private var gravity:Point;
	private var sprite:Spritemap;
	private var velocity:Point;
	private var jump:Int;
	private var onGround:Bool;
	
	private static inline var jumpForce:Float = 5;
	
	public function new(x:Int, y:Int) {
		super(x, y);
		
		sprite = new Spritemap("graphics/King.png", 16, 16);
		
		sprite.add("idle", [1]);
		sprite.add("walk", [4,5,], 12);
		
		sprite.play("idle");
		graphic = sprite;
		setHitboxTo(graphic);
		
		Input.define("left", [Key.LEFT, Key.A]);
		Input.define("right", [Key.RIGHT, Key.D]);
		Input.define("jump", [Key.UP, Key.W]);
		
		velocity = new Point();
		gravity = new Point();
		velocity.x = 0;
		gravity.y = 1;
		jump = 0;
		onGround = false;
		xAcceleration = 0;
		
		type = "player";
	}
	
	private function handleInput() {
		
		
		if(onGround) {
			xAcceleration = 0;
			
			if(Input.check("left")) {
				xAcceleration = -1;
			}
			if(Input.check("right")) {
				xAcceleration = 1;
			}
		}
			
		if(Input.check("jump")) {
			jump = 1;
		} else {
			jump = 0;
		}
	}
	
	private function setAnimations() {
		if(velocity.x == 0) {
			sprite.play("idle");
		} else {
			sprite.play("walk");
			
			if (velocity.x < 0) {
				sprite.flipped = true;
			} else {
				sprite.flipped = false;
			}
		}
	}
	
	private function move() {
		velocity.x += xAcceleration;
		
		if(Math.abs(velocity.x) > 5) {
			velocity.x = 5 * HXP.sign(velocity.x);
		}
		
		if(velocity.x < 0) {
			velocity.x = Math.min(velocity.x + 0.4,0);
		} else if(velocity.x > 0) {
			velocity.x = Math.max(velocity.x - 0.4,0);
		}
		
		if(jump == 1) {
			doJump();
		} else {
			fall();
		}
		
		moveBy(velocity.x, velocity.y, ["candy","ground"]);
	}
	
	private function outOfBounds() {
		if(x < 0 || x > HXP.width || y > HXP.width) {
			HXP.scene = new scenes.EndScene();
		}
	}
	
	private function doJump() {
		if(onGround) {
			velocity.y = -HXP.sign(y) * jumpForce;
			onGround = false;
		}
	}
	
	private function fall() {
		if(onGround) {
			velocity.y = 2;
		} else {
			velocity.y += gravity.y;
		}
	}
	
	private function handleCandy(e:Entity) {
		scene.remove(e);
	}
	
	public override function moveCollideY(e:Entity):Bool {
		if(e.type == "candy") {
			handleCandy(e);
		}
		
		if(e.type == "ground") {
			onGround = true;
		}
		
		return true;
	}
	
	public override function moveCollideX(e:Entity):Bool {
		if(e.type == "candy") {
			handleCandy(e);
		}
		
		return true;
	}
	
	public override function update() {
		outOfBounds();
		handleInput();
		move();
		setAnimations();
		
		super.update();
	}
}
