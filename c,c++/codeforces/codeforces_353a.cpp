#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

#define ll long long
#define s(n) scanf("%d", &n)
#define sll(n) scanf("%lld", &n)
#define ss(n) scanf("%s", n)

int main(){
	int n;
	int x, y;
	s(n);
	int sum1 = 0;
	int sum2 = 0;
	bool t1 = false, t2 = false, t3 = false, t4 = false;
	for(int i=0;i<n;++i){
		s(x), s(y);
		sum1+=x;
		sum2+=y;

		if(x%2==0 && y%2==1)
			t2 = true;
		if(x%2==1 && y%2==0)
			t3 = true;
	}

	if(n==1){
		if(sum1%2==0 && sum2%2==0){
			printf("0\n");
		}else
			printf("-1\n");
		return 0;
	}

	if(sum1%2==1 && sum2%2==1){
		if(t2 || t3)
			printf("1\n");
		else
			printf("-1\n");
	} else if(sum1%2==0 && sum2%2==0){
		printf("0\n");
	} else if(sum1%2==0 && sum2%2==1){
		printf("-1\n");
	} else if(sum1%2==1 && sum2%2==0){
		printf("-1\n");
	}

	return 0;
}