#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
	scanf("%d\n",&test);
	
	while(test--)
	{
		int a[100002]={0};
		int b[101];
		
		scanf("%d\n",&n);
		
		for(i=0;i<n;++i)
			scanf("%d",&b[i]);
		
		sort(b,b+n);
		
		//to take all permutation, take 01001 etc types bits
		//0=not taken 1=taken
		
		
	}
	
	return 0;
}
