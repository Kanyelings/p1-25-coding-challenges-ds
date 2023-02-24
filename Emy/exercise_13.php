<?php
//finds maximum number in an array
function getMax($array){
    for($i=0;$i<count($array);$i++){
        if($array[$i]>$array[$i+1]){
            $t = $array[$i];
            $array[$i] = $array[$i+1];
            $array[$i+1] = $t;
        }
    }
    $max = count($array)-1;
    return $max;
}

$arr= [6, 4, 2, 0, 9];
$result = getMax($arr);
var_dump($result);