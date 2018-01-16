import java.io.*;
public class random {
public static void main(String ar[]) throws IOException
{
RandomAccessFile f=new RandomAccessFile("test.txt","rw");
f.seek(1000);
f.writeBoolean(false);
f.writeInt(122334);
f.writeChar('l');
f.writeDouble(122.33);
f.seek(10);
System.out.println(f.readBoolean());
System.out.println(f.readInt());
System.out.println(f.readChar());
System.out.println(f.readDouble());
//System.out.println(f.readBoolean());
f.close();
}}








