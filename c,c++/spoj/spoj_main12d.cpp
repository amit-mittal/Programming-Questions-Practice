#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int gcd(int x,int y)
{
	if(y==0)
		return x;
	else
		return gcd(y,x%y);
}

int main()
{
	int test,n,m,j,i,num,max,hcf;

	scanf("%d",&test);
	
	for(j=1;j<=test;++j)
	{
		int a[1005]={0};
		
		scanf("%d %d",&n,&m);
		
		for(i=0;i<m;++i)
			scanf("%d",&a[i]);
		
		max=*max_element(a,a+m);
		
		num=n-max;
		
		hcf=gcd(n,num);
		
		num=num/hcf;
		n=n/hcf;
		
		printf("Case #%d: %d/%d\n",j,num,n);
	}
	
	return 0;
}
