#include<stdio.h>

void sort(int a[],int max)
{
	int i,j,temp;
	for(i=0;i<max-1;++i)
	{
		for(j=i+1;j<max;++j)
		{
			if(a[j]>a[i])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
}

int main()
{
	int test,t,count,sum,max,total,i,a[1002];

	scanf("%d",&test);
	
	for(t=1;t<=test;++t)
	{
		count=0,sum=0;
		scanf("%d %d",&total,&max);

		for(i=0;i<max;++i)
		{
			scanf("%d",&a[i]);
		}
		sort(a,max);

		while((count<max)&&(sum<total))
		{
			sum+=a[count];
			++count;
		}
		if(sum>=total)
			printf("Scenario #%d:\n%d\n\n",t,count);
		else
			printf("Scenario #%d:\nimpossible\n\n",t);
	}

	return 0;
}
