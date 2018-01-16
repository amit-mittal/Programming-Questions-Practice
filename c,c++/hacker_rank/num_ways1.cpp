#include <iostream>
#include <cstdio>

#define s(n) scanf("%d",&n)
#define MOD 1000000007

using namespace std;

int arr[1005],n,a,b;
int count=1;

void func(int largest){
	if(arr[largest]!=1)
		return;

	++count;
	if(count>MOD)
		count%=MOD;

	int flag1=0, flag2=0;
	if(a*largest<=n && arr[a*largest]==1){
		arr[a*largest]=0;
		flag1=1;
	}
	
	if(b*largest<=n && arr[b*largest]==1){
		arr[b*largest]=0;
		flag2=1;
	}
	
	for(int i=largest+1;i<=n;++i){
		if(arr[i]==1){
			func(i);
		}
	}

	if(flag1==1)
		arr[a*largest]=1;
	
	if(flag2==1)
		arr[b*largest]=1;
}

int main(){
	int m,x;

	s(n), s(a), s(b);
	s(m);

	for(int i=1;i<=n;++i)
		arr[i]=1;

	for(int i=0;i<m;++i){
		s(x);
		arr[x]=-1;
	}

	for(int i=1;i<=n;++i){
		if(arr[i]==1){
			func(i);
		}
	}

	printf("%d\n", count);

	return 0;
}