#include <stdio.h>

int main(){
	int test, ans;
	char ch;

	scanf("%d",&test);

	getchar();

	while(test--){
		ans = 1;
		ch = getchar();

		while(ch!='\n'){
			if(ch == 'D')
				ans = 0;

			ch = getchar();
		}

		if(ans == 1)
			printf("Possible\n");
		else
			printf("You shall not pass!\n");
	}

	return 0;
}