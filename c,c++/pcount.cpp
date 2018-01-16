#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>

using namespace std;

inline void fastread(int *a)
{
    register char c=0;
    while (c<33) c=getchar_unlocked();
    *a=0;
    while (c>33)
    {
        *a=*a*10+c-'0';
        c=getchar_unlocked();
    }
}

int main()
{
	char string[2005],sub[2005],rev[2005];
	int t,s,e,i,j,x;

	scanf("%s",string);
	fastread(&t);
	
	while(t--)
	{
		int count=0,i1,j1;
		fastread(&s);
		fastread(&e);
		
		count=e-s+1;
		
		for(i=s;i<e;++i)
		{
			for(j=i+1;j<e+1;++j)
			{
				for(x=i;x<=j;++x)
					sub[x-i]=string[x];
				sub[x]='\0';
				
				strcpy(rev,sub);
				reverse(rev,rev+strlen(rev));
				
//				printf("%s %s\n",sub,rev);
				
				if(strcmp(rev,sub)==0)
				{
					++count;
					break;
				}
			}
		}
		
		printf("%d\n",count);
	}

	return 0;
}
