<html>
    <body>
        <form method="post">
            Enter a string : <input type="text" name="str"/>
            <br>
            <br>
            <input type="submit" name="submit" value="submit"/>

        </form>
    </body>
</html>
<?php
$str=$_POST['str'];

echo "Before reverse the string is : ",$str;
echo "<br>";
echo "After reverse the string is : ",strrev($str);
?>