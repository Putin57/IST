CREATE TABLE Employee (
    EmployeeID INT PRIMARY KEY,
    EmployeeName VARCHAR(100),
    Street VARCHAR(100),
    City VARCHAR(100)
);

CREATE TABLE Company (
    CompanyName VARCHAR(100) PRIMARY KEY,
    City VARCHAR(100)
);

CREATE TABLE Works (
    EmployeeID INT,
    CompanyName VARCHAR(100),
    Salary DECIMAL(15, 2),
    PRIMARY KEY (EmployeeID, CompanyName),
    FOREIGN KEY (EmployeeID) REFERENCES Employee(EmployeeID) ON DELETE CASCADE,
    FOREIGN KEY (CompanyName) REFERENCES Company(CompanyName) ON DELETE CASCADE
);

CREATE TABLE Manages (
    EmployeeID INT PRIMARY KEY,
    ManagerID INT,
    FOREIGN KEY (EmployeeID) REFERENCES Employee(EmployeeID) ON DELETE CASCADE,
    FOREIGN KEY (ManagerID) REFERENCES Employee(EmployeeID) ON DELETE SET NULL
);
