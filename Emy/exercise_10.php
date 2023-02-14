<?php

//sum of numbers in an array
$sum = 0;
$array = [1,2,3];
$arrcount = count($array);
for($i=0;$i<$arrcount;$i++){
    $sum = $sum + $array[$i];
}
echo $sum;



