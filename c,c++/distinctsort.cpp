#include<iostream>
#include<math.h>

using namespace std;

int main()
{
unsigned long int a[5];
unsigned int i,j,l,k=1;

for(i=0;i<5;++i)
	{
	cin>>a[i];
	}

for(i=0;i<5;++i)
{
for(j=i+1;j<5;++j)
	{
	if(a[j]<a[i])
		{
		l=a[j];
		a[j]=a[i];
		a[i]=l;
		}
	}

}

for(i=0;i<4;++i)
	{
	if(a[i]!=a[i+1])
		++k;

	}

cout<<"no. of distict digits-"<<k;
return 0;
}
