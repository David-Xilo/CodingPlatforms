
/*it has to be ceil, round doesn't work*/
select ceil(avg(salary) - avg(replace(salary, '0', ''))) from employees;

