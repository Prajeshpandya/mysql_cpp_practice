use prctice_students;
create table data_students(
sid int not null auto_increment primary key , 
	id int not null  ,
    marks int not null ,
    subject varchar(50) ,
    foreign key(id) references data(id)
);
-- for foreign key: the syntax like mentioned upper.

insert into data_students(sid,id,marks,subject) values(1,1,101,"maths");
INSERT INTO data_students (id, marks, subject) VALUES 
(5, 90, 'Physics'),
(6, 20, 'maths'), 
(3, 78, 'Chemistry'), 
(4, 88, 'Biology');

-- inner joint : return that record that matches both tables;
 select * from data,
 data_students 
 where data.id = data_students.id;
 
  select * from data
  join data_students 
  on data.id = data_students.id;
 
 select fname,marks from data  -- here we cant select id directly because its in both fields so we can specofy it 
 join data_students 
 on data.id =  data_students.id;
 
 select fname,age,marks,data.id from data 
 join data_students
 on data.id = data_students.id;

 -- left joint : the common values is printed and also the left side table's all value are printed 
  alter table data add column school varchar(50);
  
 UPDATE data
SET school = "lnp"
WHERE id= 6;

insert into data (fname,lname,age,school) values("p","q",10,"dnsnf");

 select * from data  -- left join example 
 left join data_students
 on data.id = data_students.id;
 
 -- right joint : the common values is printed and also the right side table's all value are printed 

desc data_students;
