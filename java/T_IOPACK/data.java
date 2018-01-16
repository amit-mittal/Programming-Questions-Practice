import java.io.*;
public class data {
public static void main(String ar[]) throws IOException{
	File f=new File("Hello.txt");
	FileOutputStream of=new FileOutputStream(f);
	DataOutputStream  do1=new DataOutputStream(of);
	do1.writeBoolean(true);
	do1.writeInt(122334);
	do1.writeChar('l');
	do1.writeDouble(122.33);
	System.out.println(do1.size() + "bytes were  written");
do1.close();
of.close();
	FileInputStream fi=new FileInputStream(f);
	DataInputStream  di=new DataInputStream(fi);
	System.out.println(di.readBoolean());
	System.out.println(di.readInt());
	System.out.println(di.readChar());
	System.out.println(di.readDouble());
	di.close();
	fi.close();

	}

	}
