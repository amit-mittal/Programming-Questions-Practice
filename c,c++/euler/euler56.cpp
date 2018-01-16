#include<iostream>
#include "gmpxx.h"
#include<math.h>

using namespace std;

int main()
{
int b,b1,l;
mpz_class a,c,d,a1,c1,s=0,r,n=0;

for(a=2	;a<100;++a)
{
	for(b=2;b<100;++b)
	{s=0;l=0;
	mpz_pow_ui(c.get_mpz_t(),a.get_mpz_t(),b);

d=c;
	while(d>0)
	{
	r=d%10;
	s=s+r;
	d=d/10;
	++l;
	}



	if(s>n)
	{
		n=s;
		a1=a;
		b1=b;
		c1=c;	
	}

	}


}

cout<<a1<<" "<<b1<<" "<<c1<<" "<<n<<" "<<l;

return 0;
}
