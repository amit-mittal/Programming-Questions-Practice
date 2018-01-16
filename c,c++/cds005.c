#include<stdio.h>

int main()
{
	int array[10000],i=0,max=0;
	
	while(scanf("%d",&array[i])==1)
	{
		if(array[i]>max)
			max=array[i];
		++i;
	}
	
	c=i/max;
	
	
	
	
	return 0;
}
