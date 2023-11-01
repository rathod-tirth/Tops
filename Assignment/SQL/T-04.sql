-- (T-04) Create table : Salesperson and Customer

use task;

create table Salesperson(
SNo int primary key,
SName text,
city text,
comm varchar(5)
);

insert into Salesperson values
(1001,"Peel","London",.12),
(1002,"Serres","San Jose",.13),
(1004,"Motika","London",.11),
(1007,"Rafkin","Barcelona",.15),
(1003,"Axekrod","New York",.1);

select * from Salesperson;

create table Customer(
CNM int primary key,
CName text,
city text,
rating int,
SNo int,
foreign key (SNo) references Salesperson(SNo)
);

insert into Customer values
(201,"Hoffman","London",100,1001),
(202,"Givonne","Roe",200,1003),
(203,"Liu","San Jose",300,1002),
(204,"Grass","Barcelone",100,1002),
(206,"Clemens","London",300,1007),
(207,"Pereira","Roe",100,1004);

select * from Customer;


-- a) All orders for more than $1000.

select * from customer
where rating>100;

-- b) Names and cities of all salespeople in London with commission above 0.12

select SName, City from salesperson
where comm>.12 and city="London";

-- c) All salespeople either in Barcelona or in London

select * from Salesperson
where city="Barcelone" or city="London";

-- d) All salespeople with commission between 0.10 and 0.12. (Boundary values should be excluded).

select * from Salesperson
where comm > 0.10 and comm < 0.12;

-- e) All customers excluding those with rating <= 100 unless they are located in Roe

select * from customer
where rating>100 or city="Roe";