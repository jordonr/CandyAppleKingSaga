import com.haxepunk.Engine;
import com.haxepunk.HXP;

class Main extends Engine
{

	override public function init()
	{
#if debug
		HXP.console.enable();
#end
		//HXP.scene = new MainScene();
		//HXP.scene = new scenes.GameScene();
		HXP.scene = new scenes.StartScene();
	}

	public static function main() { new Main(); }

}
