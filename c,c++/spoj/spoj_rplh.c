#include<stdio.h>
#include<math.h>
#define G 9.806

int main()
{
	int test,t,s,i;
	double val,deg;
	
	scanf("%d",&test);
	
	for(i=1;i<=test;++i)
	{
		scanf("%d%d",&t,&s);
		
		if((t*G)<(s*s))
		{
			val=(t*G)/(s*s);
			
			deg=((asin(val))/acos(0.0))*45;
			
			if(deg<=45)
				printf("Scenario #%d: %.2lf\n",i,deg);
			else
			printf("Scenario #%d: -1\n",i);
		}
		else
			printf("Scenario #%d: -1\n",i);
	}
	
	return 0;
}
