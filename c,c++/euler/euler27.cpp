#include<iostream>
#include<math.h>

using namespace std;


int prime(int p)//to check if no. is prime
{
int f=0;
int l=(int)sqrt(p);

for(int i=2;i<l;++i)
	{
	if(p%i==0)
		{
		++f;
		break;
		}
	}
if(f==0)
	return p;
else
	return 0;

}


int main()
{
long long int a,b,f,n,s,p,j=0,a1,b1;

for(a=-1000;a<1000;++a)
{
	for(b=-1000;b<1000;++b)
	{f=0;
		for(n=0;;++n)
		{
		s=n*n+a*n+b;
		p=prime(s);
		if(p>0)
			++f;
		else
			break;
		}
		
		if(f>j)
		{
		j=f;
		a1=a;
		b1=b;
		}
	}

}

cout<<a1<<" "<<b1<<" "<<a1*b1;;

return 0;
}
