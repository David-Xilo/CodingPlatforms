<?php
$_fp = fopen("php://stdin", "r");
/* Enter your code here. Read input from STDIN. Print output to STDOUT */
$n = intval(fgets(STDIN));
$r = array();
$c = array();
while($f = fgets(STDIN)){
    array_push($r, intval($f));
    array_push($c, 1);
}

if($n < 2){
    if($n == 0){
        return 0;
    }else{
        return 1;
    }
}

for($i = 1; $i < $n; $i++){
    if($r[$i] > $r[$i-1]){
        $c[$i] = $c[$i-1] + 1;
    }
}
for($j = $n - 2; $j >= 0; $j--){
    if($r[$j] > $r[$j + 1]){
        $c[$j] = max($c[$j], $c[$j+1] + 1);
    }
}
$sum = 0;
for($j = 0; $j < $n; $j++){
    $sum += $c[$j];
}
print $sum;

?>
