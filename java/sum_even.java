import java.util.Scanner;

class sum_even
{
	public static void main(String args[])
	{
		System.out.print("Enter how many even numbers sum you want: ");
		Scanner obj=new Scanner(System.in);
		
		int val=obj.nextInt();
		int sum=0;
		
		for(int i=1;i<=val;++i)
			sum+=(i*2);
			
		System.out.println("Sum is: "+sum);
	}
}
