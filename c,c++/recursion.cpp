#include<iostream>
#include<math.h>

using namespace std;


int main()
{

unsigned long long int i=0,den=1,n,d,f=0,r,num=0,num1,den1,oldnum;
long double s=0,s1;

while(i<=1000)
{n=0;d=0;
oldnum=num;
num=den;
den=(2*den)+oldnum;

num1=num+den;	
den1=den;	

	while(num1>0)
	{
	r=num1%10;
	num1=num1/10;
	++n;
	}
	
	while(den1>0)
	{
	r=den1%10;
	den1=den1/10;
	++d;
	}	

	if(n>d)
		++f;
cout<<num<<" "<<den<<endl;
//cout<<s1<<endl;
++i;
}

cout<<f;

return 0;
}
