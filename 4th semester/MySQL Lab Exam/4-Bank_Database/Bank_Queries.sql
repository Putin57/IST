-- i. Delete all loan amounts between 5000/- and 15000/-
DELETE FROM Loan
WHERE Amount BETWEEN 5000 AND 15000;

-- ii. Find branches that have no accounts
SELECT BranchName
FROM Branch
WHERE BranchName NOT IN (
    SELECT DISTINCT BranchName FROM Account
);

-- iii. Find branches where total loan amount is greater than 50,000
SELECT BranchName, SUM(Amount) AS TotalLoan
FROM Loan
GROUP BY BranchName
HAVING SUM(Amount) > 50000;

-- iv. Deduct 3% from accounts of customers who have both account and loan, otherwise 5%
UPDATE Account
SET Balance = Balance *
    CASE
        WHEN AccountNumber IN (
            SELECT D.AccountNumber
            FROM Depositor D
            JOIN Borrower B ON D.CustomerID = B.CustomerID
        ) THEN 0.97
        ELSE 0.95
    END;
