#include<iostream>
#include<math.h>
#include<stdio.h>

using namespace std;

int main()
{


unsigned long long int t,n,i,l,s,j;

scanf("%lld",&t);//no. of test cases

for(i=0;i<t;++i)
	{
	scanf("%lld",&l);

	s=0;
	while(l>0)
		{		
		s=s+(unsigned long long int)(l/5);
		l=l/5;		
		}
	printf("%lld\n",s);	
	}



return 0;
}
