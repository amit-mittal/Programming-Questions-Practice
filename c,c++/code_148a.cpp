#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int a[5],i,j,b[100005]={0},p,count=0;

	for(i=0;i<5;++i)
	{
		scanf("%d",&a[i]);
	}

	for(i=0;i<4;++i)
	{
		p=a[i];j=1;
		while(p<=a[4])
		{
			b[p]=1;
			p+=a[i];			
		}
	}
//	cout<<"hi"<<endl;
	i=1;
	while(i<=a[4])
	{
//		cout<<i<<endl;
		if(b[i]==1)
		{
//			cout<<i<<endl;
			count++;
			//cout<<"yay";
		}
		++i;
//		cout<<i<<endl<<a[4]<<endl;
	}
		cout<<count<<endl;

	return 0;
}
