select w.id, wc.age, w.coins_needed, w.`power`
from wands w inner join Wands_Property wc on w.code = wc.code
where wc.is_evil = 0 and w.coins_needed = (select min(coins_needed) from wands w2 inner join wands_property wc2 on w2.code = wc2.code where wc.age = wc2.age and w.`power` = w2.`power` group by wc2.age, w2.`power`)
order by w.`power` desc, wc.age desc;

