#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

#define ll long long
#define s(n) scanf("%d",&n)
#define sll(n) scanf("%lld",&n)

int main(){
	ll int x, y;
	sll(x), sll(y);

	if(x*y>0){
		if(x>0){
			cout<<"0 "<<x+y<<" "<<x+y<<" 0";
		} else {
			cout<<x+y<<" 0 0 "<<x+y;
		}
	} else {
		if(x>0){
			cout<<"0 "<<y-x<<" "<<x-y<<" 0";
		} else {
			cout<<x-y<<" 0 0 "<<-x+y;
		}
	}

	return 0;
}