
<?php
$a=new mysqli("localhost","root","","student");
if($a->connect_error)
{
    die("connect error").$a->connect_error;
}
$b="select * from student2023";
$c=$a->query($b);
echo"<table border=1 align=center>";
        echo"<tr><td>ROLLNO</td><td>NAME</td><td>MARK1</td><td>MARK2</td><td>MARK3</td>";
if($c->num_rows>0)
{
    while($d=$c->fetch_assoc())
    {
        echo"<tr><td>$d[rollno]</td>.<td>$d[name]</td>.<td>$d[mark1]</td>.<td>$d[mark2]</td>.<td>$d[mark3]</td>";
    }
}
else
{
    echo"connection failed".$a->connect_error;
}
echo"</table>";
$a->close();