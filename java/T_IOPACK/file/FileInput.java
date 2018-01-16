import java.io.*;

class PrintFile
{
void show() throws IOException
{
int size;
File f = new File("Hello3.txt");
f.createNewFile();
InputStream fileobject = new FileInputStream("HelloWorld.txt");
System.out.println("Bytes available to read :" + (size=fileobject.available()));
//String text[] = new String[200];
char text[] = new char[200];
for(int count =0;count<size;count++)
{
text[count] = ( (char)fileobject.read());
System.out.print(text[count]);
}
System.out.println(" ");
fileobject.close();
}
}

class FileInput
{
public static void main(String args[]) throws IOException
{
PrintFile obj = new PrintFile();
obj.show();
}
}
