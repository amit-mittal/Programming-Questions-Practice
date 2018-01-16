import java.util.Scanner;
import java.lang.*;

class div_7
{
	public static void main(String args[])
	{
		System.out.print("Enter upto which number you want multiple of 7: ");

		try
		{		
			Scanner obj=new Scanner(System.in);
			
			String val=obj.nextLine();
			int v=Integer.parseInt(val);
			
			for(int i=1;i<v;++i)
			{
				if(i%7==0)
					System.out.println(i);
			}
		}
		catch(NumberFormatException e)
		{
			System.out.println("Invalid Data Type");
			System.out.println(e.getStackTrace());
			System.out.println(e.getMessage());
		}
	}
}
