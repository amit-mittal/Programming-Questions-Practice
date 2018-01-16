#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int num,sum,i,n;

	scanf("%d",&num);

	while(num!=0)
	{
		sum=0;
		for(i=1;i<=num;++i)
		{
			n=num-i+1;
			sum+=(n*n);
		}
		printf("%d\n",sum);
		scanf("%d",&num);
	}
	return 0;
}
