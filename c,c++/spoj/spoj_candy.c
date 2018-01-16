#include<stdio.h>

int main()
{
	int pack,n[10001],i,j,sum=0,count=0,avg;

	scanf("%d",&pack);
while(pack!=-1)
{
	count=0,sum=0;
	for(i=0;i<pack;++i)
	{
		scanf("%d",&n[i]);
		sum+=n[i];
	}

	if(sum%pack==0)
		{
		avg=sum/pack;
		for(i=0;i<pack;++i)
			{
				if(n[i]>avg)
					count+=n[i]-avg;
			}
		printf("%d\n",count);
		}
	else
		printf("-1\n");

scanf("%d",&pack);
}
	return 0;
}
