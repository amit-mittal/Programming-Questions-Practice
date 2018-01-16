#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main(){
	int test, flag, i, j, counter;
	string str, check;

	scanf("%d",&test);

	while(test--){
		cin>>str;
		cin>>check;

		j=0;
		for(i=0;i<check.length();++i){
			if(str[j]==check[i]){
				++j;
			}
			else{
				j=0;
			}

			if(j==str.length()){
				printf("%d\n", i-j+1);
				i=i-j+2;
				j=0;
			}
		}
	}

	return 0;
}