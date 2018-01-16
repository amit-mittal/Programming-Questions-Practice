#include<iostream>
#include<cstdio>
#include<string.h>
#include<cctype>

using namespace std;

int main()
{
	char string[10000],ch,*pch,c;
	int flag;
	
	while(fgets(string,10000, stdin)&&string[0]!='*')
	{	
		pch=strtok(string," ");
		c=tolower(string[0]);
		
  		while (pch != NULL)
  		{
  			if(tolower(pch[0])!=c)
  				break;
    		pch = strtok (NULL, " ");
  		}
  		
  		if(pch!=NULL)
  			printf("N\n");
  		else
  			printf("Y\n");
	}

	return 0;
}
