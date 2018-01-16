#include<stdio.h>
#include<math.h>

int main()
{
	int num,i,j,count=0;
	scanf("%d",&num);

	for(i=2;i<=num;i+=2)
	{
		for(j=1;j<=(int)sqrt(i);++j)
		{
			if(i%j==0)
				++count;
		}
	}
//	printf("%d\n",count);
	if(num%2==0)
		count+=(int)(num/2);
	else
		count+=(int)(num/2)+1;		
	printf("%d\n",count);

	return 0;
}
