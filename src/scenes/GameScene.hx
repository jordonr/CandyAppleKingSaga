package scenes;

import com.haxepunk.Scene;
import com.haxepunk.HXP;
import com.haxepunk.graphics.Backdrop;
import com.haxepunk.graphics.Image;
import com.haxepunk.graphics.Text;

class GameScene extends Scene
{
	private var spawnCandyTime:Float;
	private var spawnGroundTime:Float;
	private var background:Backdrop;
    
	private static var _age:Float;
	private static var _score:Int;
	
	private static inline var defaultSpawnTime:Float = 2;
	private static inline var minPlatformSize:Float = 3;
	private static inline var maxPlatformSize:Float = 7; //Used for random, will add min to random answer

	public function new() {
		super();
		
		_age = 0;
		_score = 0;
		spawnCandyTime = spawnGroundTime = defaultSpawnTime;
		
		background = new Backdrop("graphics/background.png");
	}
	
	public override function begin() {
		super.begin();
		
		addGraphic(background);
		
		spawnFloor();
		spawnPlayer();
	}
	
	public override function update() {
		spawnCandyTime -= HXP.elapsed;
		spawnGroundTime -= HXP.elapsed;
		
		_age += HXP.elapsed;
		
		if(spawnGroundTime < 0) {
			spawnPlatform();
		}
		
		if(spawnCandyTime < 0.5) {
			spawnCandy();
		}
		
		super.update();
	}
	
	private function spawnPlayer() {
		add(new entities.Player(0, 0));
	}
	
	private function spawnFloor() {
		var numSquares:Int = Math.floor(HXP.width/16);
		for(i in 0...numSquares) {
			add(new entities.Ground(i*16, HXP.height-16));
		}
	}
	
	private function spawnPlatform() {
		var numSquares = Math.floor(Math.random()*maxPlatformSize) + minPlatformSize;
		var x = Math.floor(Math.random()*HXP.width);
		var y = Math.floor(Math.random()*HXP.height);
		
		if(collideRect("player",x,y,numSquares*32,32) == null) {
		
			for(i in 0...numSquares) {
				add(new entities.Ground(x+(i*16), y));
			}
			
			spawnGroundTime = defaultSpawnTime;
		}
	}
	
	private function spawnCandy() {
		var x = Math.floor(Math.random()*HXP.width);
		var y = Math.floor(Math.random()*HXP.height);
		
		if(collideRect("ground",x,y,35,35) == null) {
			add(new entities.Candy(x, y));
		}
		
		spawnCandyTime = defaultSpawnTime;
	}
	
	public static function addToScore(v:Int) {
		_score += v;
	}
	
	public static function getScore() {
		return _score;
	}
	
}
