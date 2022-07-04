# Write your MySQL query statement below
SELECT user_id, CONCAT(UPPER(SUBSTR(NAME,1,1)), LOWER(SUBSTR(NAME,2))) AS name from users
ORDER BY user_id ASC;