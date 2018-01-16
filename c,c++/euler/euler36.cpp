#include<iostream>
#include<bitset>

using namespace std;

int total=0;

int palindrome(unsigned long long int x)
{
unsigned long long int z,u=0,y;
z=x;
while(z>0)
	{
	y=z%10;
	u=10*u+y;
	z=z/10;
	}

if(u==x)
	{
	return x;
	}
else
	return 0;
}

int palindrome(unsigned long long int x,unsigned long long int w)
{
unsigned long long int z,u=0,y;
z=x;
while(z>0)
	{
	y=z%10;
	u=10*u+y;
	z=z/10;
	}

if(u==x)
	{
	cout<<w<<endl;
	::total+=w;
	return x;
	}
else
	return 0;
}

int hello(unsigned long long int n)
{
unsigned long long int q,r,s=0,g[30],f;
int i=-1;
q=n;
while(q>0)
	{
	++i;
	g[i]=q%2;
	q=q/2;
	}
while(i>=0)
{
s=10*s+g[i];
--i;
}
f=palindrome(s,n);
}


int main()
{
unsigned long long int d,a,v,c,t=0,n;


for(d=1;d<1000000;d+=2)
{
n=palindrome(d);
	if(n>0)
	{
	hello(n);
	}

}

cout<<::total;//answer is 872187

return 0;
}
