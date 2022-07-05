<html>
<body>
<form method="get">
<center>
<h3><input type="radio" name="op" value="1">Reverse the order of each key-value pair</h3>
<h3><input type="radio" name="op" value="2">Traverse the elements in array in random order</h3>
<input type="submit" value="Submit">
</center>
</form>
</body>
</html>

<?php
                $op = $_GET['op'];
                $input = array("Peter"=>"35", "Ben"=>"37", "Joe"=>"43");
            echo "Associative Array  Is : ","<br>"; 
                foreach($input as $x => $x_value) {
                    echo "Key=" . $x . ", Value=" . $x_value;
                    echo "<br>";
                  }

                  echo "<br>";
                  echo "<br>";
                switch($op)
                {
                                case 1 :  $flipped = array_flip($input);
                                                                 print_r($flipped);
                                                                  break;
                                case 2 :  shuffle($input);
                                                print_r($input);
                                                break;
                }
?>
