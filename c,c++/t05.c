#include<stdio.h>
#include<math.h>

int main()
{
	int test,a,b,ans,val;
	
	scanf("%d",&test);
	
	while(test--)
	{
		scanf("%d %d",&a,&b);
		val=pow(2,a);
		
		ans=b%(int)val;
		if(ans==val-1)
			printf("ON\n");
		else
			printf("OFF\n");
	}
	
	return 0;
}
