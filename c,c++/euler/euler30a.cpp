#include<iostream>
#include<math.h>

using namespace std;

int main()
{
unsigned long int n,q,s,z=0,l;
int r,a[10],i;
s=0;

for(i=0;i<10;++i)
{
a[i]=0;
}



for(n=10;n<10000000;n+=1)
{q=n;
i=0;
s=0;

	while(q>0)
	{
		a[i]=q%10;
		q=q/10;
		++i;
	}

	for(i=0;i<10;++i)
	{
	l=pow(a[i],5);

	s=s+l;
	
	}

if(s==n)
	{
	cout<<n<<endl;
	z=z+n;
	}
}

cout<<"sum="<<z;


return 0;
}
