/*
Enter your query here.
*/
select concat( name , '(' , left(occupation, 1), ')') from occupations order by name;
select concat( 'There are total ', count(*), ' ', lower(occupation), 's.' ) from occupations group by occupation order by count(*) asc, occupation asc;
