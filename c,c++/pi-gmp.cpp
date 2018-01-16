#include<gmpxx.h>
#include<iostream>
#include<iomanip>


int main() 
{
	long prec = 1000;
	mpf_set_default_prec(prec);
	
	mpf_class a(1);
	mpf_class b(mpf_class(1)/sqrt(mpf_class(2)));
	mpf_class t(mpf_class(1)/mpf_class(4));
	mpf_class p(1);
	mpf_class x,y,pi;
	
	while ( a - b > mpf_class(1e-1000))
	{
		x = (a + b)/2;
		y = sqrt(a*b);
		t = t - p*(a-x)*(a-x);
		a = x;
		b = y;
		p *=2;
	}
	
	pi =  (a+b)*(a+b)/(mpf_class(4)*t);
	
	std::cout << std::setprecision(80) << pi << std::endl;
	
	return 0;
}
