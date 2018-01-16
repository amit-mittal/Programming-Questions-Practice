#include <iostream>
#include <cstdio>
#include <set>

using namespace std;

int main(){
	set<int> s;
	int n, a[105], val, x;
	
	scanf("%d", &n);
	
	for(int i=0;i<n;++i){
		scanf("%d", &a[i]);
		scanf("%d", &x);

		while(x--){
			scanf("%d", &val);
			s.insert(val);
		}
	}
	for(int i=0;i<n;++i){
		s.erase(a[i]);
	}

	printf("%d\n", s.size());

	return 0;
}
