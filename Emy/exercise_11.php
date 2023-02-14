<?php

//average of numbers in an array
$array = [1,2,3];
$arraycount = count($array);
$sum = 0;
for($i=0;$i<$arraycount;$i++){
    $sum = $sum + $array[$i];
}
echo $sum/$arraycount;