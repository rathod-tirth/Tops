-- (T-03) Create table: Employee and Incentive

use task;

create table Employee(
Employee_id int primary key,
First_name text,
Last_name text,
Salary int,
Joining_date varchar(25),
Department text
);

drop table Employee;

insert into Employee values
(1, 'John', 'Abraham', 1000000, '01-JAN-13 12:00:00 AM', 'Banking'),
(2, 'Michael', 'Clarke', 800000, '01-JAN-13 12:00:00 AM', 'Insurance'),
(3, 'Roy', 'Thomas', 700000, '01-FEB-13 12:00:00 AM', 'Banking'),
(4, 'Tom', 'Jose', 600000, '01-FEB-13 12:00:00 AM', 'Insurance'),
(5, 'Jerry', 'Pinto', 650000, '01-FEB-13 12:00:00 AM', 'Insurance'),
(6, 'Philip', 'Mathew', 750000, '01-JAN-13 12:00:00 AM', 'Services'),
(7, 'TestName1', '123', 650000, '01-JAN-13 12:00:00 AM', 'Services'),
(8, 'TestName2', 'Lname%', 600000, '01-FEB-13 12:00:00 AM', 'Insurance');

select * from Employee;

create table Incentive(
Employee_ref_id int,
Incentive_date varchar(10),
Incentive_amount int,
foreign key (Employee_ref_id) references Employee(Employee_id)
);

drop table Incentive;

insert into Incentive values
(1,"01-FEB-13",5000),
(2,"01-FEB-13",3000),
(3,"01-FEB-13",4000),
(1,"01-JAN-13",4500),
(2,"01-JAN-13",3500);

select * from Incentive;


-- a) Get First_Name from employee table using Tom name “Employee Name”.

select First_name as Employee_Name from Employee
where First_name="Tom";

-- b) Get FIRST_NAME, Joining Date, and Salary from employee table.

select First_name, Joining_date, Salary from Employee;

-- c) Get all employee details from the employee table order by First_Name Ascending and Salary descending?

select * from Employee
order by First_name asc;

select * from Employee
order by Salary desc;

-- d) Get employee details from employee table whose first name contains ‘J’.

select * from Employee
where First_name like "%J%";

-- e) Get department wise maximum salary from employee table order by salary ascending?

select Department,max(Salary) as Max_Salary from Employee
group by Department
order by Max_Salary asc;

-- f) Select first_name, incentive amount from employee and incentives table for those employees who have incentives and incentive amount greater than 3000

select First_name, Incentive_amount from Employee, Incentive
where Employee_id=Employee_ref_id and Incentive_amount>3000;

-- g) Create After Insert trigger on Employee table which insert records in view table

create table View_table(
Employee_id int primary key,
First_name text,
Last_name text,
Salary int,
Joining_date varchar(25),
Department text
);

create trigger insert_records
after insert
on Employee
for each row
insert into View_table values
(new.Employee_id, new.First_name, new.Last_name, new.Salary, new.Joining_date, new.Department);

insert into Employee values
(9, 'James', 'Abraham', 1000000, '01-JAN-13 12:00:00 AM', 'Banking');

select * from Employee;
select * from View_table;
