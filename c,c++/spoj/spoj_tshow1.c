#include<stdio.h>
#include<math.h>

int main()
{
	int test;
	long long int num;
	double val;
	
	scanf("%d",&test);
	
	while(test--)
	{
		scanf("%lld",&num);
		val=log(num+2)/log(2)-1;
		
		
		
		printf("%lf\n",val);		
	}
	
	return 0;
}
