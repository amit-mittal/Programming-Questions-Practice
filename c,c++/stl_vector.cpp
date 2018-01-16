#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<cmath>

using namespace std;

int main()
{
	int i;
	vector<int> v1;
//	printVector("v1",v1);

	for(i=1;i<6;++i)
		v1.push_back(i);

	vector<int> v2(3,7);

	vector<int>::reverse_iterator i1=v2.rbegin();

	for(;i1!=v2.rend();i1++)
		cout<<*i1<<endl;

	cout<<v1[2];
	cout<<pow(2,15);

	return 0;
}
