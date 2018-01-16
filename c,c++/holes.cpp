#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
char c;
int i,t,f;

scanf("%d",&t);

string s;

while(t-->0)
	{
	cin>>s;
	i=0;f=0;
	while(i<s.length())
		{
		if((s[i]=='A')||(s[i]=='D')||(s[i]=='P')||(s[i]=='O')||(s[i]=='R')||(s[i]=='Q'))
			++f;
		else if((s[i]=='B'))
			f+=2;
		++i;
		}
	printf("%d\n",f);
	}

return 0;
}
