-- I. Find the company that has the most employees
SELECT CompanyName
FROM Works
GROUP BY CompanyName
ORDER BY COUNT(*) DESC
LIMIT 1;

-- II. Find employees who do not have a manager
SELECT E.EmployeeID, E.EmployeeName
FROM Employee E
LEFT JOIN Manages M ON E.EmployeeID = M.EmployeeID
WHERE M.ManagerID IS NULL;

-- III. Find the second highest salary among employees
SELECT MAX(Salary) AS SecondHighest
FROM Works
WHERE Salary < (
    SELECT MAX(Salary) FROM Works
);

-- IV. Find employees who live in Dhaka but whose company is not in Dhaka
SELECT E.EmployeeName, C.CompanyName
FROM Employee E
JOIN Works W ON E.EmployeeID = W.EmployeeID
JOIN Company C ON W.CompanyName = C.CompanyName
WHERE E.City = 'Dhaka' AND C.City != 'Dhaka';
