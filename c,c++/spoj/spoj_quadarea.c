#include<stdio.h>
#include<math.h>

int main()
{
	int t;
	double a,b,c,d,area,sum;
	
	scanf("%d",&t);
	
	while(t--)
	{
		scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
		area=sqrt((a-b+c+d)*(b+c+d-a)*(a+b-c+d)*(a+b+c-d))/4;
		printf("%lf\n",area);
	}
	
	return 0;
}
