#include<iostream>

using namespace std;

int main()
{
double i,n,j,f=0,c=0;


for(n=2;n<10000;++n)
{
f=0;
cout<<n<<endl;
for(i=2;i<10000;++i)
	{
	for(j=2;j<10000;++j)
		{
		if(i*j/(i+j)==n)
			{
			++f;
			if(i==j)
				++c;
			//cout<<i<<" "<<j<<endl;
			if(f>2000)
				{
				cout<<n<<" "<<f<<" "<<c<<endl;
				}
			break;
			}
		}
	}
}
//cout<<f<<" "<<c;

return 0;
}
