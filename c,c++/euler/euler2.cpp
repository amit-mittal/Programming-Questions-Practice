#include<iostream>

using namespace std;

int main()
{
int i,s,a[100];
i=2;

while(a[i-1]<400)
	{
	a[0]=1;
	a[1]=2;
	a[i]=a[i-1]+a[i-2];
	cout<<a[i];
	++i;
	}
/*s=0;
for(i=1;a[i-1]<400;i+3)
	{
	s=s+a[i];
	}
cout<<s;*/
return 0;
}
