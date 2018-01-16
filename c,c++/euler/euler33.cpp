#include<iostream>

using namespace std;

int main()
{
double n,d;
int q1,q2,i=0;
double f,f1,f2,f3,f4;
int a[2],b[2];

for(n=10;n<100;++n)
{
	for(d=11;d<100;++d)
	{i=0;
	q1=n;
	q2=d;
	if(d>n)
		{
		f=n/d;
		while(q1>0)
			{
			a[i]=q1%10;
			q1=q1/10;
			b[i]=q2%10;
			q2=q2/10;
			++i;
			}
		f1=(double)a[1]/b[1];
		f2=(double)a[1]/b[0];
		f3=(double)a[0]/b[1];
		f4=(double)a[0]/b[0];
//		cout<<f<<" "<<f1<<" "<<f2<<" "<<f3<<" "<<f4<<endl;
		if((a[0]==b[0])&&(f1==f))
			cout<<n<<" "<<d<<endl;
		else if((a[0]==b[1])&&(f2==f))
			cout<<n<<" "<<d<<endl;
		else if((a[1]==b[0])&&(f3==f))
			cout<<n<<" "<<d<<endl;
		else if((a[1]==b[1])&&(f4==f))
			cout<<n<<" "<<d<<endl;
			}

	}

}
//387296
//38729600
return 0;
}
