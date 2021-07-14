<?php

//sum of even numbers greater tahn 10 and less than 30
$sum = 0;
for($i=11;$i<=30;$i++){
    if(($i%2)!=0){
        $sum = $sum + $i;
    }

}
echo $sum;
