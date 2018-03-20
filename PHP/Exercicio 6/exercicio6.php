<form method="get" action="exercicio6_2.php">
<?php
$n = intval($_GET["n"]); 
echo "<input type='hidden' value=$n name='n'>";
$i = 0;
while($i++ < $n) echo "<div><label>Elemento $i</label><input name=elem$i></div>";
?>
<input type="submit" name="">
</form>