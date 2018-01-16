#include<iostream>
#include<math.h>

using namespace std;

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

for(i=3;i<100000;i+=2)
	{
	for(j=0;a[j]<=i;++j)
		{
		f=0;
		for(k=0;k<(int)sqrt(i);++k)
			{
			s=a[j]+2*pow(k,2);
			if(s==i)
				{
				//cout<<i<<endl;
				++f;
				break;
				}
			}
		if(f==1)
			break;
		}
	if(f==0)
		{
		cout<<i<<endl;
		break;
		}

	}

return 0;
}
