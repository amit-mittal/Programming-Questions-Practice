#include<iostream>
#include "gmpxx.h"

using namespace std;

int pandigital()
{
}

int main()
{
int d=0,i,j,k,f,j1,g,c;
mpz_class n,sum,q,a[40000],l,base=10,p,w,b[40000];
i=100000;

while(1)
{j=0;d=0;f=0;j1=0;g=0;c=0;

mpz_fib_ui (sum.get_mpz_t(),i);
q=sum;

//cout<<sum<<endl;
	while(q>0)//to stor the no. of digits
	{
	a[j]=q%10;
	q=q/10;
	++d;
//	cout<<a[j]<<" ";
	++j;
	}



for(j=0;j<9;++j)//sort the last 9 digits
{
for(k=j+1;k<9;++k)
	{
	if(a[k]<a[j])
		{
		l=a[k];
		a[k]=a[j];
		a[j]=l;
		}
	}

}

//for(j=0;j<9;++j)
//	cout<<a[j]<<" ";

	for(j=0;j<9;++j)//to check if last 9 are pandigital
	{
//	cout<<a[j]<<" ";
		if(a[j]!=j+1)
		{
			++f;
		}
	}
//cout<<d<<endl;
	if(f==0)
		{
//		cout<<i;
//		break;
		++c;
		}
//cout<<d<<endl;
	
p=sum;
mpz_pow_ui(n.get_mpz_t(),base.get_mpz_t(),d-9);

	w=p/n;
	while(w>0)//to get first 9 digits
	{
	b[j1]=w%10;
	w=w/10;
//	cout<<b[j1]<<" ";
	++j1;
	}

for(j=0;j<9;++j)//sort the first 9 digits
{
for(k=j+1;k<9;++k)
	{
	if(b[k]<b[j])
		{
		l=b[k];
		b[k]=b[j];
		b[j]=l;
		}
	}

}

for(j=0;j<9;++j)//to check if first 9 are pandigital
	{
//	cout<<b[j]<<" ";
		if(b[j]!=j+1)
		{
			++g;
		}
	}
//cout<<d<<endl;
//	cout<<g;
	if(g==0)
		{
//		cout<<i;
//		break;
		++c;
		}
	if(c==2)
		{
		cout<<i;
		break;
		}
cout<<i<<endl;	
++i;
}

return 0;
}
