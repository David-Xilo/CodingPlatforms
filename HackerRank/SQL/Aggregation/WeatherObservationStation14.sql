select truncate(max(l.LAT_N), 4) from (select LAT_N from station where LAT_N < 137.2345) as l;

