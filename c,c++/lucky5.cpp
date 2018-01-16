#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
int test,num,count,total;
char *p;

p=(char*)malloc(100001*sizeof(char));

scanf("%d",&test);
getchar();

while(test--)
{
	total=0;
	count=0;

	gets(p);

	while (*p!='\0')
	{
		if((*p=='4')||(*p=='7'))
		{
		count+=1;
		}
		total+=1;
	}
	printf("%d",total-count);
	cout<<test<<endl;
}
free(p);

return 0;
}
