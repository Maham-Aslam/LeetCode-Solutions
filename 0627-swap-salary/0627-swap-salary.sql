/* Write your T-SQL query statement below */
UPDATE Salary
SET Salary.sex = 
    CASE
        WHEN sex = 'm' THEN 'f'
        WHEN sex = 'f' THEN 'm'
    END