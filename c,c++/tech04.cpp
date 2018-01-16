#include<iostream>
#include<stdio.h>
#include<cstring>
#include<algorithm>

using namespace std;

int main()
{

int T,j,f=0,l;
string s1,s2;
scanf("%d",&T);

while(T>0)
	{
		cin>>s1>>s2;
		sort(s1.begin(),s1.end());
		sort(s2.begin(),s2.end());
	
	
	if(s1==s2)
		printf("YES\n");
	else
		printf("NO\n");
	--T;
	}
return 0;
}
