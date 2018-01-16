#include<iostream>
#include<cstdio>
//this program is wrong
using namespace std;

int main()
{
	int t,i,j,a[2005],b[2005],start,end;
	
	scanf("%d",&t);
	long long int sum=0;
	
	for(i=0;i<t;++i)
	{
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
		
	start=0;
	end=t-1;
	while(start<=end)
	{
		if(a[start]>a[end])
		{
			sum+=a[end];
			end--;
		}
		else
		{
			sum+=a[start];
			start++;
		}
		for(i=start;i<=end;++i)
			a[i]+=b[i];
	}
	
	printf("%lld\n",sum);
	
	return 0;
}
