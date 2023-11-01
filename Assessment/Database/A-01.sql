-- Assessment 

use task;

create table Product(
pro_id int primary key,
pro_name text,
pro_price int,
pro_com int
);

insert into product values
(101,"Mother Board",3200.00,15),
(102,"Key Board",450.00,16),
(103,"ZIP drive",250.00,14),
(104,"Speaker",550.00,16),
(105,"Monitor",5000.00,11),
(106,"DVD drive",900.00,12),
(107,"CD drive",800.00,12),
(108,"Printer",2600.00,13),
(109,"Refill Cartridge",350.00,13),
(110,"Mouse",250.00,12);

select * from product;


-- 1) Write sql query to find the items whose prices are higher than or equal 250rs. Order the result by product price in descending, then product name in ascending. Return pro_name and pro_price

select pro_name, pro_price from product
where pro_price>250
order by pro_price desc, pro_name asc;

-- 2) Write a sql query to find the cheapest item. Return pro_name and pro_price.

select pro_name, pro_price from product
where pro_price= (select min(pro_price) from product);

-- 3) Write the sql query to calculate the average price of the items for each company. Return average price and company code.

select avg(pro_price) as Average_Price, Pro_com from product
group by pro_com;

-- 4) Write the sql query to find the average total for all the product mention in the table

select avg(pro_price) as Average_Price from product;