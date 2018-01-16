#include<iostream>
#include<gmp.h>

using namespace std;

int main()
{
unsigned long int a=7830457;
mpz_t x;
mpz_t y;
mpz_t z;
mpz_t v;

mpz_init(x);
mpz_init(y);
mpz_init(z);
mpz_init(v);

mpz_set_str(x,"2",10);
mpz_set_str(z,"28433",10);
mpz_set_str(v,"1",10);

mpz_pow_ui(y,x,a);
mpz_mul(y,y,z);
mpz_add(y,y,v);

cout<<y;

}
