#include<iostream>

using namespace std;

int main()
{

int a[100]={0};
int i,j,p;

for(i=1;i<=10;++i)
	{
	j=1;p=0;
	cout<<i<<endl;
	while(p<=100)
		{
		++j;
		p=i*j;
		++a[p];
		}
	}

for(i=2;i<=100;++i)
	{
//	if(a[i]==0)
//		cout<<a[i]<<" "<<i<<endl;
	}

return 0;
}
