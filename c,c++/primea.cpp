#include<iostream>

using namespace std;

int main()
{
int i,j,a[50]={0},p;

for(i=2;i<=10;i++)
	{j=2;
	cout<<i<<endl;
	while(p!=50)
		{
		p=i*j;
		a[p]++;
		++j;
		}
	}

//while(p!=50)

//for(i=2;i<=50;++i)
//	{
//	if(a[i]==0)
//		cout<<i<<endl;
//	}

return 0;
}
