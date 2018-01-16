#include <iostream>
#include <stdio.h>
#include <string.h>

#define MOD 10000009

using namespace std;

int main(){
	int test,i,check,len;
	long long int ans;
	char a[1000005];

	scanf("%d",&test);

	while(test--){
		scanf("%s",a);
		len=strlen(a);
		check=1;
		ans=1;

		if(len&1)//odd
		{
			for(i=0;i<len/2 && check==1;++i){
				if(a[i]=='?'){
					if(a[len-i-1]=='?'){
						ans*=26;
					}
				}
				else{
					if(a[len-i-1]=='?'){
						ans*=1;
					}
					else if(a[i]!=a[len-i-1]){
						ans=0;
						check=0;
					}
				}

				if(ans>MOD)
					ans%=MOD;
			}

			if(a[len/2]=='?')
				ans*=26;

			if(ans>MOD)
				ans%=MOD;
		}
		else//even
		{
			for(i=0;i<len/2 && check==1;++i){
				if(a[i]=='?'){
					if(a[len-i-1]=='?'){
						ans*=26;
					}
				}
				else{
					if(a[len-i-1]=='?'){
						ans*=1;
					}
					else if(a[i]!=a[len-i-1]){
						ans=0;
						check=0;
					}
				}

				if(ans>MOD)
					ans%=MOD;
			}
		}

		printf("%lld\n",ans);
	}

	return 0;
}