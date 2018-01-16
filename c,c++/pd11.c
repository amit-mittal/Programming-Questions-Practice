#include<stdio.h>
#include<string.h>

int main()
{
	int n=1,m=1,i,j;
	char a[20001][21];
	
	scanf("%d %d",&n,&m);
	
	while((n!=0)||(m!=0))
	{
		int b[20001]={0};
		int count=0;
		
		for(i=0;i<n;++i)
			scanf("%s",a[i]);
			
		for(i=0;i<n-1;++i)
		{
		  count=0;
		  if(strlen(a[i])==m)
		  {
			for(j=i+1;j<n;++j)
			{
				if(strcmp(a[i],a[j])==0)
				{
//					printf("%d %d\n",i,j);
					++count;
					a[j][0]='\0';
				}
			}
			++b[count];
		  }
		  
		}
		
		for(i=0;i<n;++i)
		{
			printf("%d\n",b[i]);
		}
		
		scanf("%d %d",&n,&m);
	}
	return 0;
}
