#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<cctype>
#include<numeric>
#include<stdlib.h>
#include<string>

using namespace std;

int main()
{
	int test,count,n,i;
	double frac,intpart;
	
	scanf("%d",&test);
	
	while(test--)
	{
		scanf("%d",&n);
		count=n-1;
		
		for(i=2;i<=sqrt(n);++i)
		{
			if(n%i==0)
			{
				count-=2;
			}
		}
		frac=modf(sqrt(n),&intpart);
		
		if(frac==0)
			++count;
			
		printf("%d\n",count);
	}
	
	return 0;
}
