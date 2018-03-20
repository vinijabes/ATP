<?php
  if(isset($_GET["n"]) && $_GET["n"] != ""){
      $n = intval($_GET["n"]); 
      for(;$n >= 0; $n--) echo "$n*$n = ", $n*$n, "<br>";
  }
?>