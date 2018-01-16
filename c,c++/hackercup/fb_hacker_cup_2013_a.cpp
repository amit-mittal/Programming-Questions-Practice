#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
	int test, len, i, val,t;
	char str[515];
	long long int sum;

	scanf("%d",&test);

	getchar();

	for(t = 1;t<=test;++t){
		int arr[30]={0};
		fgets(str, 505, stdin);

		len = strlen(str);

		for(i=0;i<len;++i){
			if(str[i]>='a' && str[i]<='z'){
				++arr[str[i] - 'a'];
			}
			else if(str[i]>='A' && str[i]<='Z'){
				++arr[str[i] - 'A'];
			}
		}

		sort(arr, arr+26);

/*		for(i=0;i<26;++i)
			printf("%d\n",arr[i]);
*/
		val = 26;
		sum = 0;
		for(i=25;i>=0;--i){
			if(arr[i]>0){
				sum+=(arr[i]*val);
				--val;
			}
		}

		printf("Case #%d: %lld\n",t,sum);
	}

	return 0;
}