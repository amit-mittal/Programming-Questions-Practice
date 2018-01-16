#include <stdio.h>

int main(){
	int test;
	int rl,rb,tl,tb;

	scanf("%d",&test);

	while(test--){
		scanf("%d %d %d %d",&rl,&rb,&tl,&tb);

		if((rl%tl==0 && rb%tb==0) || (rl%tb==0 && rb%tl==0))
			printf("yes\n");
		else
			printf("no\n");
	}

	return 0;
}