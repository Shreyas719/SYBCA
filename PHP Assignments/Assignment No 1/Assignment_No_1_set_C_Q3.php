<! DOCTYPE html>
<html>
<body>

<?php

$x=30;
$y=20;
$z=10;

$max= ($x>$y && $x>$z)? $x : ($y>$z ? $y : $z);

print "The maximum number is ".$max;


?>
</body>
</html>
