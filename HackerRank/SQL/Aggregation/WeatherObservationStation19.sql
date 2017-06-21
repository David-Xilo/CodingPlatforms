select truncate( sqrt( power( ( min(LAT_N) - max(LAT_N) ) , 2 ) + power( ( max(LONG_W) - min(LONG_W) ) , 2) ) ,4) from station;

