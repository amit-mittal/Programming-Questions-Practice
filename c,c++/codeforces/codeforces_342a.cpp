#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int n;
	int a[8] = {0};
	int b[33335][3];
	
	scanf("%d",&n);
	
	for(int i=0;i<n;++i){
		int v;
		scanf("%d", &v);
		a[v]++;
	}

	if(a[5]>0 || a[7]>0){
		printf("-1\n");
		return 0;
	} else {
		int q = 0;
		for(int i=1;i<7;++i){
			for(int j=i+1;j<7;++j){
				for(int k=j+1;k<7;++k){
					if(a[i]>0 && a[j]>0 && a[k]>0 && j%i==0 && k%j==0){
						b[q][0] = i, b[q][1] = j, b[q][2] = k;
						++q;
						--a[k], --a[j], --a[i];
					}
				}
			}
		}

		bool z = true;
		for(int i=0;i<7;++i){
			if(a[i]!=0){
				z = false;
				break;
			}
		}

		if(z){
			for(int i=0;i<q;++i){
				printf("%d %d %d\n", b[i][0], b[i][1], b[i][2]);
			}
		} else {
			printf("-1\n");
		}
	}

	return 0;
}
