#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
char a[100];
int t,i,s;
	
scanf("%d",&t);
gets(a);
while(t>0)
	{
	s=0;
	scanf("%s",a);
	if(strlen(a)<3)
		break;
	else
		{
	
		for(i=0;i<strlen(a);i++)
			{
			s=s+a[i];
			}

			s=s/i;	
		}
	printf("%c\n",s);
	--t;
	}

return 0;
}
