#include<iostream>
#include<math.h>

using namespace std;



int main()
{
int f=0,g=0;
double i,j,l,a,b,c=1,d,e=2,o;


for(a=2;a<1000;++a)
{
f=0;c=1;
i=1/a;e=2;
//	cout<<i<<endl;
	while((c!=e)&&(c!=0)&&(e!=0))
	{
	j=10*i;
	c=modf(j,&d);
	e=modf(i,&o);
	++f;
	cout<<c<<" "<<e<<endl;	
	}
/*
if(f>g)
	{
	g=f;
	b=i;
	}
*/
}

//cout<<"value of b="<<b;

return 0;
}
