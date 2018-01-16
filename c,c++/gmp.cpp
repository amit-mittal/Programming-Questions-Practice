#include<iostream>
#include<gmp.h>

using namespace std;

int main()
{

 mpz_t x;
 mpz_t y;
 mpz_t result;
 
 mpz_init(x);
 mpz_init(y);
 mpz_init(result);
 
 mpz_set_str(x, "7612058254738945", 10);
 mpz_set_str(y, "9263591128439081", 10);
 
 mpz_mul(result, x, y);
 cout<<x<< y<< result;
 

return 0;
}
