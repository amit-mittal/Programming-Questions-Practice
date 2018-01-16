#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	int a[100005];
	for(int i=0;i<n;++i){
		scanf("%d",&a[i]);
	}
	
	int count = 0;
	bool val = false;
	for(int i=0;i<n;++i){
		if(i==a[i]){
			++count;
		} else if(a[a[i]]==i){
			val = true;
		}
	}

	if(val)
		count+=2;
	else if(count!=n)
		++count;

	printf("%d\n", count);

	return 0;
}