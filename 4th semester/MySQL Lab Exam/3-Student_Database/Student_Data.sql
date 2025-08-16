-- ============================
-- Department Data
-- ============================
INSERT INTO Department VALUES 
(1, 'Computer Science', 'Dr. Rahman', 10),
(2, 'Electrical Engineering', 'Dr. Ahmed', 8),
(3, 'Business Administration', 'Dr. Karim', 6);

-- ============================
-- Student Data
-- ============================
INSERT INTO Student VALUES
(101, 'Alice', '2001-05-14', 'Female', 'Dhaka', '0171111111', 'alice@example.com', 1),
(102, 'Bob', '2000-08-20', 'Male', 'Chittagong', '0172222222', 'bob@example.com', 1),
(103, 'Charlie', '1999-12-10', 'Male', 'Rajshahi', '0173333333', 'charlie@example.com', 2),
(104, 'Diana', '2001-03-02', 'Female', 'Sylhet', '0174444444', 'diana@example.com', 3),
(105, 'Ethan', '2000-11-11', 'Male', 'Khulna', '0175555555', 'ethan@example.com', 1);

-- ============================
-- Course Data
-- ============================
INSERT INTO Course VALUES
(201, 'Database Systems', 3, 1),
(202, 'Operating Systems', 3, 1),
(203, 'Circuits', 3, 2),
(204, 'Business Management', 3, 3),
(205, 'Algorithms', 3, 1);

-- ============================
-- Faculty Data
-- ============================
INSERT INTO Faculty VALUES
(301, 'Dr. Hasan', 'Professor', 'hasan@uni.com', '0181111111', 1),
(302, 'Dr. Sultana', 'Associate Professor', 'sultana@uni.com', '0182222222', 2),
(303, 'Dr. Alam', 'Professor', 'alam@uni.com', '0183333333', 3);

-- ============================
-- Enrollment Data
-- (EnrollmentID, StudentID, CourseID, Semester, Grade)
-- Each student can’t repeat same course in same semester
-- ============================
INSERT INTO Enrollment VALUES
(401, 101, 201, 'Spring2024', 'A'),
(402, 101, 202, 'Spring2024', 'B'),
(403, 101, 205, 'Spring2024', 'F'),
(404, 102, 201, 'Spring2024', 'C'),
(405, 102, 202, 'Spring2024', 'A'),
(406, 102, 205, 'Spring2024', 'B'),
(407, 103, 203, 'Spring2024', 'A'),
(408, 104, 204, 'Spring2024', 'B'),
(409, 105, 201, 'Spring2024', 'A'),
(410, 105, 202, 'Spring2024', 'F'),
(411, 105, 205, 'Spring2024', 'B');

-- ============================
-- Classroom Data
-- Composite Key: (RoomNumber, Building)
-- ============================
INSERT INTO Classroom VALUES
(501, 'Main Building', 60),
(502, 'Science Block', 40),
(501, 'Business Hall', 50); -- same room number as Main Building but different building
