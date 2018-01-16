import java.util.Scanner;

class Main
{
	public static void main(String args[])
	{
		Scanner obj=new Scanner(System.in);
		int val=obj.nextInt();
		
		while(val!=42)
		{
			System.out.println(val);
			val=obj.nextInt();
		}
	}
}
