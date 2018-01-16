import java.io.*;
class filedemo
{
	public static void main(String args[])
	{
try{
	File f=new File("\\Text");
	System.out.println("parent directory name :"+f.getParent());
	System.out.println("file name is :"+f.getName());
	System.out.println("file path is :"+f.getPath());
	if(f.exists())
	System.out.println("file Exist" );
	else
	System.out.println("file Not  Exist" );
	System.out.println("file last modified on"+ f.lastModified());
	File f2=new File("c:\\s");
	File f3= new File("D:\\Programs\\core java\\Java Mona mam program\\javaprog\\FileIO\\file\\Filter.java");
	File f1=new File("filedemo.txt");
	f1.createNewFile();
System.out.println("file name is :"+f1.getName());
	//File f1=new File(f2,"H.txt");
System.out.println(f1);
System.out.println(f2);

System.out.println("file name is :"+f1.getName());
System.out.println("file name is aaa:"+f2.getName());
System.out.println("file path is :"+f1.getPath());
System.out.println("parent directory name :"+f1.getParent());
	if(f2.exists())
		System.out.println("file Exist" );
	else
		System.out.println("file Not  Exist" );
	if(f2.isFile())
	System.out.println("file is an ordinary file" );
	else
System.out.println("file is not a file" );
	if(f2.isDirectory())
		System.out.println("file is an Directory file" );
else
System.out.println("Not a Directory " );
	
	if(f3.canRead())
		System.out.println("file is read only file" );
	if(f1.canWrite())
		System.out.println("file is Writable  file" );
	System.out.println("file last modified on"+ f1.lastModified());
}
catch(IOException ie)
{}
}
}