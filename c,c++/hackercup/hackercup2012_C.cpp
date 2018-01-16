#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main(){
	int test, j, a[1005], end, max_len;
	char ch;
	char str[1005];

	scanf("%d",&test);

	for(j=1;j<=test;++j){
		scanf("%d %d", &w, &h);

		max_len=-1;
		i=0;
		while(ch == ' '){
			scanf("%s", str);
			
			len = strlen(str);
			a[i++]=len;

			if(len>max_len)
				max_len=len;

			ch = getchar();
		}
		end=i;

		for(i=0;i<end;++i){

		}
	}

	return 0;
}