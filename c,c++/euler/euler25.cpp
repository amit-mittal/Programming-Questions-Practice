#include<iostream>
#include<gmp.h>
#include<math.h>

using namespace std;

int main()
{
int f=2;
int k=0;

mpz_t x;
mpz_t y;
mpz_t r;
mpz_t t;
mpz_t q;

mpz_init(x);
mpz_init(y);
mpz_init(r);
mpz_init(t);
mpz_init(q);

mpz_set_str(x,"1",10);
mpz_set_str(y,"1",10);
mpz_set_str(t,"0",10);

cout<<x<<endl<<y<<endl;

for(int i=0;i<4800;++i)
{
cout<<"i="<<i<<endl;
mpz_add(r,x,y);
cout<<r<<endl;
mpz_set(x,y);
mpz_set(y,r);
cout<<"digits-"<<mpz_sizeinbase(r,10)<<endl;
}

//if(unsigned long int mpz_)

return 0;
}
