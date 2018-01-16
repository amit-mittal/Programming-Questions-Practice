#include<stdio.h>
#include<iostream>
#include<cmath>

using namespace std;

int prime(int n)
{
	int i;
	for(i=2;i<=(int)sqrt(n);++i)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}

int main()
{
	long long int n,i,val;
	long long int ans=1,count=0,k;
	
	cin>>n;
	n=(4*n)+1;
	
	for(i=3;i<=(int)sqrt(n);i+=4)
	{
		if(n%i==0)
		{		
//			cout<<i<<" "<<endl;
			if(prime(i))
			{
				count=0;
				val=n;
				
				while(val%i==0)
				{
					val=val/i;
					++count;
				}
				
//				cout<<i<<" "<<count<<endl;
				
				if(count&1)
				{
					ans=0;
					break;
				}
			}
			
			k=n/i;
			if(prime(k))
			{
				count=0;
				val=n;
				
				while(val%k==0)
				{
					val=val/k;
					++count;
				}
				
//				cout<<i<<" "<<count<<endl;
				
				if(count&1)
				{
					ans=0;
					break;
				}
			}
		}
	}

	if(ans==0)
		printf("NO\n");
	else
		printf("YES\n");	
		
	return 0;
}
