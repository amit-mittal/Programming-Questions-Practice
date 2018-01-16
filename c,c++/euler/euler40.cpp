#include<iostream>
#include<gmp.h>


using namespace std;

int main()
{
unsigned long long int l=0,i;

mpz_t x;
mpz_t y;
mpz_t q;
mpz_t b;
mpz_t r;
mpz_t z;

mpz_init(x);
mpz_init(y);
mpz_init(q);
mpz_init(b);
mpz_init(r);
mpz_init(z);

mpz_set_str(x,"10",10);
mpz_set_str(z,"1",10);
mpz_set_str(y,"1",10);
//mpz_set_str();

for(i=0;i<9;++i)
{
mpz_mul(b,x,r);
mpz_add(r,b,y);
mpz_add(y,y,z);
++l;
}

cout<<"d1="<<"1"<<endl;
cout<<"d10="<<"1"<<endl;

mpz_set_str(x,"100",10);

for(i=9;i<99;++i)
{
mpz_mul(b,x,r);
mpz_add(r,b,y);
mpz_add(y,y,z);
l+=2;
if((l<102)&&(l>98))
cout<<l<<"\t"<<y<<endl;
}
cout<<"d100="<<"5"<<endl;
cout<<"d1000="<<"3"<<endl;
cout<<"d10000="<<"7"<<endl;

mpz_set_str(x,"1000",10);

for(i=99;i<999;++i)
{
mpz_mul(b,x,r);
mpz_add(r,b,y);
mpz_add(y,y,z);
l+=3;

if((l<1003)&&(l>997))
cout<<l<<"\t"<<y<<endl;
}

mpz_set_str(x,"10000",10);

for(i=999;i<9999;++i)
{
mpz_mul(b,x,r);
mpz_add(r,b,y);
mpz_add(y,y,z);
l+=4;

if((l<10004)&&(l>9996))
cout<<l<<"\t"<<y<<endl;
}

mpz_set_str(x,"100000",10);

for(i=9999;i<99999;++i)
{
mpz_mul(b,x,r);
mpz_add(r,b,y);
mpz_add(y,y,z);
l+=5;

if((l<100005)&&(l>99995))
cout<<l<<"\t"<<y<<endl;
}

cout<<"d100000="<<"2"<<endl;
cout<<"d1000000="<<"1"<<endl;

mpz_set_str(x,"1000000",10);

for(i=99999;i<190000;++i)
{
mpz_mul(b,x,r);
mpz_add(r,b,y);
mpz_add(y,y,z);
l+=6;

if((l<1000006)&&(l>999994))
cout<<l<<"\t"<<y<<endl;

}

return 0;
}
