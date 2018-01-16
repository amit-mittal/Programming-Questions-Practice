#include <iostream>
#include "gmpxx.h"

using namespace std;

int main()
{
  unsigned count = 0;
  mpz_class a = 1, a1 = 1, b = 1, b1 = 0, t,num1,den1,r,n,d;
  for ( int i = 1; i <= 1000; i++ ) {
    t = a;n=0;d=0;
    a = 2 * a + a1;
    a1 = t;
    t = b;
    b = 2 * b + b1;
    b1 = t;
 //   if ( a.get_str().size() > b.get_str().size() )
   //   count++;
num1=a;
den1=b;
	while(num1>0)
	{
	r=num1%10;
	num1=num1/10;
	++n;
	}
	
	while(den1>0)
	{
	r=den1%10;
	den1=den1/10;
	++d;
	}	
	if(n>d)
		count++;
  }
  cout << "Count = " << count << endl;
}
