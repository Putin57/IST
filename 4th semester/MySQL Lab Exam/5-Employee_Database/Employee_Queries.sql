-- i. Find companies with more than 5 employees
SELECT CompanyName
FROM Works
GROUP BY CompanyName
HAVING COUNT(*) > 5;

-- ii. Give all employees of Grameen Bank a 20% salary raise
UPDATE Works
SET Salary = Salary * 1.20
WHERE CompanyName = 'Grameen Bank';

-- iii. Delete all records where an employee has no manager
DELETE FROM Manages
WHERE ManagerID IS NULL;

or,

DELETE FROM Employees
WHERE EmployeeID IN (
    SELECT EmployeeID FROM Manages WHERE ManagerID IS NULL
);

-- vi. Assign a new manager to employees who currently have no manager
UPDATE Manages
SET ManagerID = 3
WHERE ManagerID IS NULL;
