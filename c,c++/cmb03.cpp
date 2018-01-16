#include<iostream>
#include<stdio.h>
#include<cstring>

using namespace std;

int main()
{
char s1[11],s2[6];
int n,i,j,f,k,c;

scanf("%d",&n);
gets(s1);
while(n>0)
	{
	gets(s1);
	gets(s2);
	i=0;
	while(i<6)
		{
		f=0;j=i;
		c=0;
		for(k=0;k<5;++k)
			{
			if(s1[j]==s2[k])
				{
				++c;
				++j;
				}
			else
				break;	
			}
		if(c==5)
			{
			++f;
			printf("1");
			break;
			}
		++i;
		}
	if(f!=1)
		printf("0");
	cout<<endl;
	--n;
	}

return 0;
}
