#include<iostream>

using namespace std;

int main()
{
float n,d,frac=0,left=-1,n1,d1;

for(d=10000;d>=2;--d)
{
	for(n=2;n<d;++n)
	{
		frac=n/d;
		double f=3.0/7.0;
		//cout<<frac<<endl;
		if((frac<f)&&(frac>left))
		{
		left=frac;
		n1=n;
		d1=d;
		cout<<n1<<" "<<d1<<endl;
		}
		else if(frac>f)
			break;	
	
	}
//cout<<d<<endl;
}

cout<<n1<<" "<<d1;//us simple that 1000000/7=142857 and 3*142847=428571 so decreament 1

return 0;
}
