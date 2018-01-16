import java.util.*;
import java.io.*;
public class filereader{
public static void  main(String ar[]) throws IOException
{
  
Scanner sc = new Scanner(System.in);
String  f1 = sc.nextLine();
String f2 = sc.nextLine();
       FileInputStream f11=new FileInputStream(f1);
        BufferedInputStream  bi=new BufferedInputStream(f11);


FileOutputStream f3=new FileOutputStream(f2);
       BufferedOutputStream  bo=new BufferedOutputStream(f3);
     // is.skip(500);
       
        boolean eof=false;
        int bc=0;
        while(!eof)
        {
         int c=bi.read();
         if(c==-1)
         eof=true;
         else{
//System.out.println(c);
       bo.write(c);
         ++bc;
	}
         }
  /* String  byteread=String.valueOf(bc);

         byteread+="bytes were read\n";
       bo.write(byteread.getBytes(),0,byteread.length());
         System.out.println(bc + " bytes where read");
*/         //is.close();
       bo.close();
      bi.close();
    
}
}

