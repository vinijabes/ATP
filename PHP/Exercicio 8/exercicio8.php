<?php
$n = intval($_GET["n"]);
$fatorial = $n;
for($i = 1; $i < $n; $i++) $fatorial *= ($n - $i);
echo "O fatorial de $n equivale a $fatorial";
?>