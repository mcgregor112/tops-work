task : 2

create table person_information ( first_name varchar(50), last_name varchar(50), address varchar(100), city varchar(50), age int );

describe person_information;
+------------+--------------+------+-----+---------+-------+
| Field      | Type         | Null | Key | Default | Extra |
+------------+--------------+------+-----+---------+-------+
| first_name | varchar(50)  | YES  |     | NULL    |       |
| last_name  | varchar(50)  | YES  |     | NULL    |       |
| address    | varchar(100) | YES  |     | NULL    |       |
| city       | varchar(50)  | YES  |     | NULL    |       |
| age        | int          | YES  |     | NULL    |       |
+------------+--------------+------+-----+---------+-------+

insert into person_information (first_name, last_name, address, city, age) values ('mickey', 'mouse', '123 fantasy way', 'anaheim', 73), ('bat', 'man', '321 cavern ave', 'gotham', 54), ('wonder', 'woman', '987 truth way', 'paradise', 39), ('donald', 'duck', '555 Quack Street', 'mallard', 65), ('bugs', 'bunny', '567 Carrot Street', 'rascal', 58), ('wiley', 'coyote', '999 acme way', 'canyon', 61), ('cat', 'woman', '234 purrfect street', 'hairball', 32), ('tweety', 'bird', '543', 'itottaw', 28);

select * from person_information;

+------------+-----------+---------------------+----------+------+
| first_name | last_name | address             | city     | age  |
+------------+-----------+---------------------+----------+------+
| mickey     | mouse     | 123 fantasy way     | anaheim  |   73 |
| bat        | man       | 321 cavern ave      | gotham   |   54 |
| wonder     | woman     | 987 truth way       | paradise |   39 |
| donald     | duck      | 555 Quack Street    | mallard  |   65 |
| bugs       | bunny     | 567 Carrot Street   | rascal   |   58 |
| wiley      | coyote    | 999 acme way        | canyon   |   61 |
| cat        | woman     | 234 purrfect street | hairball |   32 |
| tweety     | bird      | 543                 | itottaw  |   28 |
+------------+-----------+---------------------+----------+------+