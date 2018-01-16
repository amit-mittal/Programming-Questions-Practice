import java.io.*;

public class BArray1
{
public static void main(String args[])throws IOException
{
String str="";

String s ="Robin is very Good..... from Andhaman.......";

byte n[]= s.getBytes();

ByteArrayInputStream B = new ByteArrayInputStream(n);

for(int i=0;i<4;i++)
{
int c,k=1;
System.out.println("value of i" + i);
        while((c=B.read())!=-1)
        {
                k++;
               if((i==1)&&(k==10))
                {
	  B.mark(k);

              System.out.println("Marking finished");
               }

                if (i==0)
                {
                System.out.print((char)c);
                }
                else
                {
                //B.skip(2);
	
                System.out.print(Character.toUpperCase((char)c));
	}

        }
  System.out.println("");
  B.reset();

if(B.markSupported())
System.out.println("Yes,Supported");
else
System.out.println("No");
}
}

}