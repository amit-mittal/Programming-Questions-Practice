#include<iostream>
#include<cstdio>
#include<algorithm>

#define PI 3.141592653589793

using namespace std;

int main()
{
	int t,i,a[102],val=0;
	
	scanf("%d",&t);
	
	for(i=0;i<t;++i)
		scanf("%d",&a[i]);
		
	sort(a,a+t);

	for(i=t-1;i>=0;i-=2)
	{
		if(i-1>=0)
			val+=((a[i]*a[i])-(a[i-1]*a[i-1]));
		else
			val+=a[i]*a[i];
	}
	
	printf("%.10lf\n",(double)PI*val);
	
	return 0;
}
