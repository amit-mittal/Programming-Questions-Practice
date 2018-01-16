#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int n;
	int x, c1=0, c2=0;
	scanf("%d", &n);
	for(int i=0;i<n;++i){
		scanf("%d", &x);
		if(x==5)
			++c1;
		else if(x==0)
			++c2;
	}
	int v = c1/9;
	if(v>0 && c2>0){
		for(int i=0;i<v;++i){
			for(int j=0;j<9;++j){
				printf("5");
			}
		}
		for(int i=0;i<c2;++i)
			printf("0");
	} else if(v==0 && c2>0)
		printf("0\n");
	else
		printf("-1\n");
	
	return 0;
}