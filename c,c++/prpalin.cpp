#include<iostream>
#include<cmath>

using namespace std;

int prime(int p)
{
int i,j,f=0;

for(i=2;i<=sqrt(p);++i)
	{
	if(p%i==0)
		{
		++f;
		break;
		}
	}
if(f==0)
	return 1;
else
	return 0;

}

int palindrome(int n)
{
int s=0,q,r;
q=n;

while(q>0)
	{
	r=q%10;
	s=s*10+r;
	q=q/10;
	}

if(s==n)
	return 1;
else
	return 0;
}

int main()
{
int i,j,p;

int n,c,b;

cin>>n;
while(1)
	{
	c=prime(n);
	b=palindrome(n);
	if((c==1)&&(b==1))
		{
		cout<<n;
		break;
		}
	++n;
	}

return 0;
}
