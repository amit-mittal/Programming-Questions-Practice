#include<stdio.h>
#include<string.h>

int main()
{
	int n,i,j;
	char string[52];
	
	scanf("%d",&n);
	
	while(n!=0)
	{
		for(j=0;j<n;++j)
		{
			scanf("%s",string);
			
			for(i=0;i<n;++i)
				printf("%c%c",string[i],string[i]);
				
			printf("\n");
			
			for(i=0;i<n;++i)
				printf("%c%c",string[i],string[i]);
				
			printf("\n");
		}
		scanf("%d",&n);
	}
	return 0;
}
