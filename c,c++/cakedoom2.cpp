#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	int test,i,j,k,valid,len;
	char string[105];
	
	scanf("%d",&test);
	
	while(test--)
	{
		valid=1;
		scanf("%d %s",&k,string);
		
		len=strlen(string);
		
		for(i=0;i<len-1;++i)
		{
			if((string[i]==string[i+1]) && (string[i]!='?'))
			{	
				valid=0;
				break;
			}
		}
		
		if(len>1)
		{
			if((string[0]==string[len-1]) && (string[0]!='?'))
				valid=0;
		}
		
		if(valid==0)
			printf("NO\n");
		else
		{
			if(k==1)
			{
				if(len==1)
				{
					if(string[0]=='?')
						printf("0\n");
					else
						printf("%s\n",string);
				}
				else
					printf("NO\n");
			}
			else if(k==2)
			{
				if(len==1)
				{
					if(string[0]=='?')
						printf("0\n");
					else
						printf("%s\n",string);
				}
				else
				{
					if(string[0]=='?')
					{
						for(j=0;j<2;++j)
						{
							if(((j+'0')!=string[1])&&((j+'0')!=string[len-1]))
							{
								string[0]=j+'0';
								break;
							}
						}
					}
					
					for(i=1;(i<len-1)&&(valid!=0);++i)
					{
						if(string[i]=='?')
						{
							for(j=0;j<2;++j)
							{
								if(((j+'0')!=string[i-1])&&((j+'0')!=string[i+1]))
								{
									string[i]=j+'0';
									break;
								}
							}
						}
					}
					
					if(string[len-1]=='?')
					{
						for(j=0;j<2;++j)
						{
							if(((j+'0')!=string[0])&&((j+'0')!=string[len-2]))
							{
								string[len-1]=j+'0';
								break;
							}
						}
					}
					
					for(i=0;i<len;++i)
					{
						if(string[i]=='?')
						{
							valid=0;
							break;
						}
					}
					
					if(valid==0)
						printf("NO\n");
					else
						printf("%s\n",string);
					
				}
			}
			else
			{
				if(len==1)
				{
					if(string[0]=='?')
						printf("0\n");
					else
						printf("%s\n",string);
				}
				else
				{
					if(string[0]=='?')
					{
						for(j=0;j<k;++j)
						{
							if(((j+'0')!=string[1])&&((j+'0')!=string[len-1]))
							{
								string[0]=j+'0';
								break;
							}
						}
					}
					
					for(i=1;(i<len-1)&&(valid!=0);++i)
					{
						if(string[i]=='?')
						{
							for(j=0;j<k;++j)
							{
								if(((j+'0')!=string[i-1])&&((j+'0')!=string[i+1]))
								{
									string[i]=j+'0';
									break;
								}
							}
						}
					}
					
					if(string[len-1]=='?')
					{
						for(j=0;j<k;++j)
						{
							if(((j+'0')!=string[0])&&((j+'0')!=string[len-2]))
							{
								string[len-1]=j+'0';
								break;
							}
						}
					}
					
					printf("%s\n",string);
				}
			}
		}
		
	}
	
	return 0;
}
