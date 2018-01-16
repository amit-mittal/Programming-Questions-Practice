#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <vector>

using namespace std;

int main(){
	int test, i, l, m, len, j;
    char s1[105], s2[105];

	scanf("%d",&test);

	for(l=1;l<=test;++l){
		scanf("%d",&m);
        scanf("%s %s",s1,s2);

        len=strlen(s1);
        for(i=0;i<len;i+=m){
            for(j=0;j<len;j+=m){

            }
        }
	}

	return 0;
}