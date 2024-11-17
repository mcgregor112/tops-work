task : 3

1 create table named employee and incentive 

create table employee ( employee_id int primary key, first_name varchar(50), last_name varchar(50), salary int , joining_date datetime, department varchar(50));

describe employee;
+--------------+-------------+------+-----+---------+-------+
| Field        | Type        | Null | Key | Default | Extra |
+--------------+-------------+------+-----+---------+-------+
| employee_id  | int         | NO   | PRI | NULL    |       |
| first_name   | varchar(50) | YES  |     | NULL    |       |
| last_name    | varchar(50) | YES  |     | NULL    |       |
| salary       | int         | YES  |     | NULL    |       |
| joining_date | datetime    | YES  |     | NULL    |       |
| department   | varchar(50) | YES  |     | NULL    |       |
+--------------+-------------+------+-----+---------+-------+

insert into employee (employee_id, first_name, last_name, salary, joining_date, department) values (1, 'john', 'abraham', 1000000, '2013-01-01 12:00:00', 'banking'), (2, 'michael', 'clarke', 800000, '2013-01-01 12:00:00', 'insurance'), (3, 'roy', 'thomas', 700000, '2013-02-01 12:00:00', 'banking'), (4, 'tom', 'jose', 600000, '2013-02-01 12:00:00', 'insurance'), (5, 'jerry', 'pinto', 650000, '2013-02-01 12:00:00', 'insurance'),   (6, 'philip', 'mathew', 750000, '2013-01-01 12:00:00', 'services'), (7, 'testname1', '123', 650000, '2013-01-01 12:00:00', 'services'), (8, 'testname2', 'lname%', 600000, '2013-02-01 12:00:00', 'insurance');

select * from employee;

+-------------+------------+-----------+---------+---------------------+------------+
| employee_id | first_name | last_name | salary  | joining_date        | department |
+-------------+------------+-----------+---------+---------------------+------------+
|           1 | john       | abraham   | 1000000 | 2013-01-01 12:00:00 | banking    |
|           2 | michael    | clarke    |  800000 | 2013-01-01 12:00:00 | insurance  |
|           3 | roy        | thomas    |  700000 | 2013-02-01 12:00:00 | banking    |
|           4 | tom        | jose      |  600000 | 2013-02-01 12:00:00 | insurance  |
|           5 | jerry      | pinto     |  650000 | 2013-02-01 12:00:00 | insurance  |
|           6 | philip     | mathew    |  750000 | 2013-01-01 12:00:00 | services   |
|           7 | testname1  | 123       |  650000 | 2013-01-01 12:00:00 | services   |
|           8 | testname2  | lname%    |  600000 | 2013-02-01 12:00:00 | insurance  |
+-------------+------------+-----------+---------+---------------------+------------+

create table incentive ( employee_ref_id int, incentive_date date, incentive_amount int, foreign key incentive (employee_ref_id) references employee (employee_id));

describe incentive;
+------------------+------+------+-----+---------+-------+
| Field            | Type | Null | Key | Default | Extra |
+------------------+------+------+-----+---------+-------+
| employee_ref_id  | int  | YES  | MUL | NULL    |       |
| incentive_date   | date | YES  |     | NULL    |       |
| incentive_amount | int  | YES  |     | NULL    |       |
+------------------+------+------+-----+---------+-------+

insert into incentive (employee_ref_id, incentive_date, incentive_amount) values (1, '2013-02-01', 5000), (2, '2013-02-01', 3000), (3, '2013-02-01', 4000), (1, '2013-01-01', 4500), (2, '2013-01-01',3500);

select * from incentive;
+-----------------+----------------+------------------+
| employee_ref_id | incentive_date | incentive_amount |
+-----------------+----------------+------------------+
|               1 | 2013-02-01     |             5000 |
|               2 | 2013-02-01     |             3000 |
|               3 | 2013-02-01     |             4000 |
|               1 | 2013-01-01     |             4500 |
|               2 | 2013-01-01     |             3500 |
+-----------------+----------------+------------------+

a) Get First_Name from employee table using Tom name “Employee Name”.

Answer - select first_name from employee where first_name = 'tom';
+------------+
| first_name |
+------------+
| tom        |
+------------+

b) Get FIRST_NAME, Joining Date, and Salary from employee table.

Answer - select first_name, joining_date, salary from employee;
+------------+---------------------+---------+
| first_name | joining_date        | salary  |
+------------+---------------------+---------+
| john       | 2013-01-01 12:00:00 | 1000000 |
| michael    | 2013-01-01 12:00:00 |  800000 |
| roy        | 2013-02-01 12:00:00 |  700000 |
| tom        | 2013-02-01 12:00:00 |  600000 |
| jerry      | 2013-02-01 12:00:00 |  650000 |
| philip     | 2013-01-01 12:00:00 |  750000 |
| testname1  | 2013-01-01 12:00:00 |  650000 |
| testname2  | 2013-02-01 12:00:00 |  600000 |
+------------+---------------------+---------+

c) Get all employee details from the employee table order by First_Name
Ascending and Salary descending?

Answer - select * from employee order by first_name asc, salary desc;
+-------------+------------+-----------+---------+---------------------+------------+
| employee_id | first_name | last_name | salary  | joining_date        | department |
+-------------+------------+-----------+---------+---------------------+------------+
|           5 | jerry      | pinto     |  650000 | 2013-02-01 12:00:00 | insurance  |
|           1 | john       | abraham   | 1000000 | 2013-01-01 12:00:00 | banking    |
|           2 | michael    | clarke    |  800000 | 2013-01-01 12:00:00 | insurance  |
|           6 | philip     | mathew    |  750000 | 2013-01-01 12:00:00 | services   |
|           3 | roy        | thomas    |  700000 | 2013-02-01 12:00:00 | banking    |
|           7 | testname1  | 123       |  650000 | 2013-01-01 12:00:00 | services   |
|           8 | testname2  | lname%    |  600000 | 2013-02-01 12:00:00 | insurance  |
|           4 | tom        | jose      |  600000 | 2013-02-01 12:00:00 | insurance  |
+-------------+------------+-----------+---------+---------------------+------------+

d) Get employee details from employee table whose first name contains 'J'.

Answer - select * from employee where first_name like '%j%';
+-------------+------------+-----------+---------+---------------------+------------+
| employee_id | first_name | last_name | salary  | joining_date        | department |
+-------------+------------+-----------+---------+---------------------+------------+
|           1 | john       | abraham   | 1000000 | 2013-01-01 12:00:00 | banking    |
|           5 | jerry      | pinto     |  650000 | 2013-02-01 12:00:00 | insurance  |
+-------------+------------+-----------+---------+---------------------+------------+

e) Get department wise maximum salary from employee table order by salary
ascending?

Answer - select department, max(salary) as max_salary from employee group by department order by max_salary asc;
+------------+------------+
| department | max_salary |
+------------+------------+
| services   |     750000 |
| insurance  |     800000 |
| banking    |    1000000 |
+------------+------------+

f) Select first_name, incentive amount from employee and incentives table for
those employees who have incentives and incentive amount greater than 3000

Answer - select e.first_name, i.incentive_amount from employee e join incentive i on e.employee_id = i.employee_ref_id where i.incentive_amount > 3000;
+------------+------------------+
| first_name | incentive_amount |
+------------+------------------+
| john       |             5000 |
| roy        |             4000 |
| john       |             4500 |
| michael    |             3500 |
+------------+------------------+

