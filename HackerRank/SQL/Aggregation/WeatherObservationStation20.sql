select round(avg(middle_values), 4) as 'median' from (
  select t1.LAT_N as 'middle_values' from
    (
      select @row:=@row+1 as `row`, x.LAT_N
      from station as x, (select @row:=0) as r
      order by x.LAT_N
    ) as t1,
    (
      select COUNT(*) as 'count'
      from station as x
    ) as t2
    where t1.row >= t2.count/2 and t1.row <= ((t2.count/2) +1)) as t3;
