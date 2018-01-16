#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

bool found(char* ref, char* sub){
	int len1 = strlen(ref);
	int len2 = strlen(sub);

	for(int i=0;i<len1;){
		for(int j=0;j<len2;++j){
			if(ref[i]!=sub[j]){
				return false;
			} else {
				++i;
			}
		}
	}

	return true;
}

bool contains(char *substr, char *mainstr){
	int len = strlen(substr);
	int len1 = strlen(mainstr);

	if(len1%len!=0)
		return false;

	for(int i=0;i<len;++i){
		for(int j=i;j<len1;j+=len){
			if(substr[i]!=mainstr[j])
				return false;
		}
	}
	return true;
}

int main(){
	int test;
	scanf("%d",&test);
	while(test--){
		char a[100005], b[100005];
		scanf("%s %s", a, b);
		
		int len1 = strlen(a);
		int len2 = strlen(b);

		char temp[100005];
		for(int i=0;i<len1;++i){
			temp[i] = a[i];
			temp[i+1] = '\0';
			bool ans = contains(temp, a);
			if(ans)
				break;
		}

		char temp1[100005];
		for(int i=0;i<len2;++i){
			temp1[i] = b[i];
			temp1[i+1] = '\0';
			bool ans = contains(temp1, b);
			if(ans)
				break;
		}

//		printf("%s %s\n", temp, temp1);

		if(strcmp(temp, temp1) == 0)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
