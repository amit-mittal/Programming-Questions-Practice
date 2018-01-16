#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main(){
	int test,i,j;
	char str[30], s[105], a[105];

	scanf("%d",&test);
	scanf("%s", str);

	while(test--){
		scanf("%s",s);

		int len = strlen(s);
		for(i=0;i<len;++i){
			if(s[i]>='a' && s[i]<='z')
				a[i]=str[s[i]-'a'];
			else if(s[i]>='A' && s[i]<='Z')
				a[i]=str[s[i]-'A']+'A'-'a';
			else if(s[i]=='_')
				a[i]=' ';
			else
				a[i]=s[i];
		}
		a[i]='\0';
		printf("%s\n", a);
	}

	return 0;
}