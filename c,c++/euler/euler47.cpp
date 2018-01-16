#include<iostream>
#include<math.h>

using namespace std;


int main()
{
unsigned long int b[1000000],o=0,p,j,f,c[1000000],k=0,i,h;


for(p=2;p<1000000;++p)//generates all primes and stores in b[]
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
	{
	b[o]=p;
	++o;
	}
}

for(i=2;i<1000000;++i)
{
j=0;f=0;
cout<<i<<"=";
	while(b[j]<=i)
	{
		if(i%b[j]==0)
			{
			cout<<b[j]<<" ";
			++f;
			}
		++j;
	}
c[k]=f;
cout<<endl;
h=k;
if((h>2)&&(c[h]==c[h-1])&&(c[h-2]==c[h-3])&&(c[h-1]==c[h-2])&&(c[h]==4))
	{		
	cout<<h<<"&"<<h+1<<"&"<<h+2<<"&"<<h-1<<endl;
	break;
	}
++k;
}

/*for(h=3;h<=k;++h)
{
	if((c[h]==c[h-1])&&(c[h-2]==c[h-3])&&(c[h-1]==c[h-2])&&(c[h]==4))
		cout<<h<<"&"<<h+1<<"&"<<h+2<<"&"<<h-1<<endl;
}
*/
return 0;
}
