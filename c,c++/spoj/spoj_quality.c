#include<stdio.h>

int main()
{
	int i,solve;
	unsigned long long int time;
	int a[6];
	int count=1;
	
	while(scanf("%d %d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5])!=EOF)
	{
		solve=0;
		time=0;
		
		for(i=0;i<3;++i)
		{
			if(a[i]>0)
			{
				time+=a[i];
				if(a[i+3]>1)
				{
					time+=(20*60*(a[i+3]-1));
				}
				++solve;
			}
		}
	
		printf("team %d: %d, %lld\n",count,solve,time);
		++count;
	}

	return 0;
}
