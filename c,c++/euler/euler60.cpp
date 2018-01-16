#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{


unsigned long int p,o=0,a[1000];

for(p=2;p<1000;++p)
{
unsigned long int i,j,f=0;
j=(unsigned long int)sqrt(p);

for(i=2;i<=j;++i)
	{
	if(p%i==0)
		{
		++f;
		break;
		}
	}
if(f==0)
	{
	a[o]=p;
	++o;
	}
}

do
{


}while(next_permutation(a,a+o));



return 0;
}
