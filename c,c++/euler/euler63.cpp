#include<iostream>
#include<math.h>
#include "gmpxx.h"

using namespace std;

int main()
{unsigned long long int c,a,b,f,l,f1=0;
for(a=1;a<10;++a)
	{
	for(b=1;b<22;++b)
		{
		f=0;
		c=pow(a,b);
		l=c;
		while(l>0)
			{
			l=l/10;
			++f;
			}
		if(f==b)
			{
			cout<<a<<" "<<b<<endl;
			++f1;
			}
		}
	}
cout<<f1;//answer is 49-also 9^21--->check with the help of scientific notation

return 0;
}
