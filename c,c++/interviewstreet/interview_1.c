#include<stdio.h>
#include<math.h>
int main()
{
	double test,num,product,val;
	
	scanf("%lf",&test);
	
	while(test--)
	{
		scanf("%lf",&num);
		
		val=ceil(log(num)/log(2));
		product=pow(2,val-1);
		printf("%.0lf\n",product);
		
	}
}
