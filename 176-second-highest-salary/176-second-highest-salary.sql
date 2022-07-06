# Write your MySQL query statement below
select max(salary) as SecondHighestSalary from employee where salary < (select max(salary) from employee);
/*
SELECT MAX(Salary) FROM EMPLOYEE WHERE Salary < ((n-1)th highest solution)
 
    SELECT MAX(Salary) AS ThirdHighestSalary
    FROM EMPLOYEE 
    WHERE Salary < (SELECT MAX(Salary) FROM Employee WHERE Salary < (SELECT MAX(Salary) FROM Employee))

*/
