#include<cstdio>
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int a,d,at[12],de[12],i;

	scanf("%d %d",&a,&d);
	while(a>0||d>0)
	{
		for(i=0;i<a;++i)
			scanf("%d",&at[i]);
			
		sort(at,at+a);
	/*	
		for(i=0;i<a;++i)
			printf("%d ",at[i]);	
			*/
		for(i=0;i<d;++i)
			scanf("%d",&de[i]);
			
		sort(de,de+d);
	/*	printf("\n");
		for(i=0;i<d;++i)
			printf("%d ",de[i]);
		*/	
		if(at[0]>=de[1])
			printf("N\n");
		else
			printf("Y\n");
			
		scanf("%d %d",&a,&d);
	}
	return 0;
}
