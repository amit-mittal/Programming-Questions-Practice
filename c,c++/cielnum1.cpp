#include<iostream>
#include<cstdio>
#include<algorithm>
#include<numeric>
#include<cstring>
#include<stdlib.h>

using namespace std;

bool islucky(int num)
{
	int i,a[11]={0};

	while(num>0)
		{
			i=num%10;
			++a[i];
			num/=10;
		}
		
	if(a[8]>=a[5]&&a[5]>=a[3]&&a[0]==0&&a[1]==0&&a[2]==0&&a[4]==0&&a[6]==0&&a[7]==0&&a[9]==0&&a[8]>0)
		return 1;
	else
		return 0;
}

int main()
{
	long long int i,count=0;

	for(i=8;count<50000;++i)
	{
		if(islucky(i))
		{
			++count;
			printf("%lld\n",i);
		}
	}

	return 0;
}
