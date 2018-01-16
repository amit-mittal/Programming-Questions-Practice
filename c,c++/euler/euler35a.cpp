#include<iostream>
#include<math.h>
#include<algorithm>

using namespace std;

int prime(int n)
{
int l,i,f=0;

l=(int)sqrt(n);

for(i=2;i<=l;++i)
	{
	if(n%i==0)
		{
		++f;
		break;
		}
	}
if(f==0)
	return n;
else
	return 0;

}

int main()
{
int y=0;
int a[7],j,x,r,o;
unsigned long int i,q,p,m,s=0,k;


for(i=2;i<1000000;++i)//we can make the code fast by remooving all even no's except 2[read sieve of Eratosthenes]
{
o=0;
j=0;
q=i;
	while(q>0)
	{
	a[j]=q%10;
	q=q/10;
	++j;
	}

p=i;
	for(x=0;x<j;++x)
	{
	r=p%10;
	m=p/10;
	p=pow(10,j-1)*r+m;
	k=prime(p);
	if(k>0)
		++o;
	}
if(o==j)
{
	++y;
}
}

cout<<"no. of circular primes="<<y;

return 0;
}
