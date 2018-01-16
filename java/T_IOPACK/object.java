import java.io.*;
import java.util.*;
public class object{
public static void main(String ar[]) throws IOException,ClassNotFoundException,Exception{
	File f=new File("test.txt");
	FileOutputStream of=new FileOutputStream(f);
	ObjectOutputStream  do1=new ObjectOutputStream(of);
	test1  t1=new test1(true,9,'A',0.0001,"java");
	test2  t2=new test2();
	String t3="this is  atest";
	Date t4=new Date();
	do1.writeObject(t1);
System.out.println(t1.n);
	do1.writeObject(t2);
	do1.writeObject(t3);
	do1.writeObject(t4);
	do1.close();
	of.close();
	FileInputStream fi=new FileInputStream(f);
	ObjectInputStream  is=new ObjectInputStream(fi);
	Object t5=new Object();
	 t5=is.readObject();
	System.out.println("dfdsfds" + t5);
	//System.out.println("ttttt" + t5.n); 	
	System.out.println(is.readObject());


	System.out.println(is.readObject());
	System.out.println(is.readObject());
	//System.out.println(is.readObject());



fi.close();
is.close();
//f.delete();
}}

class test1 implements Serializable{
boolean n;
int i;
char c;
double d;String s;
test1(boolean n,int i,char c,double d,String s)
{
this.n=n;
this.i=i;
this.c=c;
	this.d=d;
	this.s=s;
	}
	public String toString(){
	String r=String.valueOf(n)+ " " ;
	r+= String.valueOf(i)+ " " ;
	r+=String.valueOf(c)+ " " ;
	r+=String.valueOf(d)+ " " ;
	r+=String.valueOf(s)+ " " ;
	return r;
	}}
	class test2 implements Serializable{
	int i;
	test1 t1;
	test1 t2;
test2()
{
i=0;
	t1=new test1(true,2,'j',1.234,"java");
	t2=new test1(false,7,'J',2.234,"JAVA");
}
public String toString(){
String r=String.valueOf(i)+ " " ;
r+= t1.toString()+ " " ;
r+=t2.toString()+ " " ;
return r;
}}


