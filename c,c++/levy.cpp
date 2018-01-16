#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int test, n, a[10005]={0}, b[10005]={0}, val;
	scanf("%d",&test);
	
	for(int i=2;i*i<=10000;++i){
		if(a[i] == 0){
			val = i*i;
			while(val<=10000){
				a[val]=1;
				val+=i;
			}
		}
	}

	for(int i=2;i<=10000;++i){
		if(a[i]==0){
			for(int j=2;j<=10000;++j){
				if(a[j]==0){
					if(i+2*j<=10000){
						++b[i+2*j];
					} else{
						break;
					}
				}
			}
		}
	}

	while(test--){
		scanf("%d",&n);
		if(n<=5)
			printf("0\n");
		else
			printf("%d\n", b[n]);
	}
	return 0;
}