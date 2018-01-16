import java.io.*;
public class  line
 {
public static void  main(String ar[]) throws IOException{
FileReader  f=new FileReader("data.java");
LineNumberReader  in=new LineNumberReader(f);
String s;
while((s=in.readLine())!=null)
{
System.out.println(in.getLineNumber() + "." + s);
}
}
}



