#include<stdio.h>

int main()
{
	double num,sum,d;
	scanf("%lf",&num);

	while(num!=0.00)
	{
		d=2.0;sum=0.0;
//		sum=(float)(2/6);
//		printf("%lf\n",sum);
		while(sum<num)
		{
			sum+=(1/d);
			++d;
	//		printf("%d\n",d);
		}
		d-=2;

		printf("%.0lf card(s)\n",d);

		scanf("%lf",&num);
	}

	return 0;
}
