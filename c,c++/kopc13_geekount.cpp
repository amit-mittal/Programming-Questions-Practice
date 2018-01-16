#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
	int test, l ,r, i, rem;
	int count, val;

	scanf("%d", &test);

	while(test--){
		count = 0;
		scanf("%d %d", &l, &r);

		if(l&1 && r&1)
			count += (r-l)/2;
		else{
			count += (r-l)/2;
			++count;
		}

		if(l%2 == 0)
			++l;

		for(i=l ; i<=r ; i+=2){
			if(i%2 == 1){
				val = i;

				while(val>0){
					rem = val%10;
					val/=10;

					if(rem%2 == 0){
						++count;
						break;
					}
				}
			}
			else
				++count;
		}

		printf("%d\n", count);
	}

	return 0;
}