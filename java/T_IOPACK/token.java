import java.io.*;
public class token{
public static void  main(String ar[]) throws IOException
{
BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
StreamTokenizer is=new StreamTokenizer(br);
is.commentChar('#');
boolean eof=false;
do{
int t=is.nextToken();
switch(t)
{
case StreamTokenizer.TT_EOF:
System.out.println("EOF encountered");
eof=true;
break;
case StreamTokenizer.TT_EOL:
System.out.println("EOL encountered");
eof=true;
break;
case StreamTokenizer.TT_WORD:
System.out.println("word:" + is.sval);
eof=true;
break;
case StreamTokenizer.TT_NUMBER:
System.out.println("Number: " + is.nval);
eof=true;
break;
default:
System.out.println((char)t + "encountered");
if(t=='!') eof =true;
}}while(!eof);
}}

