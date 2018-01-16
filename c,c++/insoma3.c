#include<stdio.h>

int main()
{
	int t,i,j,n,a[100005],k;
	unsigned long long int count=0;	
	
		scanf("%d",&n);
		for(i=0;i<n;++i)
			scanf("%d",&a[i]);
		
		for(j=0;j<n-1;++j)
			{
				for(k=j;k>=0;--k)
				{
					if(a[j+1]<a[k])
						count++;
					else if(count==0)
						break;
				}
			}
		printf("%lld\n",count);
	
	
	return 0;
}
