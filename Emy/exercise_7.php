<?php
$sum = 0;
for($i=11;$i<=30;$i++){
    if(($i%2)!=0){
        $sum = $sum + $i;
    }

}
echo $sum;