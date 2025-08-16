I. Find the department with the highest number of students.
SELECT d.DepartmentID, d.DepartmentName
FROM Student s
JOIN Department d ON s.DepartmentID = d.DepartmentID
GROUP BY d.DepartmentID, d.DepartmentName
ORDER BY COUNT(*) DESC
LIMIT 1;
Or
SELECT d.DepartmentID, d.DepartmentName
FROM Student s
JOIN Department d ON s.DepartmentID = d.DepartmentID
GROUP BY d.DepartmentID, d.DepartmentName
HAVING COUNT(*) = (
SELECT MAX(StudentCount)
FROM (
SELECT COUNT(*) AS StudentCount
FROM Student
GROUP BY DepartmentID
) AS sub
);


II. Retrieve students who have taken more than 3 courses.
SELECT s.StudentID, s.StudentName
FROM Enrollment e
JOIN Student s ON e.StudentID = s.StudentID
GROUP BY s.StudentID, s.StudentName
HAVING COUNT(DISTINCT e.CourseID) > 3;


III. Find students who have taken at least one course and got an 'F'.
SELECT DISTINCT s.StudentID, s.StudentName
FROM Enrollment e
JOIN Student s ON e.StudentID = s.StudentID
WHERE e.Grade = 'F';IV. Find the total number of students enrolled in each course.
SELECT c.CourseID, c.CourseName, COUNT(DISTINCT e.StudentID) AS TotalStudents
FROM Enrollment e
JOIN Course c ON e.CourseID = c.CourseID
GROUP BY c.CourseID, c.CourseName;


IV. Find the total number of students enrolled in each course.
SELECT c.CourseID, c.CourseName, COUNT(DISTINCT e.StudentID) AS TotalStudents
FROM Enrollment e
JOIN Course c ON e.CourseID = c.CourseID
GROUP BY c.CourseID, c.CourseName;
