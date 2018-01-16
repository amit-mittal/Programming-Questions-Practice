#include<iostream>
#include<gmp.h>

using namespace std;

int main()
{
int i=100;

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
mpz_fac_ui(r,i);
mpz_set_str(s,"0",10);

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
