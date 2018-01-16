#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
int test,num,count,total,i;

scanf("%d",&test);
getchar();

while(test--)
{
	char p[100002]={0};
	total=0;
	count=0;
	i=0;

	gets(p);

	while ((p[i]!='\0')&&((int)p[i]!=10))
	{
		if(p[i]!=' ')
		{
			if((p[i]=='4')||(p[i]=='7'))
			{
				count+=1;
			}
			total+=1;
		}
	++i;
	}
	printf("%d\n",total-count);
}

return 0;
}
