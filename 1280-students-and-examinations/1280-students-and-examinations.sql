# Write your MySQL query statement below
select s.student_id, s.student_name, c.subject_name, count(a.student_id) as attended_exams
from Students s
cross join Subjects as c
left join Examinations as a
on s.student_id = a.student_id
and c.subject_name = a.subject_name
group by s.student_id,
        s.student_name,
        c.subject_name
order by student_id, subject_name;