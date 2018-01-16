#include<iostream>
#include<stdio.h>

using namespace std;

int sum(int n)
{
int s=0,r;
while(n>0)
	{
	r=n%10;
	s=s+r;
	n=n/10;
	}
return s;
}

int main()
{
int k,n,i,s,f;

scanf("%d",&k);
cout<<endl;

while(k-->0)
	{
	f=0;
	scanf("%d",&n);
	for(i=1;i<n;++i)
		{
		s=sum(i);
		if(i+s==n)
			{
			++f;
			printf("%d\n",i);
			break;
			}
		}
	if(f==0)
		cout<<"NONE\n";	

	}

return 0;
}
