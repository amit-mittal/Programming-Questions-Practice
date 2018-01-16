#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
cout.precision(0);
cout.setf(ios::fixed);
float t,s1=0,s2=0,a,b,d,a1=0,b1=0;

scanf("%f",&t);

while(t-->0)
	{
	scanf("%f",&a);
	scanf("%f",&b);
	a1+=a;
	b1+=b;
	d=a1-b1;
	if((d>0)&&(d>s1))
		{
		s1=d;
		}
	else if((d<0)&&(d<s2))
		{
		s2=d;
		}
	}
if(-s2>s1)
	{
	printf("2 ");
	cout<<-s2;
	}
else
	{
	printf("1 ");
	cout<<s1;
	}

return 0;
}
