#include<iostream>
#include<gmp.h>

using namespace std;

int main()
{
int i;

mpz_t x;
mpz_t r;
mpz_t s;
mpz_t l;

mpz_init(x);
mpz_init(x);
mpz_init(r);
mpz_init(l);
mpz_init(s);

mpz_set_str(s,"0",10);
mpz_set_str(x,"1",10);
mpz_set_str(l,"1",10);

for(i=1;i<1001;++i)
{
mpz_pow_ui(r,x,i);
//cout<<r<<endl;
mpz_add(x,x,l);
mpz_add(s,s,r);
}

cout<<s;

return 0;
}
