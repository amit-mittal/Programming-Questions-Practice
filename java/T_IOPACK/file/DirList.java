	// Using directories.
	import java.io.File;
	class DirList {
	public static void main(String args[]) {
	//String dirname = "test";
	//String dirname = "..";
	String dirname = "\\xyz";
	File f1 = new File(dirname);
	if (f1.isDirectory()) {
	System.out.println("Directory of " + dirname);
	String s[] = f1.list();
	for (int i=0; i < s.length; i++) {
	File f = new File(dirname + "/" + s[i]);
	if (f.isDirectory()) {
	System.out.println(s[i] + " is a directory");
	} else {
	System.out.println(s[i] + " is a file");

}
}
}
File f2 = new File("newdir");
f2.mkdir();
if(f2.isDirectory())
{System.out.println(" is a directory");
	}
else
{System.out.println(" is not a directory");
	} }}