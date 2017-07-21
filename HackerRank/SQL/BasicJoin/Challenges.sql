/*
Maybe a little overcomplicated and with help from the discussion
*/

select c.hacker_id, h.name, count(c.hacker_id) as c_ct
from hackers h join challenges c on h.hacker_id = c.hacker_id 
group by c.hacker_id, h.name 
having c_ct = ( select max(temp.c1) from (select count(hacker_id) as c1 from challenges group by hacker_id) temp )
or c_ct in (select t.ct from ( select count(*) as ct from challenges group by hacker_id) t group by t.ct having count(t.ct) = 1 ) 
order by count(c.challenge_id) desc, h.hacker_id asc;


