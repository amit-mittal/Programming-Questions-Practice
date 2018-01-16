#include<iostream>

using namespace std;

int comb(int n,int r)
{unsigned long long int p=1,c,i;

if(r>=(int)n/2)
	{
	c=r+1;
	while(c<=n)
		{
		p=p*c;
		++c;
		}
	for(i=1;i<=n-r;++i)
		{
		p=p/i;
		}
	}
else
	{
	c=n-r+1;
//	cout<<c<<endl;
	while(c<=n)
		{
		p=p*c;
		++c;
		}
//	cout<<p<<endl;
	for(i=1;i<=r;++i)
		{
		p=p/i;
		}
	}
cout<<n<<" "<<r<<" "<<p<<endl;
return p;
}

int main()
{
unsigned long long int i,r,c,f=0,d,s=0;

for(i=23;i<101;++i)
	{f=0;
	for(r=1;r<i;++r)
		{
		c=comb(i,r);
		if(c>=1000000)
			{
			++f;
			break;
			}
		}
	if(f==1)
		{
		if(i%2==1)
			{
			d=i-2*(r-1);
			cout<<d<<endl;
			s=s+d;
			--s;
			}
		else
			{
			d=i-2*(r-1);
			cout<<d<<endl;
			s=s+d;
			--s;
			}
		}
	
	}

cout<<s;	

}
