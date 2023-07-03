package calculater;
public class Div implements Base
{
	int a,b;
	public Div(int a,int b)
	{
		this.a=a;
		this.b=b;
	}
	public void div()
	{
		System.out.println("div of"+a+"/"+b+"="+(a/b));
	}
	public void add(){}
	public void sub(){}
	public void mul(){}
}
	
