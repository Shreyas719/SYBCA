<html>
<body bgcolor=skyblue>
<form method="post">
Enter choice :
<br><input type="radio" name="ch" value=1> Insert element in stack <br>
<input type="radio" name="ch" value=2> Delete element from stack <br>
<br>

<input type="submit" value="submit">
<input type="reset" value="reset">
</form>
</body>

</html>

<?php
$choice=$_POST['ch'];
{
    echo "<br>";
    echo "<br>";
        $arr=array(1,2,3,4,5,6,7,8,9,10);
        switch($choice)
        {
                case 1:
                        array_push($arr,999);
                        print_r($arr);
                        echo "<br>";
                        break;
                case 2:
                        $ele=array_pop($arr);
                        echo "Poped element : $ele";
                        echo "<br>";
                        print_r($arr);
                        echo "<br>";
                        break;

                }
            }

            ?>