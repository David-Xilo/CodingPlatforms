/*With 3 nested selects*/
select h.hacker_id, h.name, t.t_score
from ( select s.hacker_id, sum(s.m_score) as t_score
    from ( select m.hacker_id, m.challenge_id, max(m.score) as m_score
        from submissions m 
        group by m.hacker_id, m.challenge_id ) s
    group by s.hacker_id ) t join hackers h
    on h.hacker_id = t.hacker_id
where t.t_score > 0
order by t.t_score desc, h.hacker_id asc;
