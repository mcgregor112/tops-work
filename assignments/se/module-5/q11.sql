task 1 : create the table name student and exam

create database task1;

create table student (rollno int primary key auto_increment, name varchar(255), branch varchar(255));

 describe student;
+--------+--------------+------+-----+---------+----------------+
| Field  | Type         | Null | Key | Default | Extra          |
+--------+--------------+------+-----+---------+----------------+
| rollno | int          | NO   | PRI | NULL    | auto_increment |
| name   | varchar(255) | YES  |     | NULL    |                |
| branch | varchar(255) | YES  |     | NULL    |                |
+--------+--------------+------+-----+---------+----------------+

 create table exam ( rllno int, s_code varchar(10), marks int, p_code varchar(10), foreign key (rollno) references student(rollno));

 describe exam;
+--------+-------------+------+-----+---------+-------+
| Field  | Type        | Null | Key | Default | Extra |
+--------+-------------+------+-----+---------+-------+
| rollno | int         | YES  | MUL | NULL    |       |
| s_code | varchar(10) | YES  |     | NULL    |       |
| marks  | int         | YES  |     | NULL    |       |
| p_code | varchar(10) | YES  |     | NULL    |       |
+--------+-------------+------+-----+---------+-------+


insert into student (rollno, name, branch) values (1, 'jay', 'computer science'), (2, 'subhani', 'electronic and com'), (3, 'kriti', 'electronic and com');

select * from student;

+--------+---------+--------------------+
| rollno | name    | branch             |
+--------+---------+--------------------+
|      1 | jay     | computer science   |
|      2 | subhani | electronic and com |
|      3 | kriti   | electronic and com |
+--------+---------+--------------------+

insert into exam (rollno, s_code, marks, p_code) values (1, 'cs11', 50, 'cs'), (1, 'cs12', 60, 'cs'), (2, 'ec101', 66, 'ec'), (2, 'ec102', 70,   
 'ec'), (3, 'ec101', 45, 'ec'), (3, 'ec102', 50, 'ec');

 select * from exam ;

+--------+--------+-------+--------+
| rollno | s_code | marks | p_code |
+--------+--------+-------+--------+
|      1 | cs11   |    50 | cs     |
|      1 | cs12   |    60 | cs     |
|      2 | ec101  |    66 | ec     |
|      2 | ec102  |    70 | ec     |
|      3 | ec101  |    45 | ec     |
|      3 | ec102  |    50 | ec     |
+--------+--------+-------+--------+