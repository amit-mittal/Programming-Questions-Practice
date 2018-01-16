#include<stdio.h>
#include<string.h>
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	char string[100005];
	int a,i,len;
	
	scanf("%s",string);
	len=strlen(string);
	
	a=count(string,string+len,'R');

	i=0;
	while(string[i]!='R')
	{
		++i;
	}
	
	if(a!=0)
		printf("%d\n",len-i-a);
	else
		printf("0\n");
	return 0;
}
