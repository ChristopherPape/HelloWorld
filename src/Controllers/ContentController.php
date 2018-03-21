<?php

namespace HelloWorld\Controller;


use Plenty\Plugin\Controller;
use Plenty\Plugin\Templates\Twig;

class ContentController extends Controller{


    public function sayHello(Twig $twig):string{

        return $twig->render('HelloWorld::content.hello');
        #return $twig->render('HelloWorld::TEMPLATE');


    }

}

?>