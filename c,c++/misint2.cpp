#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
unsigned long long int l,r,t,s,a,p,n;

scanf("%lld",&t);

while(t-->0)
	{
	scanf("%lld",&l);
	scanf("%lld",&r);
	a=0;
	if(l>1)
	{
	for(l=l;l<=r;++l)
		{p=1;
		if((l%2==0)&&(l%4!=0))
			{
			s=(int)(l/4)+1;
			cout<<s<<endl;
for(n=1;n<=s;++n)
	{
	p=p*26;
	if(p>1000000007)
	p=p%1000000007;
	}
			a=a+p;
			cout<<a<<endl;
			}
		else if(l%4==0)
			{
			s=(int)(l/4);
			cout<<s<<endl;
for(n=1;n<=s;++n)
	{
	p=p*26;
	if(p>1000000007)
	p=p%1000000007;
	}
			a=a+p;
			cout<<a<<endl;
			}
		else if(((l-1)%2==0)&&((l-1)%4!=0))
			{
			s=(int)((l-1)/4)+2;
			cout<<s<<endl;
for(n=1;n<=s;++n)
	{
	p=p*26;
	if(p>1000000007)
	p=p%1000000007;
	}
			a=a+p;
			cout<<a<<endl;
			}
		else
			{
			s=(int)((l-1)/4)+1;
			cout<<s<<endl;
for(n=1;n<=s;++n)
	{
	p=p*26;
	if(p>1000000007)
	p=p%1000000007;
	}
			a=a+p;
			cout<<a<<endl;
			}
		a=a%1000000007;
		}
	}
	else
	{p=1;
	for(l=l+1;l<=r;++l)
		{
		if((l%2==0)&&(l%4!=0))
			{
			s=(int)(l/4)+1;
			cout<<s<<endl;
for(n=1;n<=s;++n)
	{
	p=p*26;
	if(p>1000000007)
	p=p%1000000007;
	}
	cout<<p<<endl;
			a=a+p;
			cout<<a<<endl;
			}
		else if(l%4==0)
			{
			s=(int)(l/4);
			cout<<s<<endl;
for(n=1;n<=s;++n)
	{
	p=p*26;
	if(p>1000000007)
	p=p%1000000007;
	}
			a=a+p;
			cout<<a<<endl;
			}
		else if(((l-1)%2==0)&&((l-1)%4!=0))
			{
			s=(int)((l-1)/4)+2;
			cout<<s<<endl;
for(n=1;n<=s;++n)
	{
	p=p*26;
	if(p>1000000007)
	p=p%1000000007;
	}
			a=a+p;
			cout<<a<<endl;
			}
		else
			{
			s=(int)((l-1)/4)+1;
			cout<<s<<endl;
for(n=1;n<=s;++n)
	{
	p=p*26;
	if(p>1000000007)
	p=p%1000000007;
	}
			a=a+p;
			cout<<a<<endl;
			}
		a=a%1000000007;
		}
	a=a+26;
	}
	
	cout<<a<<endl;
	}
//cout<<pow(45,12);
return 0;
} 