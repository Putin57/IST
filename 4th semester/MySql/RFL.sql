-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: localhost
-- Generation Time: Feb 06, 2025 at 06:05 AM
-- Server version: 10.4.32-MariaDB
-- PHP Version: 8.2.12

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `RFL`
--

-- --------------------------------------------------------

--
-- Table structure for table `company`
--

CREATE TABLE `company` (
  `COMPANY_NAME` varchar(30) NOT NULL,
  `CITY` varchar(30) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `company`
--

INSERT INTO `company` (`COMPANY_NAME`, `CITY`) VALUES
('BS23', 'Dhaka'),
('Ist', 'Dhaka'),
('TigerIT', 'Dhaka'),
('WellDev', 'Dhaka');

-- --------------------------------------------------------

--
-- Table structure for table `employee`
--

CREATE TABLE `employee` (
  `EMPLOYEE_ID` varchar(30) NOT NULL,
  `EMPLOYEE_NAME` varchar(30) DEFAULT NULL,
  `STREET` varchar(30) DEFAULT NULL,
  `CITY` varchar(30) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `employee`
--

INSERT INTO `employee` (`EMPLOYEE_ID`, `EMPLOYEE_NAME`, `STREET`, `CITY`) VALUES
('22002', 'Rohan', 'Lalbag', 'Dhaka'),
('22035', 'Sabraj', 'Mohammadpur', 'Dhaka'),
('22057', 'Mahid', 'Uttara', 'Dhaka'),
('22058', 'Farhan', 'Signboard', 'Dhaka'),
('22068', 'Rakib', 'Mugda', 'Dhaka'),
('22070', 'Sanju', 'Sankor', 'Dhaka'),
('22075', 'Saif', 'Mirpur', 'Dhaka');

-- --------------------------------------------------------

--
-- Table structure for table `manager`
--

CREATE TABLE `manager` (
  `EMPLOYEE_ID` varchar(30) NOT NULL,
  `MANAGER_NAME` varchar(30) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `manager`
--

INSERT INTO `manager` (`EMPLOYEE_ID`, `MANAGER_NAME`) VALUES
('22057', 'Mahid');

-- --------------------------------------------------------

--
-- Table structure for table `works`
--

CREATE TABLE `works` (
  `EMPLOYEE_ID` varchar(30) NOT NULL,
  `COMPANY_NAME` varchar(30) DEFAULT NULL,
  `SALARY` double DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `works`
--

INSERT INTO `works` (`EMPLOYEE_ID`, `COMPANY_NAME`, `SALARY`) VALUES
('22002', 'Welldev', 50000),
('22035', 'Ist', 55000),
('22057', 'BS23', 60000),
('22058', 'TigerIT', 65000),
('22068', 'WellDev', 70000),
('22070', 'Ist', 75000),
('22075', 'BS23', 80000);

--
-- Indexes for dumped tables
--

--
-- Indexes for table `company`
--
ALTER TABLE `company`
  ADD PRIMARY KEY (`COMPANY_NAME`);

--
-- Indexes for table `employee`
--
ALTER TABLE `employee`
  ADD PRIMARY KEY (`EMPLOYEE_ID`);

--
-- Indexes for table `manager`
--
ALTER TABLE `manager`
  ADD PRIMARY KEY (`EMPLOYEE_ID`);

--
-- Indexes for table `works`
--
ALTER TABLE `works`
  ADD PRIMARY KEY (`EMPLOYEE_ID`),
  ADD KEY `COMPANY_NAME` (`COMPANY_NAME`);

--
-- Constraints for dumped tables
--

--
-- Constraints for table `manager`
--
ALTER TABLE `manager`
  ADD CONSTRAINT `manager_ibfk_1` FOREIGN KEY (`EMPLOYEE_ID`) REFERENCES `employee` (`EMPLOYEE_ID`);

--
-- Constraints for table `works`
--
ALTER TABLE `works`
  ADD CONSTRAINT `works_ibfk_1` FOREIGN KEY (`COMPANY_NAME`) REFERENCES `company` (`COMPANY_NAME`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
