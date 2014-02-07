package scenes;

import com.haxepunk.Scene;
import com.haxepunk.HXP;
import com.haxepunk.Entity;
import com.haxepunk.graphics.Backdrop;
import com.haxepunk.graphics.Image;
import com.haxepunk.graphics.Text;

class StartScene extends Scene
{
	private var background:Backdrop;
	private var startButton:Entity;
	
	public function new() {
		super();
		background = new Backdrop("graphics/background.png");
		startButton = new entities.StartButton(0,0);
	}
	
	public override function begin() {
		super.begin();
		
		startButton.x = HXP.halfWidth - startButton.halfWidth;
		startButton.y = HXP.halfHeight - startButton.halfHeight;
		
		addGraphic(background);
		add(startButton);
		
	}
	
	public override function update() {
		super.update();
	}
	
	public static function startGame() {
		HXP.scene = new scenes.GameScene();
	}
}
