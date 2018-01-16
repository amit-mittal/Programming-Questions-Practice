#include<stdio.h>

int main()
{
	int num;
	scanf("%d",&num);
	
	num--;
	
	if(num&1==1)//odd
	{
		printf("%d\n",(int)num/3+1);
	}
	else
	{
		printf("%d\n",(int)(num/3)+1);
	}
	
	return 0;
}
