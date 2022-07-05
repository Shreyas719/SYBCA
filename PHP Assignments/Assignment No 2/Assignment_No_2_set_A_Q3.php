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
$revstring=strrev($str);

if($revstring==$str)
    echo "The string is palindrome.";
else 
    echo "The string is not palindrome.";

?>