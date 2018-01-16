#include<iostream>
#include<stdio.h>

using namespace std;

unsigned long long int factorial(unsigned long long int n)
{
unsigned long long int p=1;
while(n>0)
	{
	p*=n;
	n--;
	if(p>1000000007)
		p=p%1000000007;
	}
return p;
}

int main()
{
unsigned long long int test,num,i,den,fac=1000000007,pro,rem;
char str[505];

scanf("%lld",&test);

while(test--)
{
	int array[140]={0};
	scanf("%s",str);

	for(i=0;str[i]!='\0';++i)
	{
		++array[(int)str[i]];
	}

	num=factorial(i);

	den=1;

	for(i=0;i<130;++i)
	{
		if(array[i]>1)
		{
			den*=factorial(array[i]);
			if (den>fac)
			{
				den=den%fac;
			}
		}
	}
	
	pro=fac+1;
	if(pro%den==0)
	{
		rem=pro/den;
		printf("%lld \n",(num*rem)%fac);	
	}

	i=1;

	while(pro%den!=0)
	{
		pro=fac*i;
		pro++;
		
		if(pro%den==0)
		{
			rem=pro/den;
			printf("%lld \n",(num*rem)%fac);
			break;
		}
		else
			++i;
	}
}
return 0;
}
