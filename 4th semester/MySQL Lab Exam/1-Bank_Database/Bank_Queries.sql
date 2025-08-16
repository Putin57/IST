-- I. Retrieve distinct customers who have either an account or a loan
SELECT DISTINCT C.CustomerID, C.CustomerName
FROM Customer C
LEFT JOIN Depositor D ON C.CustomerID = D.CustomerID
LEFT JOIN Borrower B ON C.CustomerID = B.CustomerID
WHERE D.CustomerID IS NOT NULL OR B.CustomerID IS NOT NULL;

-- II. Retrieve the branch with the maximum number of accounts
SELECT BranchName
FROM Account
GROUP BY BranchName
ORDER BY COUNT(*) DESC
LIMIT 1;

-- III. Find the maximum loan amount issued in each branch
SELECT BranchName, MAX(Amount) AS MaxLoan
FROM Loan
GROUP BY BranchName;

-- IV. Find customers whose names start with 'A'
SELECT * FROM Customer
WHERE CustomerName LIKE 'A%';
