#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main(){
	int test, max, len, i, count, prev_count, curr_max;
	char c, str[20005];

	scanf("%d",&test);

	getchar();

	while(test--){
		max=-1;
		prev_count=-1;
		curr_max=1;

		fgets(str, 20005, stdin);

		for(i=0;str[i]!='\0';++i){
			count=0;
			while(str[i]>='a' && str[i]<='z'){
				++count;
				++i;
			}

			if(count>0){
				if(prev_count==-1){
					prev_count=count;
					max=curr_max;
				}
				else{
					if(prev_count==count)
						++curr_max;
					else{
						if(curr_max>max){
							max=curr_max;
						}
						curr_max=1;
					}
					prev_count=count;
				}
			}
		}

		if(max>-1)
			printf("%d\n", max);
//		printf("%s\n", str);
	}

	return 0;
}