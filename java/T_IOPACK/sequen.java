import java.io.*;
public class sequen{
public static void  main(String ar[]) throws IOException
{
   //FileInputStream f3=new FileInputStream("data.java");
       FileInputStream f1=new FileInputStream("testing.java");
     FileInputStream f2=new FileInputStream("Write.java");
  SequenceInputStream is =new SequenceInputStream(f1,f2);
       BufferedInputStream  bi=new BufferedInputStream(is);

	FileOutputStream f3=new FileOutputStream("abcd.doc");
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
       bo.write((char)c);
         ++bc;
	}
         }
   String  byteread=String.valueOf(bc);
         byteread+="bytes were read\n";
byte b[] = new byte[100];
	b=byteread.getBytes();

       bo.write(b,0,byteread.length());

  System.out.println(b);
         System.out.println(bc + " bytes where read");
         //is.close();
       bo.close();
      bi.close();
    f1.close();
//   f2.close();

}
}
