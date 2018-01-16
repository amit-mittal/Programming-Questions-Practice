#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
long int t,n,m,a[400001],b[400001],c[400001],i,j,cost,sum;
string s;
scanf("%ld",&t);
while(t-->0)
	{
	sum=0;
	scanf("%ld",&n);
	scanf("%ld",&m);
	cin>>s;
	for(j=0;j<m;++j)
		{
		scanf("%ld",&a[j]);
		scanf("%ld",&b[j]);
		scanf("%ld",&c[j]);
		}	
	for(i=1;i<=n;++i)
		{
		if(s[i-1]=='H')
			{
			cost=20000;
			for(j=0;j<m;++j)
				{
				if(((a[j]==i)||(b[j]==i)))//&&(s[b[j]-1]=='R'))||((b[j]==i)&&(s[a[j]-1]=='R'))
					{
					if(c[j]<cost)
						{
						cost=c[j];
						}
					}
				}
			sum=sum+cost;
			}
		
		}
	printf("%ld\n",sum);

	}
return 0;
}
