#include<iostream>
#include<math.h>

using namespace std;

unsigned long long int prime(unsigned long long int p)
{
unsigned long long int i,j,f=0;
j=(unsigned long long int)sqrt(p);

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

int main()
{
unsigned long long int p,a[1000000],j,f,i,k=1,l,s=0;

a[0]=2;
k=1;
for(p=3;p<10000;p+=2)
{
j=(unsigned long long int)sqrt(p);
f=0;
for(i=3;i<=j;++i)
	{
	if(p%i==0)
		{
		++f;
		break;
		}
	}
if(f==0)
	{
	a[k]=p;
//	cout<<a[k]<<endl;
	++k;
	}
}

p=0;
unsigned long long int m,n=0;

for(i=0;i<100000;++i)
{
s=0;
m=i;
	while(m<80000)
	{
	s=s+a[m];
	//cout<<s<<endl;
	l=prime(s);

	if((l>0)&&(s<1000000)&&(s>p)&&(m-i>n))
		{
		n=m;
		p=s;
		cout<<p<<endl;
		}
	//cout<<i<<endl;
	++m;
	}
}
cout<<p;

return 0;
}
