import java.io.*;
public class chararr{
public static void main(String sr[]) throws IOException 
{
  CharArrayWriter  os=new CharArrayWriter();
  String s="Java virtual machine";
  for(int i=0;i<s.length();i++)
	 os.write(s.charAt(i));
 //System.out.println("outputStream: " + os);
System.out.println("size: " + os.size());
CharArrayReader  ia=new CharArrayReader(os.toCharArray())  ;
int ch=0;
StringBuffer sb=new StringBuffer(" ");
while((ch=ia.read())!=-1)
{
sb.append((char)ch);
System.out.println("They are:" + sb);
}
s= sb.toString();
System.out.println(s.length()+"characters are read");

System.out.println("They are:" + sb);
}}


