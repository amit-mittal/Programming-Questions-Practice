#include<stdio.h>

int main()
{
	int num;

	scanf("%d",&num);
	while(num!=0)
	{
		printf("%d GALLONS PER WEEK WILL LAST %d WEEKS\n",num,10000/num);
		scanf("%d",&num);
	}
	
	return 0;
}
