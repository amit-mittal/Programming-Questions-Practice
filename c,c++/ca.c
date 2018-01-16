#include<stdio.h>
#include<gmp.h>

//using namespace std;

int main()
{int a;
//string("10000000000000000");

//cout<<a;

//cout<<add(string("23"),string("21"));
  
mpz_t x;
 mpz_t y;
 mpz_t result;
 
 mpz_init(x);
 mpz_init(y);
 mpz_init(result);
 
 mpz_set_str(x, "7612058254738945", 10);
 mpz_set_str(y, "9263591128439081", 10);
 
 mpz_mul(result, x, y);
 gmp_printf("\n    %Zd\n*\n    %Zd\n--------------------\n%Zd\n\n", x, y, result);
 return 'EXIT_SUCCESS';

//return 0;
}
