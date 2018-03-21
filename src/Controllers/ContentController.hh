<?hh //strict

/**
 * Created by IntelliJ IDEA.
 * User: charms-ensink
 * Date: 06.07.16
 * Time: 09:30
 */

namespace HalloWelt\Controllers;


use HalloWelt\MatheKlasse;
use Plenty\Plugin\Controller;
use Plenty\Plugin\Templates\Twig;

class ContentController extends Controller
{
	public function sayHello(Twig $twig):string
	{
		return $twig->render('HalloWelt::content.hallo');
	}
	
	public function add(int $a, int $b):int
	{
		$erg = MatheKlasse::add($a, $b);
		
		return $erg;
	}
}