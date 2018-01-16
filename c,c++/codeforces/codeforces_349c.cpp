#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

#define ll long long

int main(){
	ll int n, a[100005];
	ll int m = -1;

	cin>>n;
	for(ll int i=0;i<n;++i){
		cin>>a[i];
		if(a[i]>m)
			m = a[i];
	}

	ll int sum = 0;
	for(ll int i=0;i<n;++i){
		sum+=(m-a[i]);
	}

	ll int more = m - sum;

	if(more>0){
		ll int mat = more/n;
		if(more%n!=0)
			++mat;
		cout<<(m + mat)<<endl;
	} else {
		cout<<(m)<<endl;
	}

	return 0;
}