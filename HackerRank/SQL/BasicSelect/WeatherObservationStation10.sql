/*
Enter your query here.
*/
select distinct s.city from station s where right(s.city, 1) not in ('a', 'e', 'i', 'o', 'u');
