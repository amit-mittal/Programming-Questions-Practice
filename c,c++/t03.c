#include<stdio.h>

int main()
{
	int test,n,ans,count,val,i,j;
	int a[1000000],b[1000000];
	
	scanf("%d",&test);
	
	while(test--){
		count=0;
		scanf("%d",&n);
		for(i=0;i<n;++i)
			scanf("%d %d",&a[i],&b[i]);
		
		for(i=0;i<n;++i)
		{
			for(j=i+1;j<n;++j)
			{
				if(a[i]<a[j]&&b[i]>b[j])
					count++;
				else if(a[i]>a[j]&&b[i]<b[j])
					count++;
			}
		}
		
		printf("%d\n",count);
	}
	
	return 0;
}
