# Write your MySQL query statement below
select salesperson.name
from orders o join company c on (o.com_id = c.com_id and c.name = 'RED')
right join salesperson on salesperson.sales_id = o.sales_id
where o.sales_id is null
/*
SELECT name from salesperson
where sales_id not in 
(
    select sales_id from orders where com_id in 
	(select com_id from company where name='RED')
)
Approach 2:

SELECT name FROM salesperson
where sales_id not in
(SELECT sales_id FROM orders
LEFT JOIN
company 
ON orders.com_id=company.com_id 
WHERE company.name='RED')
*/