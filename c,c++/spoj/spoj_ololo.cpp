#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int n, i, ans, val;

	scanf("%d",&n);

	scanf("%d",&ans);

	for(i=1;i<n;++i){
		scanf("%d",&val);

		ans = ans^val;
	}

	printf("%d\n", ans);
	
	return 0;
}
