<html>
  <head>
    <title>setc2.html</title>
  </head>
  <body bgcolor="red">
    <form method="post">
      <pre>
                                                                                                                              
        Enter first string ::<input type="text" name="str1">
                                                                                                                              
        Enter second string::<input type="text" name="str2">
                                                                                                                              
        Enter position::<input type='text' name="pos">
                                                                                                                              
         
                        <input type="radio" name="ch" value=1>compare
                                                                                                                              
                        <input type="radio" name="ch" value=2>with datatype
                                                                                                                              
                        <input type="radio" name="ch" value=3>append.
                                                                                                                              
                        <input type="radio" name="ch" value=4>possition for reverse.
                                                                                                                              
                        <input type="submit" value="check">     <input type="reset" value="cancel">
</pre>
    </form>
  </body>
</html>
<?php
        $str1=$_POST['str1'];
        $str2=$_POST['str2'];
        $pos=$_POST['pos'];
        $ch=$_POST['ch'];
        echo"First string  :: $str1.<br><br>";
                                                                                                                              
        echo "Second string::$str2.<br><br>";
                                                                                                                              
        echo"position for reverse::$pos.<br><br>";
                                                                                                                              
        echo"choice is::$ch.<br><br>";
                                                                                                                              
        switch($ch)
        {
        case 1:
                if($str1==$str2)
                        echo"Both string are equal.<br>";
                else
                        echo"Both string are not equal.<br>";
        break;
        case 2:
                if (strcmp($str1,$str2))
                        echo"Both are  equal.<BR>";
                else
                        echo"Both are not equal.<BR>";
        break;
        case 3:
                echo"After appending::";
                echo "$str1"."$str2";
                echo"<br>";
        break;
        case 4: $len=strlen($str1)-$pos;
                $s=substr($str1,$pos,$len);
                $str4=strrev($str1);
                echo "After reverse::$str4.<br>";
        break;
        }
 
?>