#include<iostream>
#include<stdio.h>
#include<math.h>
#include<gmp.h>

using namespace std;

unsigned long long int pro(unsigned long long int s)
{
unsigned long long int n,p=1;
for(n=1;n<=s;++n)
	{
	p=p*26;
	if(p>10000000000)
		{
		p=p%10000000000;
		}
	}
return p;
}

unsigned long long int func(unsigned long long int l,unsigned long long int r)
	{
unsigned long long int s,a=0,p,n;
	for(l=l;l<=r;++l)
		{
		p=1;
		if((l%2==0)&&(l%4!=0))
			{
			s=(int)(l/4)+1;
			cout<<s<<endl;
			p=pro(s);
			a=a+p;
			cout<<a<<endl;
			}
		else if(l%4==0)
			{
			s=(int)(l/4);
			cout<<s<<endl;
			p=pro(s);
			a=a+p;
			cout<<a<<endl;
			}
		else if(((l-1)%2==0)&&((l-1)%4!=0))
			{
			s=(int)((l-1)/4)+2;
			cout<<s<<endl;
			p=pro(s);
			a=a+p;
			cout<<a<<endl;
			}
		else
			{
			s=(int)((l-1)/4)+1;
			cout<<s<<endl;
			p=pro(s);
			a=a+p;
			cout<<a<<endl;
			}
		}
		a=a%1000000007;
	return a;
	}

int main()
{
unsigned long long int l,r,t,s,a,p,n;
mpz_t x,y;
mpz_init(x);
mpz_init(y);
mpz_set_str(y,"26",10);
scanf("%lld",&t);

while(t-->0)
	{
	scanf("%lld",&l);
	scanf("%lld",&r);
	a=0;
	if(l>1)
		{
		a=func(l,r);	
		}
	else
		{
		a=func(l+1,r);
		a=a+26;
		}
	
	cout<<a<<endl;
	}
mpz_pow_ui(x,y,12);
cout<<x;
return 0;
} 
