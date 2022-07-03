# Please write a DELETE statement and DO NOT write a SELECT statement.
# Write your MySQL query statement below

#Using Join:
delete p2 
from person as p1 join person as p2 
on p1.email=p2.email 
and p1.id<p2.id;



#Without Using Join (Correlated Query):
/*
delete p from Person p
where id != (select min(id) from Person
           where email = p.email)
*/

/*
with temp_table as(
select id, email,
row_number() over (partition by email order by id asc) as r_num 
from person 
)
delete from person where id in(
select id from temp_table where r_num <> 1)
*/