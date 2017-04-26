/*
Enter your query here.
*/
select distinct s.city from station s where (s.id % 2) = 0;
