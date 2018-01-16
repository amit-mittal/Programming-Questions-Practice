#include<iostream>
#include<math.h>

using namespace std;

int fact(unsigned long long int s)
{
int i,f=0;

unsigned long int l=(unsigned long int)sqrt(s);

for(i=1;i<=l;++i)
	{
	if(s%i==0)
	++f;
	}
f=2*f;
//cout<<"\t"<<f<<endl;;
return f;

}

int main()
{

int i,j;
unsigned long int k;

for(i=1;;++i)
	{
	k=i*(i+1)/2;
	j=fact(k);
	if(j>=500)
		{
		cout<<i;
		break;
		}
	}



return 0;
}
