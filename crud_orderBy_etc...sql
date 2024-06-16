use prctice_students;

create table data(
id int not null auto_increment,
fname varchar(55),
lname varchar(55),
age int,
primary key(id) 
);

insert into data (fname,lname,age) values ("parth","pandya",20);
update data set age=10 where id=1 and fname = "parth"; -- the key is neccesory to write in safe update mode , otherwise SET SQL_SAFE_UPDATES = 0;
SET SQL_SAFE_UPDATES = 1;
-- update data set age=100 where fname = "parth"; when safe mode off;

delete from data where id=2;
select * from data where age < 30;
select distinct fname from data; -- always return unique value;
desc data;
show errors;


-- order by 
select age from data order by age desc; -- higher first and if icremenatl then age asc;
-- limit 
select age from data order by age asc limit 3; -- higher first and if icremenatl then age asc;
-- like
select fname from data where age like "%5%";  -- return value that consist this "%bfb%"..
select fname from data where fname like "e%";  -- return value that start with a..
-- aggregation 
select max(age) from data;
select sum(age) from data;
select count(age) from data;  --  returns the number of rows in a set
select avg(age) from data;
select fname,lname from data order by id desc limit 1 offset 1 ;
select age from data order by id desc limit 1 offset 1;  -- second highest age in data..
select age from data where age <= 25 && age >= 20;





  