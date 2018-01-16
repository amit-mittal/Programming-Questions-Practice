#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int a[100002][2];

bool myfunction (int a, int b){
	if(a>b)
		return true;
    else
		return false;
}

int main(){
	int t;
	scanf("%d",&t);
	for(int z=0;z<t;++z){
		scanf("%d %d",&a[z][0], &a[z][1]);
		
		sort(a[0], a[z+1], myfunction);

		int till = 0;
		int ans = 0;
		for(int i=0;i<=z;++i){
			till+=a[i][1];
			if(a[i][0]-till>ans)
				ans = a[i][0]-till;
		}
		printf("%d\n", ans);
	}
	return 0;
}
