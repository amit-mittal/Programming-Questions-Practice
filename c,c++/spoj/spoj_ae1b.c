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
	int test,t,count,sum,max,total,i,a[1002],n,k,s;

	scanf("%d %d %d",&n,&k,&s);
	
		count=0,sum=0;
		total=k*s;

		for(i=0;i<n;++i)
		{
			scanf("%d",&a[i]);
		}
		sort(a,n);

		for(i=0;i<n;++i)
			printf("%d\n",a[i]);

		while((count<max)&&(sum<total))
		{
			sum+=a[count];
			++count;
		}
		if(sum>=total)
			printf("%d\n",count);

	return 0;
}
