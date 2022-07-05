
<?php

class Employee
{
private $eid,$ename,$edept,$sal;
function __construct($a,$b,$c,$d)
{
$this->eid=$a;
$this->ename=$b;
$this->edept=$c;
$this->sal=$d;
}
public function getdata()
{
return $this->sal;
}
public function display()
{
echo $this->eid."</br>";
echo $this->ename."</br>";
echo $this->edept."</br>";
//echo $this->ename."</br>";
}
}
class Manager extends Employee
{
private $bonus;
public static $total1=0;
function __construct($a,$b,$c,$d,$e)
{
parent::__construct($a,$b,$c,$d);
$this->bonus=$e;
}
public function max($ob)
{
$sal=$this->getdata();
$total=$sal+$this->bonus;
if($total>self::$total1)
{
self::$total1=$total;
return $this;
}
else
{
return $ob;
}
}
public function display()
{
parent::display();
echo self::$total1;
}

}
$ob=new Manager(0,"ABC","",0,0);
$ob1=new Manager(1,"Rahul","computer",2805555500,2000);
$ob=$ob1->max($ob);
$ob2=new Manager(2,"Pramod","computer",30000,2500);
$ob=$ob2->max($ob);
$ob3=new Manager(3,"Anil","computer",32000,3000);
$ob=$ob3->max($ob);
$ob4=new Manager(4,"Aniket","computer",28000,4000);
$ob=$ob4->max($ob);
$ob5=new Manager(5,"Sanket","computer" ,528000,5000);
$ob=$ob5->max($ob);
$ob->display();

?>