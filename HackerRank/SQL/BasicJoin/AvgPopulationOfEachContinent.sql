select ct.continent, floor(avg(c.population)) from country ct, city c where ct.code = c.countrycode group by ct.continent;

