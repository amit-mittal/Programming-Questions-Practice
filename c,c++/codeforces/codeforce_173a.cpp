#include<stdio.h>
#include<string.h>
#include<iostream>

using namespace std;

int main()
{
	long long n,count=0,wa=0,wb=0;
	char a[10005],b[10005];
	int x,y,i,j;
	
	cin>>n;
	cin>>a;
	cin>>b;
	
	x=strlen(a);
	y=strlen(b);
	
	while(count<n)
	{
		if(a[i]=='R')
		{
			if(b[j]=='S')
			{
				++wa;
			}
			else if(b[j]=='P')
			{
				++wb;
			}
		}
		else if(a[i]=='P')
		{
			if(b[j]=='S')
			{
				++wb;
			}
			else if(b[j]=='R')
			{
				++wa;
			}
		}
		else if(a[i]=='S')
		{
			if(b[j]=='R')
			{
				++wb;
			}
			else if(b[j]=='P')
			{
				++wa;
			}
		}
		++i;
		++j;
		if(i>=x)
			i=i%x;
		if(j>=y)
			j=j%y;
		++count;
	}

	cout<<wa<<" "<<wb<<endl;
	
	return 0;
}
