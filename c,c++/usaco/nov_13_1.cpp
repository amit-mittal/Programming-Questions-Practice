#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <cmath>
#include <stack>
#include <queue>
#include <deque>
#include <algorithm>
#include <utility>
#include <fstream>

using namespace std;

#define mod 1000000007
#define inf 2147483647
#define ninf -2147483648
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define s(a) scanf("%d",&a)
#define sll(a) scanf("%lld",&a)
#define ss(a) scanf("%s",a)
#define p(a) printf("%d",a)
#define pll(a) printf("%lld",a)
#define ps(a) printf("%s",a)
#define pc(a) printf("%c",a)
#define nline printf("\n")
#define space printf(" ")
#define ll long long

struct node{
	int x;
	int y;
	int z;
};

inline bool operator<(const node& a, const node& b)
{
	if(a.x < b.x)
		return 1;
	else if(a.x > b.x)
		return 0;

	if(a.y < b.y)
		return 1;
	else if(a.y > b.y)
		return 0;

	if(a.z < b.z)
		return 1;
	else
		return 0;
	return 0;
}

set<node> s;
int n;

void make(int index, vector<int> &v, int a[]){
	if(index==3){
		struct node temp;
		temp.x = v[0], temp.y = v[1], temp.z = v[2];
		s.insert(temp);
		return;
	}
	
	for(int i=-2;i<=2;++i){
		int val = a[index] + i;
		if(val<=0){
			val+=n;
		}
		v.push_back(val);
		make(index+1, v, a);
		v.pop_back();
	}
}

int main() {
	int a[3], b[3];
	
	ifstream input;

	input.open("combo.in");

	input>>n;
	for(int i=0;i<3;++i)
		input >> a[i];
	for(int i=0;i<3;++i)
		input >> b[i];
	input.close();

	vector<int> v;

	make(0, v, a);
	make(0, v, b);

	
	ofstream output;
	output.open ("combo.out");
	output << s.size() << "\n";
	output.close();

	return 0;
}
