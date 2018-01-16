#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
	int test,i,arr[100005],end;
	char ch;

	scanf("%d",&test);
	getchar();

	while(test--){
		ch = getchar();
		i=0;

		while(ch>='0' && ch<='9'){
			arr[i++]=ch-'0';
			ch = getchar();
		}
		end=i;

		for(i=0;i<end;++i)
			printf("%d\n", arr[i]);

		for(i=end-2;i>=0;--i){
			if(arr[i]<arr[i+1])
				break;
			else{
				
			}
		}
		sort(arr+i,arr+end,);

		for(i=0;i<end;++i)
			printf("%d\n", arr[i]);
	}
}