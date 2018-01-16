#include<iostream.h>


int main()
{
	long int a,b,c,d,e;
	cin>>a;//to solve this problem, input 2000000 when runing this program
	c=0;d=0;
	for(b=3;b<a;b+=2)
	{
		e=0;
		for(d=2;d*d<=b;d++)
		{
			if(b%d==0)
			{
				e++;
			}
			if(e!=0)
			{
				d=b;
			}
		}
		if(e==0)
		{
			c+=b;
		}
	}
	cout<<c+2;

return 0;
}