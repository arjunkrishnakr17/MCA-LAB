<?php
$a=new mysqli("localhost","root","","student");
if($a->connect_error)
{
    die("connection failed").$a->connect_error;
}
$b="insert into  student2023(rollno,name,mark1,mark2,mark3)values(1,'arjun',100,100,100)";
if($a->query($b)===TRUE)
{
    echo"inserted successfully";
}
else
{
    echo"connection failed".$a->connect_error;
}
$a->close();
?>