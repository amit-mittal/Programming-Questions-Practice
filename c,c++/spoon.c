#include<stdio.h>
#include<string.h>

int main()
{
	int test,r,c,i,j,k,spoon,count;
	char a[105][105];
	char s[]={'s','S','p','P','o','O','o','O','n','N'};
	
	scanf("%d",&test);
	
	while(test--)
	{
		spoon=0;
		scanf("%d %d",&r,&c);
		
		for(i=0;i<r;++i)
		{
			scanf("%s",a[i]);
			if(spoon!=1)
			{
				for(j=0;j<strlen(a[i])-4;++j)
				{
					k=0;count=0;
					while(a[i][j]==s[k]||a[i][j]==s[k+1])
					{
	//					printf("%d\n",count);
						count++;
						k+=2;
						j++;
					}
				}
			
				if(count==6)
					spoon=1;
			}
		}
		
		i=0;
		while(i<c&&spoon!=1)
		{
			for(j=0;j<r-4;++j)
				{
					k=0;count=0;
					while(a[j][i]==s[k]||a[j][i]==s[k+1])
					{
						count++;
						k+=2;
						j++;
					}
				}
			
				if(count==6)
					spoon=1;
			++i;
		}
		
		if(spoon==1)
			printf("There is a spoon!\n");
		else
			printf("There is indeed no spoon!\n");
			
	}
	
	return 0;
}
