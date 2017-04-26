select comp.company_code, comp.founder, count(distinct e.lead_manager_code), count(distinct e.senior_manager_code), count(distinct e.manager_code), count(distinct e.employee_code) from company comp inner join employee e on e.company_code = comp.company_code group by comp.company_code, comp.founder order by comp.company_code;

