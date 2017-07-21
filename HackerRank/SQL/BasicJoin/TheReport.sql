select (case when g.grade > 7 then s.name else 'NULL' end) as n, g.grade, s.marks from students s, grades g where s.marks >= g.min_mark and s.marks <= g.max_mark order by g.grade desc, n asc, s.marks asc;

