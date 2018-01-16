#include<iostream>

using namespace std;

unsigned long long int reverse(unsigned long long int n)
{
unsigned long long int q,r,s=0;
q=n;
	while(q>0)
	{
	r=q%10;
	s=10*s+r;
	q=q/10;
	}
return s;
}

int main()
{
unsigned long long int i,f=0,r,n,s,c,d,r1;

for(i=10;i<1000000000;++i)
{
n=reverse(i);
r1=i%10;
	if(r1!=0)
	{
	s=n+i;c=0,d=0;

	while(s>0)
		{
		r=s%10;
		if(r%2==0)
			{
			++c;
			break;
			}
		s=s/10;
			
		}
if(c==0)
	++f;
	}
//cout<<i<<endl;
}

cout<<f;

return 0;
}
