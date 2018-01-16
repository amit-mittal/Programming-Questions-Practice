#include<iostream>
#include<gmp.h>

using namespace std;

int main()
{
int a=40,b=20;

mpz_t x;
mpz_t y;
mpz_t q;

mpz_init(x);
mpz_init(y);
mpz_init(q);

mpz_fac_ui(x,a);
mpz_fac_ui(y,b);

mpz_fdiv_q(q,x,y);
mpz_fdiv_q(q,q,y);

cout<<q;

return 0;
}
