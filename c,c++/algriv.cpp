#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

int main()
{
	long long i,val=1,r,q;

	for(i=0;val<10000;++i)
	{
		q=val;
		while(q>0)
		{
			r=q%10;
			val+=r;
			q=q/10;
		}
		printf("%lld,",val);
	}
}
