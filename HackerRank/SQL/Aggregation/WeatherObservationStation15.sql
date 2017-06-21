select round(l.LONG_W,4) from (select LAT_N, LONG_W from station where LAT_N < 137.2345) as l order by LAT_N desc limit 1;
