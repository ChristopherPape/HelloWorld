<?hh //strict

/**
 * Created by IntelliJ IDEA.
 * User: charms-ensink
 * Date: 06.07.16
 * Time: 09:22
 */

namespace HalloWelt\Providers;


use Plenty\Plugin\RouteServiceProvider;
use Plenty\Plugin\Routing\Router;

class HalloWeltRouteServiceProvider extends RouteServiceProvider
{
	public function map(Router $router):void
	{
		$router->get('hallo', 'HalloWelt\Controllers\ContentController@sayHello');
		$router->get('{int1}/{int2}', 'HalloWelt\Controllers\ContentController@add');
	}
}