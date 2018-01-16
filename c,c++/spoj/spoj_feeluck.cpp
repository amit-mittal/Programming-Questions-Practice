#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
	int cas=1,test,i,big;
	
	scanf("%d",&test);
	while(test--)
	{
		printf("Case #%d:\n",cas);
		++cas;
		int b[11]={0};
		char a[11][105]={0};
		for(i=0;i<10;++i)
			scanf("%s %d",a[i],&b[i]);
		big=b[0];
		for(i=1;i<10;++i)
		{
			if(b[i]>big)
				big=b[i];
		}
		for(i=0;i<10;++i)
		{
			if(b[i]==big)
			{
				printf("%s\n",a[i]);
			}
		}
	}
	return 0;
}
