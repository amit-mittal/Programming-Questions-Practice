#include <iostream>
#include <cstdio>

#define MAX 2000000

using namespace std;

int func(int val){
	if(val==0)
		return 0;

	int orig = val;
	int count = 0, rem, quot, d = 1, r;
	while((val/10)>0){
		rem = orig%d;
		r = val%10;
		quot = val/10;

		count+=((quot-1)*(d));
		if(r==0)
			count+=(rem+1);
		else
			count+=d;

//		cout<<r<<" "<<rem<<" "<<count<<" "<<d<<" "<<quot<<endl;
		d*=10;
		val = val/10;
//		cout<<val<<endl;
	}
	return count;
}

int main(){
	int test, a, b, c[MAX], i;

	scanf("%d",&test);

	while(test--){
		scanf("%d%d",&a,&b);

		printf("%d\n", func(b)-func(a-1));
	}

	return 0;
}