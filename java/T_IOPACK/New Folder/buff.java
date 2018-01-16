import java.io.*;
public class buff{
public static void  main(String ar[]) throws IOException
{

       
       FileInputStream f1=new FileInputStream("BArray1.java");
       FileInputStream f2=new FileInputStream("Write.java");
      SequenceInputStream is =new SequenceInputStream(f1,f2);
       BufferedInputStream  bi=new BufferedInputStream(is);


FileOutputStream f3=new FileOutputStream("test.txt");
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
         bo.write(byteread.getBytes(),0,byteread.length());
         System.out.println(bc + " bytes where read");
         //is.close();
       bo.close();
      bi.close();
    f1.close();
   f2.close();

}
}

/*
String cnewfile="";
String css="Name.Harsh.Sharma";
char[] cff=css.toCharArray();

char []cr=new char[cff.length];
for(int cf=(cff.length-1),co=0;cf>=0;cf--,co++)
{
cr[co]=cff[cf];
cnewfile+=cff[cf];
System.out.println(cr[co]);
}

String cpath="";

int ci1=cnewfile.indexOf('.');

char[] cff1=cnewfile.toCharArray();

String cfilename11=cnewfile;
System.out.println("Filename :  "+cnewfile);





for(int ck1=0;ck1<cff1.length;ck1++)
{
if(ck1<ci1)
cpath+=cff1[ck1];
}

System.out.println("Path= : "+cpath);

char[]cpathar=cpath.toCharArray();
char[]cnpathar=new char[cpathar.length];

cpath="";
for(int cf=(cpathar.length-1),co=0;cf>=0;cf--,co++)
{
cnpathar[co]=cpathar[cf];
cpath+=cpathar[cf];

}

System.out.println("Actual Path  :   ."+cpath);






         }

}

*/