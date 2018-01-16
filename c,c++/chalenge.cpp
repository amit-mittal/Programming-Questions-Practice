//Author: KewlJerk
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <ctime>

using namespace std;

#define FOR(i,a,b) for(i=a;i<b;i++)
#define s(a) scanf("%d",&a)

int main() {
	srand(time(NULL));
	int t, n, h, i, len;
	
	s(t), s(n), s(h);
	
	int max = -1;
	int max_len = 11;
	int val;

	len = 8;
	int count = 0;
	while(t--){
		if(count<5){
			FOR(i, 0, n){
				char str[15];
				for(int j=0;j<len;++j){
					char c = 'a' + rand()%26;
					str[j] = c;
				}
				str[len] = '\0';
				printf("%s\n", str);
				fflush(stdout);
			}
			s(val);
			if(val>max){
				max_len = len;
				max = val;
			}
			++count;
			++len;
		} else{
			len = max_len;
			FOR(i, 0, n){
				char str[15];
				for(int j=0;j<len;++j){
					char c = 'a' + rand()%26;
					str[j] = c;
				}
				str[len] = '\0';
				printf("%s\n", str);
				fflush(stdout);
			}
			s(val);
		}
	}
	return 0;
}
