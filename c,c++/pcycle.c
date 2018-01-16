#include<stdio.h>

int main()
{
	int num,i,a[1005],count,pos,j,k,b[1005][1005]={0};

	scanf("%d",&num);
	for(i=1;i<=num;++i)
		scanf("%d",&a[i]);
		
	count=0;i=1;
		
	while(i<=num)
	{
		k=0;
		if(a[i]!=0)
		{
			pos=i;
			do
			{
				b[count][k]=pos;
			//	printf("%d ",pos);
				j=pos;
				pos=a[pos];
				a[j]=0;
				++k;
			}while(pos!=i);
			b[count][k]=pos;
		//	printf("%d",pos);
			++i;
			++count;
//			printf("\n");
		}
		else
			++i;
	}
	
	printf("%d\n",count);

	for(i=0;i<count;++i)
	{
		for(j=0;b[i][j]!=0;++j)
			printf("%d ",b[i][j]);
		printf("\n");
	}
	
	return 0;
}
