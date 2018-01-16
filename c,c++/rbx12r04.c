#include<stdio.h>

int main()
{
	int test,sum,total,c,n,i,a[105][10],num,s,j;

	scanf("%d",&test);
	
	while(test--)
	{
		sum=0;total=0;
		scanf("%d %d",&c,&n);
		
		for(i=0;i<c;++i)
		{
			for(j=0;j<7;++j)
				scanf("%d",&a[i][j]);
		}
		
		for(i=0;i<n;++i)
		{
			scanf("%d",&num);
			sum+=num;
		}
		
		for(i=0;i<7;++i)
		{
			s=0;
			for(j=0;j<c;++j)
				s+=a[j][i];
				
			if(sum>s)
				total+=s;
			else
				total+=sum;
		}
		
		printf("%d\n",total);
		
	}
	
	return 0;
}
