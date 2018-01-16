#include<iostream>
#include<math.h>

using namespace std;

int main()
{

int a,b,i,f=0,j=0,l;
double c,x,y,s;

for(i=120;i<1001;++i)
{f=0;
	for(a=1;a<500;++a)
	{
		for(b=1;b<500;++b)
		{
		x=pow(a,2);
		y=pow(b,2);
		c=x+y;
		c=sqrt(c);
		s=a+b+c;
		if(s==i)
			{++f;
			cout<<a<<" "<<b<<" "<<c<<endl;
			}
		}
	}
if(f>j)
	{
	j=f;
	l=i;
	}

}

cout<<l<<" "<<j/2;
return 0;
}
