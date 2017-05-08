select sum(c.population) from country ct, city c where ct.code = c.countrycode and ct.continent = 'Asia';
