#include<iostream.h>
#include<math.h>

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
long int i,j,k,l;
j=2000000;
k=0;

for(i=2;i<j;++i)
	{
		l=prime(i);
		k=k+l;
	
	}

cout<<k<<endl;

return 0;	
}