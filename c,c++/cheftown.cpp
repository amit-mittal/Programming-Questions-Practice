#include<iostream>
#include<stdio.h>
#include<set>

using namespace std;

int main(){
	int n,w,i,a[400005],ans=0;
	
	set<int> myset;

	scanf("%d %d",&n,&w);

	for(i=0;i<w-1;++i){
		scanf("%d",&a[i]);
		myset.insert(a[i]);
	}

	for(i=w-1;i<n;++i){
		scanf("%d",&a[i]);
		myset.insert(a[i]);

		if(*(--myset.end())-*myset.begin()==w-1)
			++ans;

		myset.erase(a[i-w+1]);
	}
	
	printf("%d\n",ans);

	return 0;
}