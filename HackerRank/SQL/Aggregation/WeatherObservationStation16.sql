select round(min(l.LAT_N), 4) from (select LAT_N from station where LAT_N > 38.7780) as l;

