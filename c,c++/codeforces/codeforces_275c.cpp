#include<iostream>
#include<algorithm>
#include<cstdio>
#include<set>
using namespace std;
int n;
int m;
int a[100010];
set<int> s;
int main()
{
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=0;i<n;i++)
	{
		if(a[i]%m==0&&s.count(a[i]/m))
		{
			continue;
		}
		s.insert(a[i]);
	}
	cout<<int(s.size());
	return 0;
}