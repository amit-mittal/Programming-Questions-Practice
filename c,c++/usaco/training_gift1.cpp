/*
ID: amit.mi1
PROG: gift1
LANG: C++
*/
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

struct cmp_str
{
   bool operator()(char const *a, char const *b)
   {
      return strcmp(a, b) < 0;
   }
};

int main() {
	ifstream input;
	input.open("gift1.in");

	int n;
	map<char*, int, cmp_str> m;
	char q[12][20];

	input >> n;
	for(int i=0;i<n;++i){
		char* a = new char[20];
		input >> a;
		m[a] = i;
		strcpy(q[i], a);
	}
	
	int ans[12]={0};
	int money, count;
	char name[20];
	for(int i=0;i<n;++i){
		input >> name;
		input >> money;
		input >> count;

		int main_index = m[name];
		ans[main_index]-=money;

		if(count == 0)
			continue;
			
		int each = money/count;
		int left = money - (each*count);
		ans[main_index]+=left;
		char l[20];
		for(int j=0;j<count;++j){
			input >> l;
			int index = m[l];
			ans[index]+=each;
		}
	}
	input.close();

	ofstream output;
	output.open ("gift1.out");
	for(int i=0;i<n;++i){
		output << q[i] << " " << ans[i] << endl;
	}
	output.close();
	
	return 0;
}
