#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int co;
	int a[10];
	int b[1000005], d[1000005];

	cin>>co;
	for(int i=0;i<9;++i)
		cin>>a[i];
	
	for(int i=0;i<=co;++i){
		b[i] = 0;
		d[i] = -1;
	}

	for(int i=1;i<=co;++i){
		for(int j=0;j<9;++j){
			if((i>=a[j]) && (b[i]<=b[i-a[j]]+1)){
				b[i] = b[i-a[j]]+1;
				d[i] = j+1;
			}
		}
	}

	int s = co;
	if(d[s]==-1){
		cout<<"-1";
	}

	while(d[s]!=-1){
		cout<<d[s];
		s = s - a[d[s]-1];
	}

	return 0;
}