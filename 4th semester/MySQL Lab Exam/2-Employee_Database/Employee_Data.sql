-- Companies
INSERT INTO Company VALUES ('Grameen Bank', 'Dhaka');
INSERT INTO Company VALUES ('City Group', 'Chattogram');
INSERT INTO Company VALUES ('Square Pharma', 'Dhaka');

-- Employees
INSERT INTO Employee VALUES (1, 'Sabbir Rahman', 'Mirpur', 'Dhaka');
INSERT INTO Employee VALUES (2, 'Nasima Begum', 'GEC Circle', 'Chattogram');
INSERT INTO Employee VALUES (3, 'Tanvir Alam', 'Dhanmondi', 'Dhaka');
INSERT INTO Employee VALUES (4, 'Nayeem Khan', 'Uttara', 'Dhaka');
INSERT INTO Employee VALUES (5, 'Shamsun Nahar', 'Motijheel', 'Dhaka');
INSERT INTO Employee VALUES (6, 'Rubel Mia', 'Gulshan', 'Dhaka');

-- Works table
INSERT INTO Works VALUES (1, 'Grameen Bank', 30000);
INSERT INTO Works VALUES (2, 'City Group', 35000);
INSERT INTO Works VALUES (3, 'Grameen Bank', 50000);
INSERT INTO Works VALUES (4, 'Grameen Bank', 48000);
INSERT INTO Works VALUES (5, 'Square Pharma', 55000);
INSERT INTO Works VALUES (6, 'Grameen Bank', 51000);

-- Managers table
INSERT INTO Manages VALUES (1, NULL); -- No manager
INSERT INTO Manages VALUES (2, 1);
INSERT INTO Manages VALUES (3, 1);
INSERT INTO Manages VALUES (4, 3);
INSERT INTO Manages VALUES (5, 3);
-- Employee 6 has no manager
