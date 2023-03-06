/* Write your T-SQL query statement below */
SELECT a1.sell_date, COUNT(DISTINCT a1.product) as num_sold,
    STUFF((SELECT DISTINCT ',' + a2.product
           FROM Activities a2
           WHERE a2.sell_date = a1.sell_date
           ORDER BY 1
           FOR XML PATH('')), 1, 1, '') as products
FROM Activities a1
GROUP BY a1.sell_date
ORDER BY a1.sell_date;
