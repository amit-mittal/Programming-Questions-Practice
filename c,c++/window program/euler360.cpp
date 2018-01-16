#include<iostream.h>
#include<math.h>

int main()
{
int x,y,g=0;
double z,f,a;

for(x=-46;x<46;++x)
{
	for(y=-46;y<46;++y)
	{
		z=sqrt(pow(45,2)-pow(x,2)-pow(y,2));
		f=modf(z,&a);
		if(f==0)
			++g;
	}


}
cout<<45*g;

return 0;
}