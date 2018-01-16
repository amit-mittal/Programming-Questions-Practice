#include<iostream>
#include<cstdio>
#include<numeric>
#include<algorithm>
#include<math.h>

using namespace std;

int main()
{
	int n,k,r,val,sum,q;
	double v;
	
	scanf("%d %d",&n,&k);
	
	v=(double)n*(k-1)/k;
	val=ceil(v);
	
	for(;;++val)
	{
		sum=0;
		q=val;
		while(q>0)
		{
			sum+=q;
			q/=k;
		}
		if(sum>=n)
			break;
	}

	printf("%d\n",val);

	return 0;
}
