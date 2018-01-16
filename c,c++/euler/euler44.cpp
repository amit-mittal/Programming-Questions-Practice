#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
unsigned long long int i,n,a[10000],j,f,s,d,d1,i1,i2;

i=0;
for(n=1;n<10000;++n)
	{
	a[i]=n*(3*n-1)/2;
	++i;
	}

for(i=0;i<10000;++i)
	{
	for(j=1;j<10000;++j)
		{
		f=0;

		s=a[i]+a[j];

		if((binary_search(a,a+9999,s))&&(s<a[9999]))
			++f;

		d=a[i]-a[j];

		if((d>0)&&(binary_search(a,a+9999,d)))
			++f;

		if((f==2))
			{
//			d1=d;
//			i1=a[i];
//			i2=a[j];
			cout<<d<<endl;
			}
		}
	}
//cout<<d1<<" "<<i1<<" "<<i2 ;

return 0;
}
