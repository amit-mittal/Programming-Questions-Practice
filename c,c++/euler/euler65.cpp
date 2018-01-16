#include<iostream>
#include "gmpxx.h"

using namespace std;

int main()
{
mpz_class f=3,c=2,oldnum=1,oldnum1=1,num=2,den=3,oldden=1,oldden1,q,r,s=0;

while(f<100)
	{
	oldnum1=oldnum;
	oldnum=num;
	oldden1=oldden;
	oldden=den;
	if(f%3==0)//1
		{
		num=oldnum+oldnum1;
		den=oldden+oldden1;
		}
	else if(f%3==1)//1
		{
		num=oldnum+oldnum1;
		den=oldden+oldden1;
		}
	else//2c
		{
		num=2*c*oldnum+oldnum1;
		den=2*c*oldden+oldden1;
		++c;
		}
	cout<<num<<" "<<den<<endl;
	++f;
	}
num=num+(2*den);

//cout<<num<<" "<<den<<endl;
q=num;

while(q>0)
	{
	r=q%10;
	s=s+r;
	q=q/10;
	}	
cout<<s;
return 0;
}
