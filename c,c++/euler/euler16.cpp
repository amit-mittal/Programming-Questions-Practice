#include<iostream>
#include<gmp.h>
#include<string.h>

using namespace std;

int main()
{

int y=1000,i;
int f=0;

mpz_t x;
mpz_t r;
mpz_t c;
mpz_t d;
mpz_t s;

mpz_init(x);
mpz_init(r);
mpz_init(c);
mpz_init(d);
mpz_init(s);

mpz_set_str(c,"10",10);
mpz_set_str(x,"2",10);
mpz_set_str(s,"0",10);

mpz_pow_ui(r,x,y);
cout<<r<<endl;

for(i=0;i<500;++i)
{
mpz_fdiv_r(d,r,c);
cout<<d<<endl;
mpz_add(s,s,d);
mpz_fdiv_q(r,r,c);
}

cout<<s; 

return 0;
}
