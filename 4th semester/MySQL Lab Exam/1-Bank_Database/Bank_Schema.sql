CREATE TABLE Branch (
    BranchName VARCHAR(100) PRIMARY KEY,
    BranchCity VARCHAR(100),
    Assets DECIMAL(15, 2)
);

CREATE TABLE Customer (
    CustomerID INT PRIMARY KEY,
    CustomerName VARCHAR(100),
    CustomerStreet VARCHAR(100),
    CustomerCity VARCHAR(100)
);

CREATE TABLE Account (
    AccountNumber INT PRIMARY KEY,
    BranchName VARCHAR(100),
    Balance DECIMAL(15, 2),
    FOREIGN KEY (BranchName) REFERENCES Branch(BranchName) ON DELETE CASCADE
);

CREATE TABLE Loan (
    LoanNumber INT PRIMARY KEY,
    BranchName VARCHAR(100),
    Amount DECIMAL(15, 2),
    FOREIGN KEY (BranchName) REFERENCES Branch(BranchName) ON DELETE CASCADE
);

CREATE TABLE Depositor (
    CustomerID INT,
    AccountNumber INT,
    PRIMARY KEY (CustomerID, AccountNumber),
    FOREIGN KEY (CustomerID) REFERENCES Customer(CustomerID) ON DELETE CASCADE,
    FOREIGN KEY (AccountNumber) REFERENCES Account(AccountNumber) ON DELETE CASCADE
);

CREATE TABLE Borrower (
    CustomerID INT,
    LoanNumber INT,
    PRIMARY KEY (CustomerID, LoanNumber),
    FOREIGN KEY (CustomerID) REFERENCES Customer(CustomerID) ON DELETE CASCADE,
    FOREIGN KEY (LoanNumber) REFERENCES Loan(LoanNumber) ON DELETE CASCADE
);
