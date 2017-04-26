select distinct s.name from (select distinct id, name, marks from students order by id asc) s where s.marks > 75 order by right(s.name, 3) asc ;

