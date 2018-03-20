<?php
$n = intval($_GET["n"]); 
echo "Os $n primeiros numeros naturais impares sao: <br>";
for($i = 0; $i < $n; $i++) echo 1 + $i*2, "<br>";
?>