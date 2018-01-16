#include<iostream.h>
#include<math.h>

int fac(int k)
{
long int a,b;
b=1;
for(a=k;a>0;--a)
{a=a*b;}
return a;
}

int main()
{
long int n,t,a[1000];
long int b[1000];
int j,i;
j=0;

cout<<"enter no. of inputs-";
cin>>t;

for(i=0;i<t;++i)
	{
	j=0;
	cin>>a[i];
	n=fac(a[i]);
	if(1<=n)
		{
		while(n%10==0)
			{
			++j;
			}
		b[i]=j;
		}
	else
		break;
	}

for(i=0;i<t;++i)
	{
	cout<<b[i];
	}




return 0;
}