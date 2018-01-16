class ThrowDemo
{
	static void demoproc()
	{
		try
		{
			throw new NullPointerException("demo");//this constructor sets the message also i.e as demo
		}
		catch(NullPointerException e)
		{
			System.out.println("In catch in demoproc()");
			throw e;
		}
	}
	
	public static void main(String args[])
	{
		try
		{
			demoproc();
		}
		catch(NullPointerException e)
		{
			System.out.println("Recaught in main: " + e);
			System.out.println(e.getMessage());
		}
		
		try
		{
			int d=0;
			int val=42/d;
		}
		catch(ArithmeticException e)
		{
			System.out.println("\nin catch block");
		}
		finally
		{
			System.out.println("in finally block");
		}
	}
}
