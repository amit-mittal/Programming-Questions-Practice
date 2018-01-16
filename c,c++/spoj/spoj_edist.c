#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
	int test,i,j,count,len,len1,len2;
	char a[2005],b[2005],string[2005];
	scanf("%d",&test);
	
	while(test--)
	{
		int x[26]={0},y[26]={0};
		scanf("%s %s",a,b);
		len1=strlen(a);
		len2=strlen(b);
		count=abs(len1-len2);
		
		if(len2>len1)
		{
			strcpy(string,a);
			len=len2;
		}
		else
		{
			strcpy(string,b);
			len=len1;
		}
		
		for(i=0;i<len1;++i)
			++x[a[i]-'A'];
	
		for(i=0;i<len1;++i)
			++y[b[i]-'A'];	
	
		for(i=0;i<len;++i)
		{
			count+=
		}
		printf("%d\n",count);
		
	}

	return 0;
}
