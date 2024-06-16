show databases;
use bank;

create database thapabhai;
use thapabhai;
select database();

create table thapabhai
(
	roll_no int not Null,
    name varchar(25)
);
show tables; 
desc thapabhai; -- to show the description of the table;  
show columns from thapabhai;  -- alternate of descc
select * from thapabhai;
drop table thapabhai;
drop database thapabhai;   