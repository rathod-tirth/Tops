-- (T-1) Create Table : Student and Exam

create database Task;

use task;

create table Student(
Rollno int primary key,
Name text,
Branch text
);

insert into Student values
(1, "Jay", "Computer Science"),
(2, "Suhani", "Electronic and Com"),
(3, "Kriti", "Electronic and Com");

create table Exam(
Rollno int,
S_code varchar(10),
Marks int,
P_code varchar(5),
foreign key (Rollno) references Student(Rollno)
);

insert into Exam values
(1, "CS11", 50, "CS"),
(1, "CS12", 60, "CS"),
(2, "EC101", 66, "EC"),
(2, "EC102", 70, "ES"),
(3, "EC101", 45, "ES"),
(3, "EC102", 50, "ES");

select * from Student;
select * from Exam;
