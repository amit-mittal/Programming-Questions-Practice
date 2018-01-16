#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int i,test,number,j=1;
	char string[100];

	scanf("%d",&test);

	while(test--)
	{
		scanf("%d",&number);
		scanf("%s",string);
		i=0;
		number--;

		printf("%d ",j);

		while(string[i]!='\0')
		{
			if(i!=number)
				printf("%c",string[i]);
			++i;
		}
		printf("\n");
		++j;
	}

	return 0;
}
