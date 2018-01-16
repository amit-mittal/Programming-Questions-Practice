#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main(){
	int test, i, len, ans;
	char str[205];

	scanf("%d",&test);
	while(test--){
		int a[26]={0};
		int b[26]={0};

		scanf("%s",str);
		len=strlen(str);

		for(i=0;i<len;++i){
			if(str[i]>='a' && str[i]<='z')
				++a[str[i]-'a'];

			if(str[i]>='A' && str[i]<='Z')
				++b[str[i]-'A'];
		}

		ans = 0;
		for(i=0;i<26;++i){
			ans+=a[i]/2;
			if(a[i]%2==1)
				ans+=1;

			ans+=b[i]/2;
			if(b[i]%2==1)
				ans+=1;
		}
		printf("%d\n", ans);
	}

	return 0;
}