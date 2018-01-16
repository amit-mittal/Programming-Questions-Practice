#include <stdio.h>
#include <string.h>

int main(){
	int a[155]={0},i;
	char b[1005];

	scanf("%s",b);

	for(i=0;i<strlen(b);++i)
		++a[b[i]-'a'];

	for(i=0;i<26;++i){
		if(a[i]>0)
			printf("%c %d\n",i+'a',a[i]);
	}

	return 0;
}