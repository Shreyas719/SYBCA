<html>
    <head>
    <link rel="stylesheet" href="style/style.css">
    </head>
    <body>
        <div class="container">
            <div class="row py-3 " >
                <div class="pt-4 col-md-5 form-group py-5 px-5" style="border:2px solid green">
                    <h4 class="text-center">Select following Options</h4><br>
                    <form action="#" method="post">
                        <input type="radio" name="r1" value="1" class=""> Master table<br>
                        <input type="radio" name="r1" id="" value="2"> Sorting By Emp_Code <br>
                        <div class="form-group row">
                            <label class="col-sm-5 col-form-label">
                            <input type="radio" name="r1" value="3"> Search By Name</label>
                            <div class="col-sm-6">
                                <input type="text" name="nm" class="form-control">
                            </div>
                        </div>
                        <input type="radio" name="r1" id="" value="4"> Display Salary <br><br>
                        <input type="submit" value="Submit" name="submit" class="btn btn-outline-primary">
                        <input type="reset" value="Clear" class=" ml-2 btn btn-outline-danger">
                    </form>
                </div>
                <div class="col-md-7">

<?php
if(isset($_POST['submit'])){
    class teacher{
        public $code,$name,$des;
        function __construct($a,$b,$c){
            $this->code=$a;
            $this->name=$b;
            $this->des=$c;
        }
        public function disteacher(){
            echo "<td>". $this->code ."</td><td>".$this->name."</td><td>".$this->des."</td>";
        }
        public function getName(){
            return $this->name;
        }
    }
    class teach_acc extends teacher{
        public $ano, $jdate;
        function __construct($a,$b,$c,$d,$e){
            parent::__construct($a,$b,$c);
            $this->ano=$d;
            $this->jdate=$e;
        }
        public function disacc(){
            echo "<td>". $this->ano ."</td><td>".$this->jdate."</td>";
        }
    }
    class teach_sal extends teach_acc{
        public $bs, $earn, $ded, $total;
        function __construct($a,$b,$c,$d,$e,$f,$g,$h){
            parent::__construct($a,$b,$c,$d,$e);
            $this->bs=$f;
            $this->earn=$g;
            $this->ded=$h;
            $this->total = $this->bs+$this->earn-$this->ded;
        }
        public function dissal(){
            echo "<td>".$this->bs ."</td><td>".$this->earn."</td><td>".$this->ded."</td><td>".$this->total."</td>";
        }
    }
$e1[0]=new teach_sal(1,"Vikas","HOD",10001,"02/02/2021",30000,1000,200);
$e1[1]=new teach_sal(2,"Kunal","HOD",10002,"12/10/2022",29000,3500,400);
$e1[2]=new teach_sal(3,"Harsh","HOD",10003,"18/11/2020",24000,2500,250);
$e1[3]=new teach_sal(4,"Om","HOD",10004,"19/05/2019",21000,3000,650);
$e1[4]=new teach_sal(5,"Dipak","HOD",10005,"26/07/2019",27000,4000,750);

$ch=$_POST['r1'];
$nm=$_POST['nm'];
$flag=0;

function mastertable($e1){
    echo "<table class='table'>
    <tr><thead class='thead-dark'><th>Teacher code</th>
    <th>Teacher Name</th><th>Designation</th>
    <th>Account No</th><th>Joining Date</th>
    <th>Basic Pay</th><th>Earning</th>
    <th>Deduction</th><th>Total Salary</th></thead></tr>";
    for($i=0; $i<5; $i++){
        echo "<tr>";
        $e1[$i]->disteacher();
        $e1[$i]->disacc();
        $e1[$i]->dissal();
        echo "</tr>";
    }
    echo"</table>";
}

switch($ch){
    case 1 : mastertable($e1);
    break;
    case 2 : echo "Sorted details <br>";
            function srt($a,$b){
                return strcmp($a->code,$b->code);
            }
            mastertable($e1);
            usort($e1,"srt");
            break;
    case 3 :
            for($i=0;$i<5; $i++){
                $t=$e1[$i]->getName();
                if($t==$nm){
                    $flag=1;
                    break;
                }
            }

            if($flag==0){
                echo "<div class='alert alert-danger' role='alert'>
                        <em>Name Not Found</em>
                      </div>";
            }else{
                echo "<div class='alert alert-success' role='alert'>
                        <em>Name Found</em>
                      </div>";
            }
            break;
    case 4 : echo "Display Salary <br>";
                echo "<table class='table'>
                    <tr>
                    <thead class='thead-dark'>
                        <th>Teacher Name</th>
                        <th>Basic Pay</th>
                        <th>Earning</th>
                        <th>Deduction</th>
                        <th>Total Salary</th>
                    </tr>";

                    if($flag==0){
                        echo "<div class='alert alert-danger' role='alert'>
                                <em>Name Not Found</em>
                              </div>";
                    }else{
                        echo "<div class='alert alert-success' role='alert'>
                                <em>Name Found</em>
                              </div>";
                    }
                    break;
            case 4 : echo "Display Salary <br>";
                        echo "<table class='table'>
                            <tr>
                            <thead class='thead-dark'>
                                <th>Teacher Name</th>
                                <th>Basic Pay</th>
                                <th>Earning</th>
                                <th>Deduction</th>
                                <th>Total Salary</th>
                            </tr>";


                            for($i=0; $i<5; $i++){
                                echo "<tr> <td> "; 
                                $e1[$i]->getName(); 
                                echo "</td>";
                                $e1[$i]->dissal();
                            }
                        echo "</tr></table>";
                    break;
                }
            }
            ?>
                            </div>
                        </div>
                    </div>
                </body>
            </html>
                    
                  