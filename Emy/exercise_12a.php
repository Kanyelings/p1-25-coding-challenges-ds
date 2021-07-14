<?php

//function receives array, and returns array of positive numbers.

function getPositiveArray($array){
    $array =[];
    $array2 = [];

    for($i=0;$i<count($array);$i++){

        if ($array[$i]>=0){
            array_push($array2,$array[$i]);

        }
    }
    return $array2;
}

$arr = [-1,2];
$result = getPositiveArray($arr);
var_dump($result);
