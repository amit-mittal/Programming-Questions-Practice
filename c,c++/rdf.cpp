#include <iostream>
#include <cstdio>
#include <map>
#include <utility>

#define s(n) scanf("%d",&n)

using namespace std;

map< pair<int,int> ,double> m;

double func(int n, int k){
	if(k==1){
		return (double)(n-1)/2;
	}

	double ans=0;
	for(int i=k;i<n;++i){
		ans+=func(i,k-1);
	}
	ans=(double)ans/n;
	return ans;
}

double fun(int n, int k){
	if(k==1){
		return (double)(n-1)/2;
	}

	double ans=0;
	for(int i=k;i<n;++i){
		pair<int,int> p(i,k-1);
		ans+=m[p];
	}
	ans=(double)ans/n;
	return ans;
}

int main(){
	int test, n, k;

/*	for(int i=1;i<=100000;++i){
		for(int j=1;j<i;++j){
			pair<int,int> p1(i,j);
			m.insert( pair<pair<int,int>, double>( p1, fun(i , j) ) );
		}
		printf("%d\n", i);
	}
*/
	s(test);
	while(test--){
		s(n),s(k);
//		double ans = func(n,k);
		if(k==0){
			printf("0\n");
		}
		pair <int,int> p(n,k);
		printf("%.7lf\n", m[p]);
	}

	return 0;
}