#include<stdio.h>
#include<string.h>

int main()
{
	int test,len,i;
	char s1[105],s2[105];
	
	scanf("%d",&test);
	
	while(test--)
	{
		int a[200]={0},count=0;
		
		scanf("%s %s",s1,s2);
		len=strlen(s1);
		
		for(i=0;i<len;++i)
			a[s1[i]]=1;
		
		len=strlen(s2);
			
		for(i=0;i<len;++i)
		{
			if(a[s2[i]]==1)
				++count;
		}
		
		printf("%d\n",count);
	}
	
	return 0;
}
