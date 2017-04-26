/*
Enter your query here.
*/

select count(s.city) - count(distinct s.city) from station s;
