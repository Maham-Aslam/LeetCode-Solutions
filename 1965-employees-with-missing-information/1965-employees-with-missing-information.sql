/* Write your T-SQL query statement below */
SELECT Employees.employee_id
FROM Employees
LEFT JOIN Salaries 
ON Employees.employee_id = Salaries.employee_id
WHERE salary IS NULL

UNION ALL

SELECT Salaries.employee_id
FROM Employees
RIGHT JOIN Salaries
ON Employees.employee_id = Salaries.employee_id
WHERE name IS NULL

ORDER BY employee_id