#include<stdio.h>

int main()
{
	int n,i;
	int l,b;
	int a[20];
	int poss=1,sum=0;
	
	scanf("%d %d %d",&n,&l,&b);
	
	for(i=0;i<n;++i)
		scanf("%d",&a[i]);
	
	for(i=0;i<n;++i)
	{
		if(a[i]&1)//odd
		{
			if(a[i]>l&&a[i]>b)
				poss=0;
		}
		else
		{
			if(a[i]>l*b)
				poss=0;
		}
		sum+=a[i];
	}
	if(sum>l*b)
		poss=0;
		
	if(poss==1)
		printf("YES\n");
	else
		printf("NO\n");
	
	return 0;
}
