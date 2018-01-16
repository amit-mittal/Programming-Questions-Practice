//Reading characters
import java.io.*;
class  Read {
public static void main(String sr[])  throws IOException
{
char c='0';
BufferedReader b=new BufferedReader(new InputStreamReader(System.in));
System.out.println("enter  q to quit");
while(c!='q')
{
 c=(char)b.read();
 System.out.print(c);
 }
 }}

