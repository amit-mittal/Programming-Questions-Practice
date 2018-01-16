import java.io.*;

public class push {
public static void main(String ar[]) throws IOException{

  ByteArrayOutputStream os=new ByteArrayOutputStream();
   String s="JAVA VIRTUAl MACHINE";

   for(int i=0;i<s.length();i++)
   os.write(s.charAt(i));

   System.out.println("outputStream" + os);
   System.out.println("outputStream size" + os.size());

  ByteArrayInputStream bi=new ByteArrayInputStream(os.toByteArray());
  PushbackInputStream pi=new PushbackInputStream(bi);

  char ch=(char)pi.read();
  System.out.println("First character is : " + ch);

   pi.unread((int)'t');
   int c=pi.available();
   byte bf[]=new byte[c];
   for(int i=0;i<c;i++)
   bf[i]=(byte) pi.read();
   System.out.println("They are" + new String(bf));

   }
   }



