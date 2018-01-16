#include<stdio.h>

int main()
{
	int test,i,min,a[1005];
	
	scanf("%d",&test);
	
	for(i=0;i<test;++i)
		scanf("%d",&a[i]);
		
	min=a[0];
	i=0;
	while(i<test-2)
	{
		if(a[i+1]>a[i+2])
		{
			min=(a[i+1]<min?a[i+1]:min);
			i=i+1;
		}
		else
		{
			min=(a[i+2]<min?a[i+2]:min);
			i=i+2;
		}
	}
	min=(a[test-1]<min?a[test-1]:min);
	
	printf("%d\n",min);
	
	return 0;
}
