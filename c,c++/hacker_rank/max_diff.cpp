#include <iostream>
#include <cstdio>
#include <deque>
#include <cstdlib>

#define s(n) scanf("%d",&n)
 
using namespace std;

int arr[100005];
long long int ans=0;
int n;

void printKMax(int k)
{
	std::deque<int>  Qi(k);
	std::deque<int>  Qf(k);
 
	int i;
	for (i = 0; i < k; ++i)
	{
		while ( (!Qi.empty()) && arr[i] >= arr[Qi.back()])
			Qi.pop_back();  // Remove from rear
 
		Qi.push_back(i);

		while ( (!Qf.empty()) && arr[i] <= arr[Qf.back()])
			Qf.pop_back();  // Remove from rear
 
		Qf.push_back(i);
	}
 
	for ( ; i < n; ++i)
	{ 		
 		ans+=(arr[Qi.front()] - arr[Qf.front()]);

		while ( (!Qi.empty()) && Qi.front() <= i - k)
			Qi.pop_front();  // Remove from front of queue
 
		while ( (!Qi.empty()) && arr[i] >= arr[Qi.back()])
			Qi.pop_back();
 
		Qi.push_back(i);

		while ( (!Qf.empty()) && Qf.front() <= i - k)
			Qf.pop_front();  // Remove from front of queue
 
		while ( (!Qf.empty()) && arr[i] <= arr[Qf.back()])
			Qf.pop_back();
 
		Qf.push_back(i);
	}
 	ans+=(arr[Qi.front()] - arr[Qf.front()]);
}
 
int main()
{
	s(n);
	for(int i=0;i<n;++i)
		s(arr[i]);

	for(int i=1;i<n;++i){
		ans+=abs(arr[i]-arr[i-1]);
	}

	for(int k=3;k<=n;++k){
		printKMax(k);
	}

	printf("%lld\n", ans);

	return 0;
}