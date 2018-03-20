<?php
$n = intval($_GET["n"]);
$soma = 0;
$i = $n;
while($i > 0){ $soma += intval($_GET["temp$i"]); $i--;}
$media = $soma/$n;
echo "A média equivale a: $media";
?>