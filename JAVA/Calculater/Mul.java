package calculater;
public  class Mul implements Base
{
	int a,b;
	public Mul(int a,int b)
	{
		this.a=a;
		this.b=b;
	}
	public void mul()
	{
		System.out.println("mul of"+a+"*"+b+"="+(a*b));
	}
	public void sub(){}
	public void div(){}
	public void add(){}
}
	
