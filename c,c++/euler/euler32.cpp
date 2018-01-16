#include<iostream>

using namespace std;

int product(int n)
{int q,p=1,r,f=0;
q=n;
while(q>0)
	{
	r=q%10;
	p=p*r;
	q=q/10;
	++f;
	}
return p;
}

int digit(int n)
{int q,p=1,r,f=0;
q=n;
while(q>0)
	{
	r=q%10;
	p=p*r;
	q=q/10;
	++f;
	}
return f;
}

int sum(int n)
{int q,p=0,r,f=0;
q=n;
while(q>0)
	{
	r=q%10;
	p=p+r;
	q=q/10;
	++f;
	}
return p;
}

int main()
{
int i,j,p1,p2,p,d1,d2,d,s1,s2,s3;
unsigned long int s=0;
unsigned long int l,n,k=0,m,z;


for(i=1;i<2000;++i)
	{
	p1=product(i);
	d1=digit(i);
	s1=sum(i);
	for(j=1;j<2000;++j)
		{
		p2=product(j);
		d2=digit(j);
		s2=sum(j);
		l=i*j;
		p=product(l);
		d=digit(l);
		s3=sum(l);
	
		s=p1*p2*p;
		n=d1+d2+d;
		z=s1+s2+s3;
		if((s==362880)&&(n==9)&&(z==45))//9!=362880
			{
			cout<<i<<"\t"<<j<<"\t"<<l<<endl;
			k=k+l;
			}
		}
	}
m=k/2;
m=m-5346-9954-5796;
cout<<m;

return 0;
}
