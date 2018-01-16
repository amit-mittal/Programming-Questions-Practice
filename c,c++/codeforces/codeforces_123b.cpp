#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
	int n,m,mid,i,val;
	
	scanf("%d%d",&n,&m);
	
	mid=(m+1)/2;
	val=mid;
	
	i=1;
	while(n--)
	{
		printf("%d\n",val);
		
		if(m%2==0 && i==m-1)
		{
			val=m;
		}
		else
			val+=(pow(-1,i))*i;
		
		if(i>=m)
		{
			i=0;
			val=mid;
		}
		++i;
	}
	
	return 0;
}
