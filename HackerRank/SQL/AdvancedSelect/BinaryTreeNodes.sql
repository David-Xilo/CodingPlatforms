select t.N, (case when t.P is NULL then 'Root' when (select count(*) from BST tn where tn.P = t.N) > 0 then 'Inner' else 'Leaf' end) from BST t order by t.N;

