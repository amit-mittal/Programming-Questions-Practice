#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <map>
#include <cstring>

using namespace std;

#define MAX 100000

struct classcomp {
	bool operator()(char const *a, char const *b){
		return strcmp(a, b) < 0;
	}
};

map<char*, int, classcomp> m1;
map<char*, int, classcomp> m2;

void cleanup(char *s, int len){
	for(int i=len-1;i>=0;--i){
		if(s[i]>='a' && s[i]<='z'){
			return;
		}
		s[i] = '\0';
	}
}

void convert(char *s){
	int len = strlen(s);
	for(int i=0;i<len;++i){
		if(s[i]>='A'&& s[i]<='Z')
			s[i] = s[i]-'A'+'a';
	}	
}

bool check(char *s, int len){
	if(len<=4)
		return false;
	return true;
}

int main(){
	srand(time(NULL));

	FILE *fp = fopen("apple-computers.txt", "r");
	while(!feof(fp)){
		char *s = new char[50];
		fscanf(fp, "%s", s);
		convert(s);
		int len = strlen(s);
		cleanup(s, len);
		len = strlen(s);
		if(check(s, len)){
			m1[s]=1;
		}
	}
	fclose(fp);

	fp = fopen("apple-fruit.txt", "r");
	while(!feof(fp)){
		char *s = new char[50];
		fscanf(fp, "%s", s);
		convert(s);
		int len = strlen(s);
		cleanup(s, len);
		len = strlen(s);
		if(check(s, len)){
			m2[s]=1;
		}
	}
	fclose(fp);

    m1["company"] = MAX;m1["steve"] = MAX;m1["jobs"] = MAX;
    m2["fruit"] = MAX;m2["tree"] = MAX;m2["seed"] = MAX;
    
	int n;
	scanf("%d", &n);
	while(n--){
		char str[1005];
		fgets(str, 1004, stdin);
		convert(str);
		
		int val1 = 0, val2 = 0;
		char *a = strtok(str, " ");
		while (a != NULL) {
			val1+=m1[a];
			val2+=m2[a];
			a = strtok (NULL, " ");
		}

		if(val1>val2){
			printf("computer-company\n");
		} else if(val1<val2){
			printf("fruit\n");
		} else {
			int r = rand()%2;
			if(r==0)
				printf("computer-company\n");
			else
				printf("fruit\n");
		}
	}

	return 0;
}