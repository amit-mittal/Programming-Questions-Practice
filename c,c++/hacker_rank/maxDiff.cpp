#include <iostream>
#include <cstdio>

#define s(n) scanf("%d",&n)

using namespace std;

int a[100005];
int m1[100005];
int m2[100005];
long long int ans=0;
int n;

void func(int start){
	int min = a[start];
	int max = a[start];
	
	for(int i=start+1;i<=n-1;i++){
		if(m1[i]<=max && m2[i]>=min){
			ans+=((n-i)*(max-min));
			break;
		}

		if(a[i]>max)
			max = a[i];
		else if(a[i]<min)
			min = a[i];
		ans+=(max-min);
	}
}

int main(){
	s(n);
	for(int i=0;i<n;++i)
		s(a[i]);

	m1[n-1] = m2[n-1] = a[n-1];
	for(int i=n-2;i>=0;--i){
		if(a[i]>m1[i+1])
			m1[i]=a[i];
		else
			m1[i]=m1[i+1];

		if(a[i]<m2[i+1])
			m2[i]=a[i];
		else
			m2[i]=m2[i+1];
	}

	for(int i=0;i<n-1;++i){
		func(i);
	}

	printf("%lld\n", ans);

	return 0;
}