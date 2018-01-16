#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

int main()
{
	int n,x,i,a[502],index,act,val=0;

	scanf("%d %d",&n,&x);
	
	for(i=0;i<n;++i)
	{
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	
	for(i=0;i<n;++i)
	{
		if(a[i]==x)
		{
			index=i+1;
			break;
		}
	}
	
	if(x>a[n-1])
	{
		val=n+1;
	}
	else if(x<a[0])
	{
		val=n+1;
	}
	else
	{
		if(index<((n+1)/2))
		{
			while(((n+1)/2)!=index)
			{
				++n;
				index++;
				++val;
			}
		}
		else if(index>((n+1)/2))
		{
			while(((n+1)/2)!=index)
			{
				++n;
				++val;
			}
		}
		else
			val=0;
	}
	
	printf("%d\n",val);
	
	return 0;
}
