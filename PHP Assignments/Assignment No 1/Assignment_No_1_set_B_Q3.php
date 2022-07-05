<! DOCTYPE html>
<html>
<body>

<form  method="post">
Enter The Number : <input type="text" name="num">
<input type="submit" name="submit" value="submit">

</form>
</body>
</html>

<?php
if ($_POST)
{
	$num=$_POST['num'];
	$cnt=0;
	if(!is_numeric($num))
	{
		echo "String not allowed , input should be a number.";
	}
	for($i=1;$i<=$num;$i++)
	{
		
		if(($num % $i) == 0)
		{
			$cnt++;
		}
	}
	if($cnt<3)
		echo "$num is prime number";
	else 
		echo "$num is not prime number";
}

?>