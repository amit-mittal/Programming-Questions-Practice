#include<iostream>
#include<gmp.h>
#include<math.h>

int prime(int p)
{
int i,j,f=0;
j=(int)sqrt(p);

for(i=2;i<j;++i)
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

using namespace std;

int main()
{
unsigned long int i,l;

for(i=2;i<100;++i)
{
l=prime(i);
if(l>0)
cout<<l<<endl;
}

if()

return 0;
}
