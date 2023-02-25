<?php
$a=new mysqli("localhost","root","","");
if($a->connect_error)
{
die("connect error").$a->connect_error;
}
$b="create database student";
if($a->query($b)===TRUE)
{
echo"database created";
}
else
{
echo"connection error".$a->connect_error;
}
$a->close();
?>

