<! DOCTYPE html>
<html>
<body>
<?php
$num = 153;

$rem ;
$sum=0 ;
$original = $num;

while ($original != 0)
{
	$rem = $original %10;
	$sum = $sum + $rem * $rem * $rem;
	$original = $original /10;
}

if ($num == $sum)
	echo "$num is a armstrong number.";
else 
	echo "$num is not a armstrong number.";


?>


</body>

</html>