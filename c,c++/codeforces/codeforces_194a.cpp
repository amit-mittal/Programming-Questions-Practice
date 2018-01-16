#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
	int k,n;
	int ans;
	
	scanf("%d %d",&n,&k);
		
	ans=k-(2*n);	
	
	ans=n-ans;
	
	if(ans<=0)
		printf("0\n");
	else
		printf("%d\n",ans);
	
	return 0;
}
