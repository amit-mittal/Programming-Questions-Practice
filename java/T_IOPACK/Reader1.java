
import java.io.*;
class Reader1 {

  public static void main (String args[])
   {
    StringBuffer s = new StringBuffer();
    char c=0;

    try {
      Reader in = new InputStreamReader(System.in);
      while (c!='q')
{
c= (char)in.read();
        s.append(c);
      }
    }
    catch (Exception e) {
      System.out.println("Error: " + e.toString());
    }
    System.out.println(s);
System.out.println(c);
    
}

} 


