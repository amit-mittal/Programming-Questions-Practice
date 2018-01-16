#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main(){
	char str[5005], i, len;

	scanf("%s", str);

	while(str[0]!='0'){
		len = strlen(str);

		func(0, len);

		scanf("%s", str);
	}

	return 0;
}