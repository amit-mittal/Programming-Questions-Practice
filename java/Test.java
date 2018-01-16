class MyException extends Exception {
public MyException(String msg){
super(msg);
}
}

public class Test {

static int  divide(int first,int second) throws MyException{ 
  if(second==0) 
  throw new MyException("can't be divided by zero");
return first/second;
 }

 public static void main(String[] args) {
  try {
System.out.println(divide(4,0));
  }
catch (MyException exc) {
exc.printStackTrace();
  }
  }
}