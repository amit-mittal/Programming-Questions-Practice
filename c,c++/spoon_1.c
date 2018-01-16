#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
	int test,r,c,i,j,k,spoon,count;
	char a[105][105];
//	char string[105];
	char s[]={'s','S','p','P','o','O','o','O','n','N'};
	char *p=NULL;
	
	scanf("%d",&test);
	
	while(test--)
	{
		p=NULL;
		spoon=0;
		scanf("%d %d",&r,&c);
		
		for(i=0;i<r;++i)
		{
			scanf("%s",a[i]);
			
			for(j=0;j<strlen(a[i]);++j)
			{
				if(isupper(a[i][j]))
					a[i][j]=tolower(a[i][j]);
			}
//			printf("%s\n",a[i]);
			
			p=strstr(a[i],"spoon");
			
			if(p!=NULL)
				spoon=1;
		}
		
		i=0;
		
		while(i<c&&spoon!=1)
		{
//			printf("hi\n");
			
			char string[105];
			
			for(j=0;j<r;++j)
				string[j]=a[j][i];
				
			string[j]='\0';
				
//			printf("%s\n",string);
			
			p=strstr(string,"spoon");
			
			if(p!=NULL)
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
