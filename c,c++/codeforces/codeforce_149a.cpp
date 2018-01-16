#include<stdio.h>
#include<iostream>

using namespace std;

void sort(int a[],int max)
{
	int i,j,temp;
	for(i=0;i<max-1;++i)
	{
		for(j=i+1;j<max;++j)
		{
			if(a[j]>=a[i])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
}

int main()
{
	int test,t,count,sum,max,total,i,a[1002],n,k,s;

	cin>>total;
	
		count=0,sum=0;

		for(i=0;i<12;++i)
		{
			cin>>a[i];
		}
		sort(a,12);

//		for(i=0;i<n;++i)
//			printf("%d\n",a[i]);

		while((count<=12)&&(sum<total))
		{
			sum+=a[count];
			++count;
		}
		if(sum>=total)
			cout<<count<<endl;
		else
			cout<<"-1"<<endl;
	return 0;
}
