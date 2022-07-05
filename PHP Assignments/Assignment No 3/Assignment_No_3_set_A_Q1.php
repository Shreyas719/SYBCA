<html>
<form  method='post'>
<pre>
<h3>OPERATIONS</h3>
1<input type='radio' name='a' value='1'>Display.

2<input type='radio' name='a' value='2'>size.



<input type='submit' value='ok'>
<input type='reset' value='cancel'>

</pre>
</form>
</body>
</html>
<?php
$array=array('zero'=>0,'one'=>1,'two'=>2,'three'=>3,'four'=>4,'five'=>5);
$ch=$_POST['a'];
switch($ch)
{
case 1:foreach($array as $key=>$value)
{
echo"Key: $key  Val: $value.
";
echo "<br>";
}
break;
case 2:echo sizeof($array);
break;

}
?>