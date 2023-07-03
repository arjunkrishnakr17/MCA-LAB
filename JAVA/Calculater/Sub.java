package calculater;
public class Sub implements Base
{
	int a,b;
	public Sub(int a,int b)
	{
		this.a=a;
		this.b=b;
	}
	public void sub()
	{
		System.out.println("sub of"+a+"-"+b+"="+(a-b));
	}
	public void add(){}
	public void div(){}
	public void mul(){}
}
	
