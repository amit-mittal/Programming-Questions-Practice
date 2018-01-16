#include<iostream>
#include<stdio.h>

using namespace std;

int count=0;
int a[1000]={0};

int recur(int n)
{
	int i;
	if(n==1)
		++count;
	else
	{
		
		if(a[n]>0)
			count+=a[n];
			
		for(i=1;i<n;++i)
		{
			a[n]+=recur(n-i);
		}
	}
	
}

int main()
{
	int i,n;
	cin>>n;
	
	for(i=1;i<n;++i)
	{
		a[n]+=recur(n-i);
	}

	printf("%d\n",count);

	return 0;
}
