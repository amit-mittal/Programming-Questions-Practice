#include<iostream>
#include "gmpxx.h"
#include<math.h>

using namespace std;

int main()
{
int exp=198;
mpz_t base;

mpz_init(base);

mpz_set_str(base,"10",10);
mpz_class a,c,s=0,r,d,q,i;

i=2;


for(i=2;i<101;++i)
{
d=0;
mpz_pow_ui(a.get_mpz_t(),base,exp);
	if((i==1)||(i==4)||(i==9)||(i==16)||(i==25)||(i==36)||(i==49)||(i==64)||(i==81)||(i==100))
	{
	s=s+0;
	}
	else
	{
		c=i*a;
		q=sqrt(c);
		cout<<q<<endl;
		while(d!=101)
		{
		r=q%10;
		s=s+r;
		++d;
		q=q/10;
		}
	}
}

cout<<s<<" "<<q;//40886

return 0;
}
