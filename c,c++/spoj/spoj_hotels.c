#include<stdio.h>

//see spoj_hotels1->that program works
//this program is wrong

int main()
{
	long long int n,m,a[300005],i,sum=0,j,max=0;
	
	scanf("%lld %lld",&n,&m);
	
	for(i=0;i<n;++i)
		scanf("%lld",&a[i]);
	
	for(i=0;i<n&&max<m;++i)
	{
		sum=a[i];
		for(j=i+1;j<n&&sum<m;++j)
		{
			sum+=a[j];
			if(sum>m)
				sum-=a[j];
			
			if(sum>max && sum<=m)
				max=sum;
		}
	}
	
	printf("%lld\n",max);

	return 0;
}
