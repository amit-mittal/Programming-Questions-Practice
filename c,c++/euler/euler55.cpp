#include<iostream>

using namespace std;

unsigned long long int reverse(unsigned long long int n)
{
unsigned long long int s=0,q,r;
q=n;

while(q>0)
	{
	r=q%10;
	s=s*10+r;
	q=q/10;
	}

return s;
}

unsigned long long int palindrome(unsigned long long int n)
{
unsigned long long int s=0,q,r;
q=n;

while(q>0)
	{
	r=q%10;
	s=s*10+r;
	q=q/10;
	}

if(s==n)
	return n;
else
	return 0;
}

int main()
{
unsigned long long int i,s,p=0,f=0,f1=0,r;

i=196;

for(i=195;i<10000;++i)
{
s=i;f=0,p=0;	
	while(p==0)
	{
	r=reverse(s);
//	cout<<r<<endl;
	s=s+r;
	p=palindrome(s);
	++f;
//	cout<<f<<endl<<s<<endl;
	if(f>50)
		break;
	}
	if(f>50)
		{
//		cout<<i<<endl;
		++f1;
		}
}

cout<<f1;

return 0;
}
