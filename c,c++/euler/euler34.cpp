#include<iostream>
#include<math.h>
#include<ctime>
//also tells how much time is taken to execute the program
using namespace std;

int fac(int n)
{

unsigned long int p=1,i;
if(n>0)
{

for(i=n;i>1;--i)
	{
	p=p*i;
	}
return p;
}
else
	return 1;

}

int main()
{
double diff;
time_t start,end;
unsigned long int n,q,s,z=0,l;
int r,a[10],i,f=0;
s=0;

for(i=0;i<10;++i)
{
a[i]=0;
}



for(n=10;n<1000000;n+=1)
{
q=n;
i=0;
s=0;
f=0;
	while(q>0)
	{
		a[i]=q%10;
	
		q=q/10;
		++i;
		++f;
	}

	for(i=0;i<f;++i)
	{
	l=fac(a[i]);
	s=s+l;
	
	}

if(s==n)
	{
	cout<<n<<endl;
	z=z+n;
	}
}


cout<<"sum="<<z<<endl;

return 0;
}
