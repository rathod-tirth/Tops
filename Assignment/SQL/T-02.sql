-- (T-02) Create table given below

use task;

create table personal_info(
First_Name text,
Last_Name text,
Address varchar(50),
City text,
Age int
);

insert into personal_info values
("Mickey","Mouse","123 Fantasy Way","Anaheim",73),
("Bat","Man","321 Cavern Ave","Gotham",54),
("Wonder","Woman","987 Truth Way","Paradise",39),
("Donald","Duck","555 Quack Street","Mallard",65),
("Bugs","Bunny","567 Carrot Street","Rascal",58),
("Wiley","Coyote","999 Acme Way","Canyon",61),
("Cat","Woman","234 Purrfect Street","Hairball",32),
("Tweety","Bird","543","Itottaw",28);

select * from personal_info;