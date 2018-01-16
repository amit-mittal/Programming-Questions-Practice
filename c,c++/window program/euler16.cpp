#include<iostream.h>
#include<math.h>

int main()
{
double i,r;
long int q;
i=pow(2,15);
cout<<i<<endl;
q=i;r=0;

while(q>0)
	{
	r=r+q%10;
	q=q/10;
	}
cout<<r;

  return 0;
	}