#include<stdio.h>

int main()
{
	int test,n,a,d;
	scanf("%d",&test);
	while(test--)
	{
		scanf("%d %d %d",&n,&a,&d);
		printf("%d\n",n*((2*a)+((n-1)*d))/2);
	}

	return 0;
}
