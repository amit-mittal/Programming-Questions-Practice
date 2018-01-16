#include<iostream>

using namespace std;

int main()
{
int i,j=0;
unsigned long int s=0;
unsigned long int l,n;

for(s=100000;s<1000001;++s)
{
i=0;
l=s;
while(l!=1)
	{
	if(l%2==0)
		{
		l=l/2;
		++i;
		}
	else
		{
		l=3*l;
		l=l+1;
		++i;
		}

	}
if(i>j)
	{
	j=i;
	n=s;
	}
}
cout<<n;
return 0;
}
