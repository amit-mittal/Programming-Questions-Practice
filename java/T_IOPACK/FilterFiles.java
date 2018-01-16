//enter "." for directory name and java to give all java files

import java.io.*;

  class OnlyExt implements FilenameFilter{

  String ext;

 

 public OnlyExt(String ext){
 
  this.ext="." + ext;
  }
  


  public boolean accept(File dir,String name){
 
  return name.endsWith(ext);
  }
}

 
public class FilterFiles{
 
 public static void main(String args[]) throws IOException{
  BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
  System.out.println("Please enter the directory name : ");

  String dir = in.readLine();

  System.out.println("Please enter file type : ");

    String extn = in.readLine();
 
   File f = new File(dir);

  FilenameFilter ff = new OnlyExt(extn);
  
  String s[] = f.list(ff);


  for (int i = 0; i < s.length; i++){
 
  System.out.println(s[i]);

  }
 
  }

} 