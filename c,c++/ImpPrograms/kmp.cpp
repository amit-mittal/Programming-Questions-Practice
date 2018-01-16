#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

void computePrefix(char *s, int arr[]){
	int len = strlen(s);
	arr[0] = arr[1] = 0;
	for(int i=1;i<len;++i){
		int j = arr[i];
		while(j && s[i]!=s[j]){
			j = arr[j];
		}
		if(s[i]==s[j])
			arr[i+1] = j+1;
		else
			arr[i+1] = 0;
	}
}

void match(char *s, char *t, int *arr){
	int n = strlen(s);
	int m = strlen(t);

	int q = 0;
	for(int i=0;i<n;++i){
		while(q && s[i]!=t[q]){
			q = arr[q];
		}

		if(s[i]==t[q])
			q = q+1;

		if(q==m){
			printf("Index = %d\n", i);
			q = arr[q];
		}
	}
}

int main(){
	char s[] = "bacbabaababacabaabcababacabab";
	char t[] = "ababaca";
	
	int arr[10];
	computePrefix(t, arr);

	for(int i=0;i<=7;++i){
		printf("%d ", arr[i]);
	}
	printf("\n");

	match(s, t, arr);

	return 0;
}