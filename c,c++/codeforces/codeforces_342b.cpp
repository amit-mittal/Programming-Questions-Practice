#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int n, m, s, f;
	int a[100005][3];

	scanf("%d %d %d %d", &n, &m, &s, &f);
	for(int i=0;i<m;++i){
		scanf("%d %d %d", &a[i][0], &a[i][1], &a[i][2]);
	}

	int curr = s;
	int time = 1;
	int in = 0;
	while(curr!=f){
		if(time==a[in][0]){
			if(curr>=a[in][1] && curr<=a[in][2]){
				printf("X");
			} else {
				if(f>s){
					if((curr+1)>=a[in][1] && (curr+1)<=a[in][2])
						printf("X");
					else{
						curr++;
						printf("R");
					}
				} else{
					if((curr-1)>=a[in][1] && (curr-1)<=a[in][2])
						printf("X");
					else{
						curr--;
						printf("L");
					}
				}
			}
			++in;
		} else {
			if(f>s){
				curr++;
				printf("R");
			}
			else{
				curr--;
				printf("L");
			}
		}
		++time;
	}
	printf("\n");

	return 0;
}
