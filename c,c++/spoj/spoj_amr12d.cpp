#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main(){
	int test, b[51],i,len,j,n,m,ans,k;
	char a[12];

	scanf("%d",&test);

	while(test--){
		scanf("%s",a);
		
		len=strlen(a);

		ans=1;
		for(i=0;i<len/2;++i){
			if(a[i]!=a[len-i-1]){
				ans=0;
				break;
			}
		}

		if(ans==1)
			printf("YES\n");
		else
			printf("NO\n");
	}

	return 0;
}