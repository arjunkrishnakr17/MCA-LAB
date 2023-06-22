import graphics.*;
import java.util.*;
class Main
{
	public static void main(String a[])
	{
		Scanner obj=new Scanner(System.in);
		System.out.println("enter length: ");
		int l=obj.nextInt();
		System.out.println("enter breadth: ");
		int b=obj.nextInt();
		Rectangle rect=new Rectangle(l,b);
		rect.perimeter();
		rect.area();
		System.out.println("enter radius: ");
		int r=obj.nextInt();
		Circle c=new Circle(r);
		c.perimeter();
		c.area();
		
	}
}		
