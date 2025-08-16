-- Branches
INSERT INTO Branch
VALUES
    ('Gulshan Branch', 'Dhaka', 50000000),
    ('Motijheel Branch', 'Dhaka', 40000000),
    ('Agrabad Branch', 'Chattogram', 35000000),
    ('Kushtia Branch', 'Kushtia', 20000000);

-- Customers
INSERT INTO Customer
VALUES
    (1, 'Abul Hasan', 'Road 10', 'Dhaka'),
    (2, 'Ayesha Siddiqua', 'Station Rd', 'Chattogram'),
    (3, 'Jamal Uddin', 'Kazir Dewri', 'Chattogram'),
    (4, 'Arman Khan', 'Shahbagh', 'Dhaka');

-- Accounts
INSERT INTO Account
VALUES
    (101, 'Gulshan Branch', 20000.00),
    (102, 'Motijheel Branch', 50000.00),
    (103, 'Gulshan Branch', 7000.00);

-- Loans
INSERT INTO Loan
VALUES
    (201, 'Gulshan Branch', 12000.00),
    (202, 'Motijheel Branch', 6000.00),
    (203, 'Agrabad Branch', 70000.00);

-- Depositors (link customers with accounts)
INSERT INTO Depositor
VALUES
    (1, 101),  -- Abul has account
    (2, 102),  -- Ayesha has account
    (4, 103);  -- Arman has account

-- Borrowers (link customers with loans)
INSERT INTO Borrower
VALUES
    (1, 201),  -- Abul has loan
    (3, 203);  -- Jamal has loan
