#include <iostream>
#include <cstdio>
#include <map>
#include <cstring>

using namespace std;

struct classcomp {
	bool operator() (const char *lhs, const char *rhs){
		return strcmp(lhs, rhs) < 0;
	}
};

void cleanup(char *a){
	int len = strlen(a);
	for(int i=0;i<len;++i){
		if(a[i]==' ' || a[i]=='\n'){
			a[i] = '\0';
			break;
		}
	}
}

int main(){
	int n;
	scanf("%d",&n);
	getchar();

	while(n--){
		char a[10005];
		map<char*, int, classcomp> mymap;

		fgets(a, 10004, stdin);
		char *word;
		word = strtok(a, " \n");
		while(word!=NULL){
			if(word!=NULL && word[0]!=' ' && word[0]!='\n' && word[0]!='\0' && strlen(word)!=0){
				cleanup(word);
				mymap[word]++;
				//printf("*%s %c %c %d* ", word, word[0], word[1], strlen(word));
			}
			
			word = strtok(NULL, " ");
		}
		printf("%d\n", mymap.size());
	}
	return 0;
}
