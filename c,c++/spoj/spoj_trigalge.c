#include<stdio.h>
#include<math.h>

#define F(a,b,c,x) a*x+b*sin(x)-c
#define D(a,b,x) a+b*cos(x)

int main()
{
	int test,a,i,b,c;
	double x,y;
	
	scanf("%d",&test);
	
	while(test--)
	{
		scanf("%d %d %d",&a,&b,&c);
		x=(c+b)/a;
		
		for(i=0;i<1;++i)
		{
			y=x-(F(a,b,c,x)/D(a,b,x));
			x=y;
		}
		printf("%lf\n",x);
	}
	
	return 0;
}
