import java.io.*;

public class FileOutputStreamDemo{
	public static void main(String args[]) throws IOException{
		OutputStream f=new FileOutputStream("bytefile");
		String a="This file is created using fileoutputstream";
		
		byte b[]=a.getBytes();
		
		for(int i=0;i<b.length;++i){
			f.write(b[i]);
		}
		f.close();
		
		OutputStream f1=new FileOutputStream("bytefile",true);//this is to open the file in appen mode
		String a1="This file is created using fileoutputstream";
		
		byte b1[]=a1.getBytes();
		
		f1.write(b1);
		
		f1.close();
	}
}
