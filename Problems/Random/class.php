<?php
class SimpleClass{
	public $var;
	public function display($c){
		$this->var = $c;
		echo $this->var;
	}
}

$a = new SimpleClass();
$a->display(4);

?>
