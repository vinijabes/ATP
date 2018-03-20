<?php
$n = intval($_GET["n"]); 
$aux = $n;
$soma = 0;
for(;$n >= 0; $n--) $soma += $n;
echo "A soma dos inteiros contidos no intervalo [0, $aux] = $soma";
?>