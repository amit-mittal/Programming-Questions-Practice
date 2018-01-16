#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
	int test,i,f=0,u;
	char string[1000004];

	scanf("%d",&test);

	while(test--)
	{
		f=0;u=0;
		scanf("%s",string);
		
		for(i=0;i<(int)strlen(string)/2;++i)
		{
			if((string[i]!=string[strlen(string)-1-i])&&(u==1))
				string[strlen(string)-1-i]=string[i];
			else if((string[i]!=string[strlen(string)-1-i])&&(u!=1))
			{
				if(string[i]>string[strlen(string)-1-i])
				{
					string[strlen(string)-1-i]=string[i];
					u=1;
				}
				else
					string[strlen(string)-1-i]=string[i];
			}
			else
				++f;
		}

		if(((f==(int)(strlen(string)/2))||u==0)&&((int)(strlen(string)/2)%2!=0))
			string[(int)strlen(string)/2]++;
		else if(((f==(int)(strlen(string)/2))||u==0)&&((int)(strlen(string)/2)%2==0))
		{
			string[(int)strlen(string)/2]++;
			string[((int)strlen(string)/2)-1]++;
		}
		printf("%s\n",string);
	}

	return 0;
}
