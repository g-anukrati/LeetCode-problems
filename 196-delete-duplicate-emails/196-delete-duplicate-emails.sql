# Please write a DELETE statement and DO NOT write a SELECT statement.
# Write your MySQL query statement below

#Using Join:


#Without Using Join (Correlated Query):

#delete p from Person p
#where id != (select min(id) from Person
#            where email = p.email)

with temp_table as(
select id, email,
row_number() over (partition by email order by id asc) as r_num 
from person 
)
delete from person where id in(
select id from temp_table where r_num <> 1)