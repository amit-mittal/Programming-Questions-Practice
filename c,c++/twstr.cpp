#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string.h>

using namespace std;

void sort(char string[][1005],int val[],int n)
{
	int i,j;
	char s[1005];
	
	for(i=0;i<n-1;++i)
	{
		for(j=i+1;j<n;++j)
		{
			if(strcmp(string[i],string[j])>0)
			{
				strcpy(s,string[i]);
				strcpy(string[i],string[j]);
				strcpy(string[j],s);
				
				swap(val[i],val[j]);
			}
		}
	}
}

int main()
{
	int n,val[1005],i,q,v,max,len;
	char string[1005][1005],str[1005],ans[1005];
	
	scanf("%d",&n);
	
	for(i=0;i<n;++i)
		scanf("%s %d",string[i],&val[i]);
	
	sort(string,val,n);
		
	scanf("%d",&q);
	
	while(q--)
	{
		max=-1000000001;
		
		scanf("%s",str);
		
		len=strlen(str);
		
		for(i=0;i<n;++i)
		{
			v=strncmp(str,string[i],len);
			if(v==0)
			{
				if(val[i]>max)
				{
					strcpy(ans,string[i]);
					max=val[i];
				}
			}
			else if(v<0)
				break;
		}
		
		if(max==-1000000001)
			printf("NO\n");
		else
			printf("%s\n",ans);
	}
	
	return 0;
}
