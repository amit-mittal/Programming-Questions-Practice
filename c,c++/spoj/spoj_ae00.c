#include<stdio.h>
#include<math.h>

int main()
{
	int num,i,j,count=0;
	scanf("%d",&num);

	for (j = 1; j <= ((int)sqrt(num)); j++)
		count += (num/j - j + 1);
//	printf("%d\n",count);
	
	printf("%d\n",count);

	return 0;
}
