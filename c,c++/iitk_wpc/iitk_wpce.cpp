#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

char a[2005];
int b[2005];
bool c[2002][2002];

int main(){
	int test;
	scanf("%d",&test);
	while(test--){
		scanf("%s",a);

		int len = strlen(a);
		
		for(int i=0;i<len;++i){
			for(int j=0;j<len;++j){
				c[i][j] = false;
			}
		}

		for(int i=0;i<len;++i){
			b[i] = i+1;
			c[i][i] = true;
		}
		
		for(int i=1;i<len;++i){//end
			for(int j=i-1;j>=0;--j){//start
				if(a[i]==a[j]){
					if(i-j>1)
						c[j][i] = c[j+1][i-1];
					else
						c[j][i] = true;
				} else
					c[j][i] = false;
			}
		}

		for(int i=1;i<len;++i){
			for(int j=0;j<=i;++j){
				if(c[j][i]){
				//	printf("%d %d ", j, i);
					int val;
					if(j>=1)
						val = 1 + b[j-1];
					else
						val = 1;
				//	printf("%d\n", val);
					b[i] = min(b[i], val);
				}
			}
		}

		/*for(int i=0;i<len;++i){
			printf("%d ", b[i]);
		}
		printf("\n");
*/
		printf("%d\n", b[len-1]);
	}
	return 0;
}
