#include<iostream>
//program to sort 2-d array
using namespace std;

int main()
{
int i,j,a[2][5],k,l;

for(i=0;i<2;++i)
{
	for(j=0;j<5;++j)
	{
		cin>>a[i][j];
	}
cout<<endl<<endl;
}
for(k=0;k<2;++k)
{
for(i=0;i<5;++i)
{
for(j=i+1;j<5;++j)
	{
	if(a[k][j]<a[k][i])
		{
		l=a[k][j];
		a[k][j]=a[k][i];
		a[k][i]=l;
		}
	}

}
}

for(i=0;i<2;++i)
{
	for(j=0;j<5;++j)
	{
		cout<<a[i][j]<<"\t";
	}
cout<<endl;
}


return 0;
}
