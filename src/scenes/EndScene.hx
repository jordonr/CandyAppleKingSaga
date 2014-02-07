package scenes;

import com.haxepunk.Scene;
import com.haxepunk.HXP;
import com.haxepunk.Entity;
import com.haxepunk.graphics.Text;
import com.haxepunk.utils.Input;
import com.haxepunk.utils.Key;

class EndScene extends Scene
{
	private var restartButton:Entity;
	
	public function new() {
		super();
		restartButton = new entities.RestartButton(0,0);
	}
	
	public override function begin()
	{
		var line1 = new Text("You Scored");
		var line2 = new Text("" + GameScene.getScore());
		var line3 = new Text("(Press Enter to Restart)");
		
		line1.size = 58;
		line2.size = 72;
		line3.size = 12;
		
		line1.x = HXP.halfWidth - line1.textWidth/2;
		line1.y = HXP.halfHeight - line1.textHeight*3;
		
		line2.x = HXP.halfWidth - line2.textWidth/2;
		line2.y = HXP.halfHeight - line2.textHeight*1.5 + line1.textHeight;
		
		restartButton.x = HXP.halfWidth - restartButton.halfWidth;
		restartButton.y = HXP.halfHeight - restartButton.halfHeight  + line1.textHeight + line2.textHeight;
		
		line3.x = HXP.halfWidth - line3.textWidth/2;
		line3.y = HXP.halfHeight - line3.textHeight*1.5 + line1.textHeight + line2.textHeight + restartButton.height;
				
		addGraphic(line1);
		addGraphic(line2);
		add(restartButton);
		addGraphic(line3);
		
		super.begin();
	}
	
	public override function update() {
		if(Input.check(Key.ENTER)) {
			HXP.scene = new scenes.GameScene();
		}
		
		super.update();
	}
}
