#include <stdio.h>
#include <string.h>

int main(){
	int test,current,len;
	char str[52];

	scanf("%d",&test);

	while(test--){
		scanf("%s",str);

		len=strlen(str);

		current=(len/2)-1;
		while(current>=0){
			printf("%c", str[current]);
			--current;
		}

		current=len-1;
		while(current>=(len/2)){
			printf("%c", str[current]);
			--current;	
		}

		printf("\n");
	}

	return 0;
}