<?php
$a=new mysqli("localhost","root","","student");
if($a->connect_error)
{
    die("connection failed").$a->connect_error;
}
$b="create table student2023(rollno int(2) primary key,name varchar(20) not null,mark1 int(2),mark2 int(2),mark3 int(2))";
if($a->query($b)===TRUE)
{
    echo"table created";
}
else
{
    echo"connection failed".$a->connect_error;
}
$a->close();
?>