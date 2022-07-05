<! DOCTYPE html>
<html>
<body>
<form method="post">
Enter the value : <input type ="number" name="n">
<input type="submit" name="submit"  value="submit">
</form>
</body>
</html>
<?php
if ($_POST)
{
	$n= $_POST['n'];
	if(!is_numeric($n))
	{
		echo"Enter only numbers, strings are not allowed.";
	}
function facto($n)
{
	if($n==0)
	{
		return (1);
	}
	else 
	{
		return $n * facto($n-1);
	}
}
echo "Factorial of given number is :  ".facto($n);
}
?>
