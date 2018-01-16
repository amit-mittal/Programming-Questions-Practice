import java.io.*;
public class data {
public static void main(String ar[]) throws IOException{
File f=new File("Hello.txt");
FileOutputStream do1=new FileOutputStream(f);
DataOutputStream  of=new DataOutputStream(do1);
of.writeLong(5078);
of.writeBoolean(true);
of.writeInt(122334);
of.writeChar('l');
of.writeDouble(122.33);
System.out.println(of.size() + "bytes were  written");
do1.close();
of.close();
FileInputStream fdi=new FileInputStream(f);
DataInputStream  di=new DataInputStream(fdi);
System.out.println(di.readLong());
System.out.println(di.readBoolean());
System.out.println(di.readInt());
System.out.println(di.readChar());
System.out.println(di.readDouble());

di.close();
fdi.close();
//f.delete();

}

}
