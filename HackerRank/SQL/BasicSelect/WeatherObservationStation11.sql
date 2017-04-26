select distinct s.city from station s where left(s.city, 1) not in ('a', 'e', 'i', 'o', 'u') or right(s.city, 1) not in ('a', 'e', 'i', 'o', 'u');
