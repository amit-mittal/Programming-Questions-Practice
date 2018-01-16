#include <iostream>
#include <cstdio>
#include <cstring>

#define s(n) scanf("%d",&n)
#define ss(n) scanf("%s",n)

using namespace std;

int main(){
	int test,a,b,i,len;
	char str[10005];

	s(test);
	while(test--){
		int ans =0;
		ss(str);
		s(a),s(b);
		int valid=1;

		len =strlen(str);
		for(i=0;i<len/2;++i){
			if(str[i]=='/'){
//				printf("he\n");
				if(str[len-i-1]=='a'){
					ans+=a;
				}
				else if(str[len-i-1]=='b'){
					ans+=b;
				}
				else if(str[len-i-1]=='/'){
					ans+=2*min(a,b);
				}
			}
			else if(str[i]=='a'){
				if(str[len-i-1]=='b'){
					valid=0;
					break;
				}
				else if(str[len-i-1]=='/')
					ans+=a;
			}else if(str[i]=='b'){
				if(str[len-i-1]=='a'){
					valid=0;
					break;
				}
				else if(str[len-i-1]=='/')
					ans+=b;
			}
//			printf("%d\n", ans);
		}

		if(valid==0)
			printf("-1\n");
		else
			printf("%d\n", ans);
	}

	return 0;
}