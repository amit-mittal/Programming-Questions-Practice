#include<stdio.h>
#include<string.h>

int main()
{
	int test,r,c,count,i,j;
	char a[201][201];

	scanf("%d",&test);
	
	while(test--)
	{
		count=0;
		scanf("%d %d",&r,&c);
		
		for(i=0;i<r;++i)
		{
			scanf("%s",a[i]);
		}
		
		for(i=1;i<r-1;++i)
		{
			for(j=0;j<c;++j)
			{
				if(a[i][j]=='#')
				{
					if((a[i+1][j]=='.')&&(a[i][j+1]=='.')&&(a[i-1][j]=='.')&&(a[i][j-1]=='.'))
						++count;
				}
			}
		}
		
		printf("%d\n",count);
		
	}
	
	return 0;
	
}
