#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
	int col=-1,i,j,len,f,row;
	char string[205];

	scanf("%d",&col);	

	while(col!=0)
	{	
		i=0;j=0;f=0;
		scanf("%s",string);

		len=strlen(string);
		row=len/col;

		while(i<=(col-1))
		{
			j=i;f=0;
			while(j<len)
			{
				cout<<string[j];
				if(f%2==0)
				{
					j+=(2*(col-i))-1;
					++f;
				}
				else
				{
					j+=(i*2)+1;
					++f;
				}
				
			}
			++i;
		}
		cout<<endl;
		scanf("%d",&col);
	}	

	return 0;
}
