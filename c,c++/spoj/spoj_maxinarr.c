#include<stdio.h>

int main()
{
	int n,max,i,a;

	scanf("%d",&n);
	while(n!=0)
	{
		scanf("%d",&max);
		for(i=1;i<n;++i)
		{
			scanf("%d",&a);
			if(a>max)
				max=a;
		}
		printf("%d\n",max);
		
		scanf("%d",&n);
	}
	
	return 0;
}
