<?php
$p = intval($_GET["p"]);
$raiz = (int) sqrt($p) + 1;

$primo = 1;

if($p%2 == 0) $primo = 0;
if($p == 2) $primo = 1;
if($p > 1){
  for($i = 3; $i <= $raiz; $i += 2)
    if($p % $i == 0){ $primo = 0; break;}
}

if($primo) echo "$p é primo";
else echo "$p não é primo";
?>