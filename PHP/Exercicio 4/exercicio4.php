<form method="get" action="exercicio4_2.php">
<?php
$n = intval($_GET["n"]); 
echo "<input type='hidden' value=$n name='n'>";
$i = 0;
while($i++ < $n) echo "<div><label>Temperatura $i</label><input name=temp$i></div>";
?>
<input type="submit" name="">
</form>