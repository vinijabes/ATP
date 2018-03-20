<?php
$n = intval($_GET["n"]);
$SomaPares = 0;
$SomaImpares = 0;
$QuantidadePares = 0;
$QuantidadeImpares = 0;

for($i = 1; $i <= $n; $i++){
  if($i%2 == 0){
    $SomaPares += $i;
    $QuantidadePares++;
  }else{
    $SomaImpares += $i;
    $QuantidadeImpares++;
  }
}

echo "A soma dos $QuantidadePares números pares equivale a $SomaPares<br>";
echo "A soma dos $QuantidadeImpares números impares equivale a $SomaImpares<br>";
?>