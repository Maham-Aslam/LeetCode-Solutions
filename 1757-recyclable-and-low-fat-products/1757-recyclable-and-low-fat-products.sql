/* Write your T-SQL query statement below */
select product_id
from Products
where Products.low_fats = 'Y' and Products.recyclable = 'Y'