#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
int b[100]={0};
scanf("%lld %d %d",&a,&n,&k);
while(a-->0)
	{
	i=0;
	for(i=0;i<100;++i)
		{
		if(b[i]<n)
			{
			++b[i];
			}
		else
			{
			b[i]=0;
			++b[i+1];
			}
		}
	}

return 0;
}
