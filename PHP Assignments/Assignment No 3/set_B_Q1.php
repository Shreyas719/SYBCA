<html>
<body bgcolor="gold">
<?php
$stud=array('0'=>array('name'=> 'Pramod' ,'age'=>20),
            '1'=>array('name'=> 'Amit', 'age'=>21),
            '2'=>array('name'=> 'Ganesh' , 'age'=>19),
            '3'=>array('name'=> 'Vinayak' , 'age'=>22));
print_r($stud);                                                                                                                          
echo "<br>";
echo "<br> Element for delete is:";
echo "<br>stud[1]['age']<br>";
echo $stud[1]['age'];
echo "<br><br>";
unset($stud[1]['age']);
print_r($stud);
?>
</body>
</html>