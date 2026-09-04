# Write your MySQL query statement below
select u.user_id, 
    round(
        coalesce(avg(c.action = 'confirmed'), 
        0), 
    2) as confirmation_rate 
from Signups as u
left join Confirmations as c
    on u.user_id = c.user_id
group by user_id;