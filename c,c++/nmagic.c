#include<stdio.h>
#include<string.h>

int main(){
	int test,i,j,counter;
	char string[105];
	char str[105];

	scanf("%d",&test);

	while(test--){
		counter=0;
		scanf("%s",string);

		j=0;
		for(i=strlen(string)-1;i>=0;--i){
			if(counter==0){
				if(string[i]=='7')
					str[j]='4';
				else if(string[i]=='4'){
					str[j]='7';
					counter=1;
				}
			}
			else{
				str[j]=string[i];
			}
			++j;
		}
		if(counter==0){
			str[j]='4';
			++j;
		}
		str[j]='\0';

		for(i=j-1;i>=0;--i){
			printf("%c",str[i]);
		}
		printf("\n");
	}

	return 0;
}