#include<iostream>

using namespace std;

int main()
{
int a[5];
int i,j,l;

for(i=0;i<5;++i)
	{
	cin>>a[i];
	}

for(i=0;i<5;++i)
{
for(j=i+1;j<5;++j)
	{
	if(a[j]<a[i])
		{
		l=a[j];
		a[j]=a[i];
		a[i]=l;
		}
	}

}

for(i=0;i<5;++i)
	cout<<a[i];


return 0;
}
