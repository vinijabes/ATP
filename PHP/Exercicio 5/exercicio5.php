<?php
$x = intval($_GET["x"]);
$n = intval($_GET["n"]);
$resultado = 0;
if($n > 0){
  $resultado = $x;
  $aux = $n;
  while($aux-- > 1) $resultado*= $x;
}

echo "$x elevado a $n equivale a $resultado";
?>