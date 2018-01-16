#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){
	int test, n;
	char a[25][25];

	scanf("%d", &test);
	for(int t=1;t<=test;++t){
		scanf("%d", &n);
		for(int i=0;i<n;++i)
			scanf("%s", a[i]);

		int count = 0;
		for(int i=0;i<n;++i){
			for(int j=0;j<n;++j){
				if(a[i][j]=='#')
					++count;
			}
		}

		bool ans = false;
		for(int i=1;i<=n;++i){
			if(i*i == count){
				ans = true;
				break;
			}
		}

		if(!ans){
			printf("Case #%d: NO\n", t);
		} else {
			int s_x = -1;
			int s_y = -1;
			for(int i=0;i<n;++i){
				for(int j=0;j<n;++j){
					if(a[i][j]=='#'){
						s_x = i;
						s_y = j;
						break;
					}
				}
				if(s_x>-1)
					break;
			}

			bool f = true;
			int side = sqrt(count);
			for(int i=s_x;i<(s_x+side);++i){
				for(int j=s_y;j<(s_y+side);++j){
					if(i>=n || j>=n){
						f = false;
						break;
					}

					if(a[i][j]!='#'){
						f = false;
						break;
					}
				}
				if(!f)
					break;
			}

			if(f)
				printf("Case #%d: YES\n", t);
			else
				printf("Case #%d: NO\n", t);
		}
	}
	return 0;
}
