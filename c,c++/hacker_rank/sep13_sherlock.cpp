#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int test, n;
	
	scanf("%d", &test);
	
	while(test--){
		scanf("%d", &n);
		int m5 = n/3;
		int m3 = -1;
		for(int i=m5;i>=0;--i){
			int rest = n - 3*i;
			if(rest%5==0){
				m5 = i;
				m3 = (n-3*i)/5;
				break;
			}
		}
		//printf("%d %d\n", m5, m3);

		if(m3==-1){
			printf("-1\n");
		} else {
			for(int i=0;i<(3*m5);++i)
				printf("5");
			for(int i=0;i<(5*m3);++i)
				printf("3");
			printf("\n");
		}
	}
	
	return 0;
}
