#include<stdio.h>
#include<math.h>

int main()
{
	long double val;
	int num,test,i;
	
	scanf("%d",&test);
	
	while(test--)
	{
		scanf("%d",&num);
		
		val=(pow(num-1,num)-1)*num+1;
	
		for(i=0;i<num;++i)
			{
				val=(val*num/(num-1))+1;
			}
		printf("%.0Lf\n",val);
	}
	return 0;
}
