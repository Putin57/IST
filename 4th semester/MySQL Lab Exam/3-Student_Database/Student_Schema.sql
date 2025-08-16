-- Department table
CREATE TABLE Department (
    DepartmentID INT PRIMARY KEY,
    DepartmentName VARCHAR(100) NOT NULL,
    HeadOfDept VARCHAR(100),
    FacultyCount INT
);

-- Student table
CREATE TABLE Student (
    StudentID INT PRIMARY KEY,
    StudentName VARCHAR(100) NOT NULL,
    DOB DATE,
    Gender VARCHAR(10),
    Address VARCHAR(255),
    Phone VARCHAR(20),
    Email VARCHAR(100),
    DepartmentID INT,
    FOREIGN KEY (DepartmentID) REFERENCES Department(DepartmentID)
);

-- Course table
CREATE TABLE Course (
    CourseID INT PRIMARY KEY,
    CourseName VARCHAR(100) NOT NULL,
    Credits INT,
    DepartmentID INT,
    FOREIGN KEY (DepartmentID) REFERENCES Department(DepartmentID)
);

-- Faculty table
CREATE TABLE Faculty (
    FacultyID INT PRIMARY KEY,
    FacultyMemberName VARCHAR(100) NOT NULL,
    Designation VARCHAR(50),
    Email VARCHAR(100),
    Phone VARCHAR(20),
    DepartmentID INT,
    FOREIGN KEY (DepartmentID) REFERENCES Department(DepartmentID)
);

-- Enrollment table
CREATE TABLE Enrollment (
    EnrollmentID INT PRIMARY KEY, -- You can keep this as PK
    StudentID INT,
    CourseID INT,
    Semester VARCHAR(20),
    Grade CHAR(2),
    FOREIGN KEY (StudentID) REFERENCES Student(StudentID),
    FOREIGN KEY (CourseID) REFERENCES Course(CourseID),
    CONSTRAINT uq_enrollment UNIQUE(StudentID, CourseID, Semester) -- prevent duplicate enrollment
);

-- Classroom table
CREATE TABLE Classroom (
    RoomNumber INT,
    Building VARCHAR(100),
    Capacity INT,
    PRIMARY KEY (RoomNumber, Building) -- composite key
);
