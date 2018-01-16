#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

#define ll long long
#define s(n) scanf("%d",&n)
#define sll(n) scanf("%lld",&n)

int main(){
	int t, v;
	s(t);
	int count1 = 0;
	int count2 = 0;
	bool ans = true;
	
	while(t--){
		s(v);

		if(v==25)
			++count1;
		else if(v==50){
			++count2;
			if(count1==0)
				ans = false;
			else
				--count1;
		} else if(v==100){
			if(count2>0 && count1>0){
				--count2;
				--count1;
			} else if(count1>2){
				count1-=3;
			} else
				ans = false;
		}
	}

	if(ans)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}