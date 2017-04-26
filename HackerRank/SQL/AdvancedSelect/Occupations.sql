
set @d = 0, @a = 0, @p = 0, @s = 0;
select min(doctor), min(professor), min(singer), min(actor) from (select if(occupation = 'Actor', name, null) as actor, if(occupation = 'Doctor', name, null) as doctor, if(occupation = 'professor', name, null) as professor, if(occupation = 'Singer', name, null) as singer, case occupation when 'Actor' then @a:=@a + 1 when 'Doctor' then @d:=@d + 1 when 'Professor' then @p:=@p + 1 when 'Singer' then @s:=@s + 1 end as idn from occupations order by name) as temp group by temp.idn;

