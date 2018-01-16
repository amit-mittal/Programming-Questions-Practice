#include<iostream>
#include<math.h>

using namespace std;

int prime(unsigned long int p)
{
unsigned long int i,j,f=0;
j=(unsigned long int)sqrt(p);

for(i=2;i<=j;++i)
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
long double i=3,l,c,p,f=0,n;
double ratio=111;


while(ratio>10)
	{
	l=i*i;
	for(c=0;c<3;++c)
		{
		l=l-i+1;
		p=prime(l);
		if(p>0)
			++f;
		}
	n=(int)i/2;
//	cout<<n<<" ";
	n=4*n+1;
//	cout<<n<<endl;
	ratio=100*f/n;
	
//	cout<<f<<endl;
	cout<<i<<" ";
	cout<<ratio<<endl;
	i+=2;
	}
cout<<i-2;

return 0;
}
