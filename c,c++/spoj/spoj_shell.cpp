#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;

int main()
{
	int i,start,n,count=1;
	char s[][10]={"left","center","right"};
	char string[10],a[10],b[10],present[10];
	
	while(scanf("%s",string)==1)
	{
	  if(count!=10)
	  {
		if(string[0]!=10)
		{
			string[strlen(string)]='\0';
			
			for(i=0;i<3;++i)
			{
				if(strcmp(string,s[i])==0)
				{
					strcpy(present,string);
					start=i;
				}
			}
			
			scanf("%d",&n);
			
			while(n--)
			{
				cin>>a>>b;
				for(i=0;i<3;++i)
				{
					if(strcmp(present,a)==0)
					{
						for(i=0;i<3;++i)
						{
							if(strcmp(b,s[i])==0)
							{
								strcpy(present,b);
								start=i;
								break;
							}
						}
						break;
					}
					else if(strcmp(present,b)==0)
					{
						for(i=0;i<3;++i)
						{
							if(strcmp(a,s[i])==0)
							{
								strcpy(present,a);
								start=i;
								break;
							}
						}
						break;
					}
				}
			}
			for(i=0;i<3;++i)
			{
				if(start==i)
				{
					printf("%s\n",s[i]);
					break;
				}
			}
		}
		else
		{
			if(scanf("%d",&n)==1)
			{
				while(n--)
				{
					cin>>a>>b;
				}
				printf("\n");
			}
		}
	  }
	  else
	  {
	  	if(scanf("%d",&n)==1)
			{
				while(n--)
				{
					cin>>a>>b;
				}
				printf("\n");
			}
	  }
	  ++count;
	}
	return 0;
}
