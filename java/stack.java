class stack{
	int top;
	int arr[]=new int[20];
	
	stack()
	{
		top=-1;
	}
	
	void push(int val)
	{
		arr[++top]=val;
	}
	
	int pop()
	{
		return arr[top--];
	}
}

class teststack{
	public static void main(String args[]){
		stack obj=new stack();
	
		for(int i=0;i<10;++i)
			obj.push(i);
	
		System.out.println("Printing the whole stack");
		
		for(int i=0;i<10;++i)
			System.out.println(obj.pop());
	}
}
