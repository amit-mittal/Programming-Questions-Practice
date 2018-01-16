#include<stdio.h>

int main()
{
	int num,i,sum,f;
	scanf("%d",&num);
	while(num!=-1)
	{
		if(num==1)
			printf("Y\n");
		else
		{
			num--;
			if(num%6!=0)
				printf("N\n");
			else
			{
				num=num/6;sum=0;f=0;
				for(i=1;sum<num;++i)
				{
					sum+=i;
					if(sum==num)
					{
						f=1;
						printf("Y\n");break;
					}
				}
				if(f==0)
					printf("N\n");
			}
		}
		scanf("%d",&num);
	}
	return 0;
}
