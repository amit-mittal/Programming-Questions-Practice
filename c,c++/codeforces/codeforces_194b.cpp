#include<iostream>
#include<stdio.h>

using namespace std;

long long int gcd(long long int x,int y)
{
	if(y==0)
		return x;
	else
		return gcd(y,x%y);
}

int main()
{
	int test,n;
	long long int ans;
	
	scanf("%d",&test);
	
	while(test--)
	{
		scanf("%d",&n);
		
		if(n&1)
		{
			ans=gcd((long long int)4*n,n+1);
			
			ans=(long long int)(4*n)/ans;
		
			ans=ans+1;
		}
		else
			ans=(long long int)4*n+1;
	
		cout<<ans<<endl;
	}
	
	return 0;
}
