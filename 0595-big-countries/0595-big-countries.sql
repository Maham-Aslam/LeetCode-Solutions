/* Write your T-SQL query statement below */
select name, population, area 
from World
where World.population >= 25000000 or World.area >= 3000000