<?php
$n = intval($_GET["n"]);
if($n > 0){
  $maior = $_GET["elem$n"];
  $menor = $_GET["elem$n"];
  $n--;
}
while($n > 0){ 
  $x = intval($_GET["elem$n"]); 
  if($x > $maior) $maior = $x;
  else if($x < $menor) $menor = $x;
  $n--;
}
echo "Maior= $maior<br>";
echo "Menor= $menor<br>";
?>