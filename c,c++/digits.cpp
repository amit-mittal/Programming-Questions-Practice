#include<iostream>
#include<gmp.h>

using namespace std;

int main()
{
mpz_t n;

mpz_init(n);

cin>>n;

cout<<mpz_sizeinbase(n,10); //this returns no. of digits in n	



return 0;
}
