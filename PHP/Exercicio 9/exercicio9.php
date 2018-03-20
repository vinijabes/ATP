<?php
$n = intval($_GET["n"]);
$i = intval($_GET["i"]);
$j = intval($_GET["j"]);

$numerosMultiplos = 0;

for($num = 0; $numerosMultiplos < $n; $num++){
  if($num % $i == 0){
    echo "$num,";
    $numerosMultiplos++;
  }else if($num % $j == 0){
    echo "$num,";
    $numerosMultiplos++;
  }
}
?>
