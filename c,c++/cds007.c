#include<stdio.h>
#include<string.h>

int main()
{
	int i,j,pl;
	char place[100][100];
	char num[100][100];

	gets(place[0]);
	pl=0;
	
	while(strcmp(place[pl],"000000")!=0)
	{
		++pl;
		gets(place[pl]);
	}
	
//	for(j=0;j<i;++j)
	//	printf("%s",place[j]);
	
	gets(num[0]);
	count=0;
	
	while(strcmp(num[count],"#")!=0)
	{
		++count;
		gets(num[count]);
	}
	
	return 0;
	
}
