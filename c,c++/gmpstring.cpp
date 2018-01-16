#include<iostream>
#include<gmp.h>

using namespace std;

int main()
{
mpz_t x;

mpz_init(x);

mpz_set_str(x,"7438774657",10);

char *a[70]={x};

return 0;
}
