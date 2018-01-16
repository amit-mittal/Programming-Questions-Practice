#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
unsigned long long int a,b,f,f1,f2,sum;

while(1)
	{
	scanf("%lld %lld",&a,&b);
	if((a==0)&&(b==0))
		break;
	else
		{
		f=0;
		f1=1;
		f2=2;
		sum=0;

		while(sum<a)
			{
			sum=f1+f2;
			f1=f2;
			f2=sum;
			}

		while(sum<=b)
			{
			++f;
			sum=f1+f2;
			f1=f2;
			f2=sum;
			}
		printf("%lld\n",f);
		}
	}

return 0;
}
