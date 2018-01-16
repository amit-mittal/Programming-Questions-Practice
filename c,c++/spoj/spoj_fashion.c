#include<stdio.h>

int sort(int array[],int pair)
{
	int temp,i,j;
	for(i=0;i<pair-1;++i)
	{
		for(j=i+1;j<pair;++j)
		{
			if(array[j]>array[i])
			{
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}
}

int main()
{
	int test,i,pair,men[1005]={0},women[1005]={0},sum;
	scanf("%d",&test);

	while(test--)
	{
		sum=0;
		scanf("%d",&pair);
		for(i=0;i<pair;++i)
			scanf("%d",&men[i]);
		sort(men,pair);

		for(i=0;i<pair;++i)
			scanf("%d",&women[i]);
		sort(women,pair);
		
		for(i=0;i<pair;++i)
			sum+=(men[i]*women[i]);

		printf("%d\n",sum);
	}

	return 0;
}
