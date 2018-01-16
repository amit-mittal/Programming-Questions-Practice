#include<iostream>
#include<math.h>

using namespace std;

int prime(unsigned long int p)
{
unsigned long int i,j,f=0;
j=(unsigned long int)sqrt(p);
if(p>1)
{
for(i=2;i<=j;++i)
	{
	if(p%i==0)
		{
		++f;
		break;
		}
	}
if(f==0)
	return p;
else
	return 0;
}
else
	return 0;
}

int main()
{
unsigned long long int i=13,n,q,b,r,l,s=0;
int j,f=0,f1=0,f2=1,f3=1,k=1;

while(i<1000000)
{f1=0,f2=1;f3=1;k=1;
n=prime(i);
q=i;
//cout<<n<<endl;
	if(n>0)
	{
	while(q>0)
		{
		q=q/10;
		++f1;
		}
//	cout<<f1<<endl;
	while(n>0)
		{
		n=n/10;
		n=prime(n);
		if(n>0)
			{++f2;}
		}
//	cout<<f2<<endl;
q=i;
	if(f1==f2)
		{
		while(k<f1)
			{
			l=pow(10,k);
			r=q%l;
			b=prime(r);
			if(b>0)
				++f3;
			++k;
			}
		if(f2==f3)
			{
			cout<<i<<endl;
//			++f;
//			s=s+i;
			}
		}
	
	}
	
i+=2;
}

//sum is 748317

return 0;
}
