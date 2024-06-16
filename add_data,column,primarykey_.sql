create database prctice_students;
use prctice_students ; 

create table students_data
(
  name varchar(50) not null default 'noName', 
  age int not null default 0,
  rollno int not null auto_increment,
  primary key(rollno)
  -- primary key(name) syntax for add the p_key at a table making;
 );

insert into students_data(name,age) values("parth",10); 

select * from students_data;
alter table students_data add rollno varchar(55) primary key;
alter table students_data drop column rollno;
show errors;
desc students_data; 

drop table students_data;