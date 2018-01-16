import java.io.*;

class FileInputStreamDemo{
	public static void main(String args[]) throws IOException{
		InputStream f=new FileInputStream("/home/pirate/java/T_IOPACK/a");
		int r=0;
		
		r=f.read();
		while(r!=-1){
			System.out.print((char)r);
			r=f.read();
		}
		
		InputStream f1=new FileInputStream("/home/pirate/java/T_IOPACK/a");
		byte a[]=new byte[10];
		
		System.out.println(f.read(a));
		System.out.println(f1.read(a));
		
		for(int i=0;i<a.length;++i){
			System.out.println((char)a[i]);
		}
	}
}
