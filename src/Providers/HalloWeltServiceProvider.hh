<?hh //strict

/**
 * Created by IntelliJ IDEA.
 * User: charms-ensink
 * Date: 06.07.16
 * Time: 09:16
 */

namespace HalloWelt\Providers;


use Plenty\Plugin\ServiceProvider;

class HalloWeltServiceProvider extends ServiceProvider
{

	/**
	 * Register the service provider.
	 */
	public function register():void
	{
		$this->getApplication()->register(HalloWeltRouteServiceProvider::class); // == "HalloWelt\Providers\HalloWeltRouteServiceProvider"
	}
}