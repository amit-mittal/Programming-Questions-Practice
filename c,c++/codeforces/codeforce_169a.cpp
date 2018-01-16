#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
	int n,a,b,ar[2005],i;
	scanf("%d %d %d",&n,&a,&b);
	
	for(i=0;i<n;++i)
		scanf("%d",&ar[i]);
	
	sort(ar,ar+n);
	
//	if(ar[b-1]!=ar[b])
//	{
	printf("%d\n",ar[b]-ar[b-1]);
//	}
//	else
//		printf("0\n");
	
	return 0;
}
