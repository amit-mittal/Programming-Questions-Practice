#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
unsigned long long int a,b,r1,r2,s=0,f=0;
while(1)
{
scanf("%lld%lld",&a,&b);
if((a==0)&&(b==0))
	break;
else
	{f=0;s=0;
	while((a>0)&&(b>0))
		{
		r1=a%10;
		r2=b%10;
		a=a/10;
		b=b/10;
		s=s+r1+r2;
		if(s>9)
			{
			s=s/10;
			++f;
			}
		else
			s=0;
			
		}
	if(f>1)
		{
		printf("%lld carry operations.\n",f);
		}
	else if(f==1)
		{
		printf("%lld carry operation.\n",f);
		}
	else
		{
		printf("No carry operation.\n");
		}
	}
}

return 0;
}
