#include<stdio.h>

int main()
{
	int num,sum,f1=1,f2=1,i;
	scanf("%d",&num);
	
	for(i=1;i<num-1;++i)
	{
		sum=f1+f2;
		if(sum>10000)
			sum%=10000;
		f1=f2;
		f2=sum;
		
	}
	
	printf("%d\n",sum%10000);
	
	return 0;
}
