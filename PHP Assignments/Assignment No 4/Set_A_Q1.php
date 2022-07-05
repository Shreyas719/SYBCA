<html>
<body>
<center>
<h2> Calculate area and value of cylinder</h2>
<form  method="GET">
<h3>   Enter radius : <input type=text name=r><br>  </h3>
<h3>   Enter height : <input type=text name=h><br><br>  </h3>
<input type=submit value=submit name=Show>
<input type=reset value=Reset name=Reset>
</form>
</center>
</body>
<html>

<?php
$r    =   $_GET['r'];
$h   =   $_GET['h'];
define('PI','3.14');


interface cal
{
                                function area($r,$h);
                                function vol($r,$h);
}
class cylinder implements cal
{
                                function area($r,$h)
                                {
                                                $area  =  2*PI*$r*($r+$h);
                                                echo "<h3>The area of cylinder is : $area</h3>";   
                                }
                                function vol($r,$h)
                                {
                                                $vol  =  PI*$r*$r*$h;
                                                echo "<h3>The volume of cylinder is : $vol</h3>"; 
                                }
}
$c   =  new cylinder;
                $c->area($r,$h);
                $c->vol($r,$h);
?>