#include<iostream>
#include<stdio.h>

using namespace std;

unsigned long long int palindrome(unsigned long long int n)
{
unsigned long long int s=0,q,r;
q=n;

while(q>0)
	{
	r=q%10;
	s=s*10+r;
	q=q/10;
	}

if(s==n)
	return n;
else
	return 0;
}

int main()
{
int t,k,p=0;
scanf("%d",&t);

while(t>0)
	{p=0;
	scanf("%d",&k);
	while(p==0)
		{
		++k;
		p=palindrome(k);
		}
	printf("%d\n",p);
	--t;
	}

return 0;
}
