#include<iostream>
#include<gmp.h>

using namespace std;

int main()
{
double l;

mpz_t x;

mpz_init(x);

cin>>x;

cout<<mpz_get_d(x);

//cout<<l;

return 0;
}
