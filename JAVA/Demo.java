import calculater.*;
import java.util.*;

class Demo
{
	public static void main(String args[])
	{
		Scanner obj=new Scanner(System.in);
		System.out.println("enter number 1: ");
		int a=obj.nextInt();
		System.out.println("enter number 2: ");
		int b=obj.nextInt();
		Addition A=new Addition(a,b);
		A.add();
		Sub s=new Sub(a,b);
		s.sub();
		Div d=new Div(a,b);
		d.div();
		Mul m=new Mul(a,b);
		m.mul();
	}
}	
		
