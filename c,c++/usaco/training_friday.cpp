/*
ID: amit.mi1
PROG: friday
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

int main() {
	ifstream input;
	input.open("friday.in");

	int n;
	input >> n;
	input.close();

	//do processing
	int add[] = {12, 43, 71, 104, 134, 165, 195, 226, 257, 287, 317, 347};//non leap years
	int day = 0;
	for(int i=0;i<n;++i){
		
	}
	//processing ends
	
	ofstream output;
	output.open ("friday.out");
	output << total << '\n';
	output.close();
	
	return 0;
}
