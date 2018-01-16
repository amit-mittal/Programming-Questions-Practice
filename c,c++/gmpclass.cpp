#include <iostream>
#include "gmpxx.h"

using namespace std;

int main()
{
  unsigned count = 0;
  mpz_class a = 1, a1 = 1, b = 1, b1 = 0, t;
  for ( int i = 1; i <= 1000; i++ ) {
    t = a;
    a = 2 * a + a1;
    a1 = t;
    t = b;
    b = 2 * b + b1;
    b1 = t;
    if ( a.get_str().size() > b.get_str().size() )
      count++;
  }
  cout << "Count = " << count << endl;
}
