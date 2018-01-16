#include<iostream.h>

int prime(long int n)
{
long int i,l,f=0;
l=n/2;

for(i=l;i>1;--i)
	{
	if(n%i==0)
		{
		++f;
		break;
		}

	}

if(f==0)
	{
	return n;
	}
else
return 0;	
}

int main()
{
long int i,f=0,p;
i=2;
while(f!=10001)
	{
	p=prime(i);
	if(p>0)
		{
		++f;
		}
	++i;
	}
cout<<i;

return 0;
}